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

        PrivateIncludePaths.Add("../Plugins/Marketplace/RuntimeMeshComponent");
        //PrivateIncludePaths.Add("../Plugins/Marketplace/RuntimeMeshComponent/Source/RuntimeMeshComponent");
        //PrivateIncludePaths.Add("../Plugins/Marketplace/RuntimeMeshComponent/Source/RuntimeMeshComponentEditor");
        //PrivateIncludePaths.Add("../Plugins/Marketplace/RuntimeMeshComponent/Source/RuntimeMeshComponentSlicer");
        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
