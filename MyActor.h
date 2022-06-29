// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class PLANE2_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY() //세미콜론 없음!
		USceneComponent* root;


	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* mesh1;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key0;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key1;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key2;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key3;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key4;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key5;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key6;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key7;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key8;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key9;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key10;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key11;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key12;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key13;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key14;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key15;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key16;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key17;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key18;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key19;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key20;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key21;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key22;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key23;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key24;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key25;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key26;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key27;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key28;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key29;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key30;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key31;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key32;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key33;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key34;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key35;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key36;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key37;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key38;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key39;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key40;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key41;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key42;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key43;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key44;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key45;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key46;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key47;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key48;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key49;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key50;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key51;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key52;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key53;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key54;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key55;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key56;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key57;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key58;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key59;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* key60;


	UPROPERTY(EditAnywhere)
		float t0;
	UPROPERTY(EditAnywhere)
		float t1;
	UPROPERTY(EditAnywhere)
		float t2;
	UPROPERTY(EditAnywhere)
		float t3;
	UPROPERTY(EditAnywhere)
		float t4;
	UPROPERTY(EditAnywhere)
		float t5;
	UPROPERTY(EditAnywhere)
		float t6;
	UPROPERTY(EditAnywhere)
		float t7;
	UPROPERTY(EditAnywhere)
		float t8;
	UPROPERTY(EditAnywhere)
		float t9;
	UPROPERTY(EditAnywhere)
		float t10;
	UPROPERTY(EditAnywhere)
		float t11;
	UPROPERTY(EditAnywhere)
		float t12;
	UPROPERTY(EditAnywhere)
		float t13;
	UPROPERTY(EditAnywhere)
		float t14;
	UPROPERTY(EditAnywhere)
		float t15;
	UPROPERTY(EditAnywhere)
		float t16;
	UPROPERTY(EditAnywhere)
		float t17;
	UPROPERTY(EditAnywhere)
		float t18;
	UPROPERTY(EditAnywhere)
		float t19;
	UPROPERTY(EditAnywhere)
		float t20;
	UPROPERTY(EditAnywhere)
		float t21;
	UPROPERTY(EditAnywhere)
		float t22;
	UPROPERTY(EditAnywhere)
		float t23;
	UPROPERTY(EditAnywhere)
		float t24;
	UPROPERTY(EditAnywhere)
		float t25;
	UPROPERTY(EditAnywhere)
		float t26;
	UPROPERTY(EditAnywhere)
		float t27;
	UPROPERTY(EditAnywhere)
		float t28;
	UPROPERTY(EditAnywhere)
		float t29;
	UPROPERTY(EditAnywhere)
		float t30;
	UPROPERTY(EditAnywhere)
		float t31;
	UPROPERTY(EditAnywhere)
		float t32;
	UPROPERTY(EditAnywhere)
		float t33;
	UPROPERTY(EditAnywhere)
		float t34;
	UPROPERTY(EditAnywhere)
		float t35;
	UPROPERTY(EditAnywhere)
		float t36;
	UPROPERTY(EditAnywhere)
		float t37;
	UPROPERTY(EditAnywhere)
		float t38;
	UPROPERTY(EditAnywhere)
		float t39;
	UPROPERTY(EditAnywhere)
		float t40;
	UPROPERTY(EditAnywhere)
		float t41;
	UPROPERTY(EditAnywhere)
		float t42;
	UPROPERTY(EditAnywhere)
		float t43;
	UPROPERTY(EditAnywhere)
		float t44;
	UPROPERTY(EditAnywhere)
		float t45;
	UPROPERTY(EditAnywhere)
		float t46;
	UPROPERTY(EditAnywhere)
		float t47;
	UPROPERTY(EditAnywhere)
		float t48;
	UPROPERTY(EditAnywhere)
		float t49;
	UPROPERTY(EditAnywhere)
		float t50;
	UPROPERTY(EditAnywhere)
		float t51;
	UPROPERTY(EditAnywhere)
		float t52;
	UPROPERTY(EditAnywhere)
		float t53;
	UPROPERTY(EditAnywhere)
		float t54;
	UPROPERTY(EditAnywhere)
		float t55;
	UPROPERTY(EditAnywhere)
		float t56;
	UPROPERTY(EditAnywhere)
		float t57;
	UPROPERTY(EditAnywhere)
		float t58;
	UPROPERTY(EditAnywhere)
		float t59;
	UPROPERTY(EditAnywhere)
		float t60;

	UPROPERTY(EditAnywhere)
		AActor* camera_actor;

	FVector heli_to_cam;

	float time;
};
