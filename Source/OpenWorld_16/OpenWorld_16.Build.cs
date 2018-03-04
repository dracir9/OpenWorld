// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class OpenWorld_16 : ModuleRules
{
	public OpenWorld_16(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "ProceduralMeshComponent",
            "UnrealFastNoisePlugin" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
        PublicDependencyModuleNames.AddRange(new string[] { "ShaderCore", "RenderCore", "RHI", "RuntimeMeshComponent" });
    }
}
