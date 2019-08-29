// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
#pragma once

#include "CoreTypes.h"
#include "Misc/Guid.h"

// Custom serialization version for changes made in the //Fortnite/Main stream
struct CORE_API FFortniteMainBranchObjectVersion
{
	enum Type
	{
		// Before any version changes were made
		BeforeCustomVersionWasAdded = 0,

		// World composition tile offset changed from 2d to 3d
		WorldCompositionTile3DOffset,

		// Minor material serialization optimization
		MaterialInstanceSerializeOptimization_ShaderFName,

		// Refactored cull distances to account for HLOD, explicit override and globals in priority
		CullDistanceRefactor_RemovedDefaultDistance,
		CullDistanceRefactor_NeverCullHLODsByDefault,
		CullDistanceRefactor_NeverCullALODActorsByDefault,

		// Support to remove morphtarget generated by bRemapMorphtarget
		SaveGeneratedMorphTargetByEngine,

		// Convert reduction setting options
		ConvertReductionSettingOptions,

		// Serialize the type of blending used for landscape layer weight static params
		StaticParameterTerrainLayerWeightBlendType,
	
		// Fix up None Named animation curve names, 
		FixUpNoneNameAnimationCurves, 

		// Ensure ActiveBoneIndices to have parents even not skinned for old assets
		EnsureActiveBoneIndicesToContainParents,

		// Serialize the instanced static mesh render data, to avoid building it at runtime
		SerializeInstancedStaticMeshRenderData,

		// Cache material quality node usage
		CachedMaterialQualityNodeUsage,

		// -----<new versions can be added above this line>-------------------------------------------------
		VersionPlusOne,
		LatestVersion = VersionPlusOne - 1
	};

	// The GUID for this custom version number
	const static FGuid GUID;

private:
	FFortniteMainBranchObjectVersion() {}
};