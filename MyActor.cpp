// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	root = CreateDefaultSubobject<USceneComponent>(TEXT("MyRoot"));
	RootComponent = root;

	mesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh1"));

	//이륙
	key0 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key0"));
	key1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key1"));
	key2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key2"));
	key3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key3"));
	//aileron roll
	key4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key4"));
	key5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key5"));
	key6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key6"));
	//loop
	key7 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key7"));
	key8 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key8"));
	key9 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key9"));
	key10 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key10"));
	key11 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key11"));
	key12 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key12"));
	//방향 전환
	key13 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key13"));
	//cuban eight
	key14 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key14"));
	key15 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key15"));
	key16 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key16"));
	key17 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key17"));
	key18 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key18"));
	key19 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key19"));
	key20 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key20"));
	key21 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key21"));
	key22 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key22"));
	key23 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key23"));
	key24 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key24"));
	key25 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key25"));
	//직선 이동
	key26 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key26"));
	key27 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key27"));
	//수직 이동, half turn
	key28 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key28"));
	key29 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key29"));
	//45도 하강, 이동
	key30 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key30"));
	key31 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key31"));
	//barrel roll
	key32 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key32"));
	key33 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key33"));
	key34 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key34"));
	key35 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key35"));
	key36 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key36"));
	//90도 상승, loop, spin
	key37 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key37"));
	key38 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key38"));
	key39 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key39"));
	key40 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key40"));
	key41 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key41"));
	key42 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key42"));
	key43 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key43"));
	//spin
	key44 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key44"));
	key45 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key45"));
	key46 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key46"));
	key47 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key47"));
	//이동
	key48 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key48"));
	key49 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key49"));
	key50 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key50"));
	key51 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key51"));
	key52 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key52"));
	//split
	key53 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key53"));
	key54 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key54"));
	key55 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key55"));
	key56 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key56"));
	key57 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key57"));
	//side slip
	key58 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key58"));
	key59 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key59"));
	key60 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("key60"));


	static ConstructorHelpers::FObjectFinder<UStaticMesh> HeliAsset(TEXT("StaticMesh'/Game/P/airplane.airplane'"));

	if (HeliAsset.Succeeded()) {
		UStaticMesh* m = HeliAsset.Object;
		
		mesh1->SetStaticMesh(m);
		key0->SetStaticMesh(m);
		key1->SetStaticMesh(m);
		key2->SetStaticMesh(m);
		key3->SetStaticMesh(m);
		key4->SetStaticMesh(m);
		key5->SetStaticMesh(m);
		key6->SetStaticMesh(m);
		key7->SetStaticMesh(m);
		key8->SetStaticMesh(m);
		key9->SetStaticMesh(m);
		key10->SetStaticMesh(m);
		key11->SetStaticMesh(m);
		key12->SetStaticMesh(m);
		key13->SetStaticMesh(m);
		key14->SetStaticMesh(m);
		key15->SetStaticMesh(m);
		key16->SetStaticMesh(m);
		key17->SetStaticMesh(m);
		key18->SetStaticMesh(m);
		key19->SetStaticMesh(m);
		key20->SetStaticMesh(m);
		key21->SetStaticMesh(m);
		key22->SetStaticMesh(m);
		key23->SetStaticMesh(m);
		key24->SetStaticMesh(m);
		key25->SetStaticMesh(m);
		key26->SetStaticMesh(m);
		key27->SetStaticMesh(m);
		key28->SetStaticMesh(m);
		key29->SetStaticMesh(m);
		key30->SetStaticMesh(m);
		key31->SetStaticMesh(m);
		key32->SetStaticMesh(m);
		key33->SetStaticMesh(m);
		key34->SetStaticMesh(m);
		key35->SetStaticMesh(m);
		key36->SetStaticMesh(m);
		key37->SetStaticMesh(m);
		key38->SetStaticMesh(m);
		key39->SetStaticMesh(m);
		key40->SetStaticMesh(m);
		key41->SetStaticMesh(m);
		key42->SetStaticMesh(m);
		key43->SetStaticMesh(m);
		key44->SetStaticMesh(m);
		key45->SetStaticMesh(m);
		key46->SetStaticMesh(m);
		key47->SetStaticMesh(m);
		key48->SetStaticMesh(m);
		key49->SetStaticMesh(m);
		key50->SetStaticMesh(m);
		key51->SetStaticMesh(m);
		key52->SetStaticMesh(m);
		key53->SetStaticMesh(m);
		key54->SetStaticMesh(m);
		key55->SetStaticMesh(m);
		key56->SetStaticMesh(m);
		key57->SetStaticMesh(m);
		key58->SetStaticMesh(m);
		key59->SetStaticMesh(m);
		key60->SetStaticMesh(m);

	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("HeliAsset Fail"));
	}

	mesh1->AttachTo(root);
	key0->AttachTo(root);
	key1->AttachTo(root);
	key2->AttachTo(root);
	key3->AttachTo(root);
	key4->AttachTo(root);
	key5->AttachTo(root);
	key6->AttachTo(root);
	key7->AttachTo(root);
	key8->AttachTo(root);
	key9->AttachTo(root);
	key10->AttachTo(root);
	key11->AttachTo(root);
	key12->AttachTo(root);
	key13->AttachTo(root);
	key14->AttachTo(root);
	key15->AttachTo(root);
	key16->AttachTo(root);
	key17->AttachTo(root);
	key18->AttachTo(root);
	key19->AttachTo(root);
	key20->AttachTo(root);
	key21->AttachTo(root);
	key22->AttachTo(root);
	key23->AttachTo(root);
	key24->AttachTo(root);
	key25->AttachTo(root);
	key26->AttachTo(root);
	key27->AttachTo(root);
	key28->AttachTo(root);
	key29->AttachTo(root);
	key30->AttachTo(root);
	key31->AttachTo(root);
	key32->AttachTo(root);
	key33->AttachTo(root);
	key34->AttachTo(root);
	key35->AttachTo(root);
	key36->AttachTo(root);
	key37->AttachTo(root);
	key38->AttachTo(root);
	key39->AttachTo(root);
	key40->AttachTo(root);
	key41->AttachTo(root);
	key42->AttachTo(root);
	key43->AttachTo(root);
	key44->AttachTo(root);
	key45->AttachTo(root);
	key46->AttachTo(root);
	key47->AttachTo(root);
	key48->AttachTo(root);
	key49->AttachTo(root);
	key50->AttachTo(root);
	key51->AttachTo(root);
	key52->AttachTo(root);
	key53->AttachTo(root);
	key54->AttachTo(root);
	key55->AttachTo(root);
	key56->AttachTo(root);
	key57->AttachTo(root);
	key58->AttachTo(root);
	key59->AttachTo(root);
	key60->AttachTo(root);

	key0->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 100.f), FRotator(30.0f, 0.0f, 0.0f));
	key1->SetRelativeLocationAndRotation(FVector(100.0f, 100.0f, 200.f), FRotator(0.0f, 30.0f, 90.0f));
	key2->SetRelativeLocationAndRotation(FVector(100.0f, 100.0f, 300.f), FRotator(0.0f, 30.0f, 90.0f));
	key3->SetRelativeLocationAndRotation(FVector(100.0f, 0.0f, 300.f), FRotator(30.0f, 0.0f, 0.0f));
	key4->SetRelativeLocationAndRotation(FVector(100.0f, 0.0f, 300.f), FRotator(30.0f, 0.0f, 0.0f));
	key5->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 300.f), FRotator(0.0f, 0.0f, 90.0f));
	key6->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 0.f), FRotator(0.0f, 0.0f, 0.0f));
	key7->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 30.f), FRotator(0.0f, 0.0f, 0.0f));
	key8->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 10.f), FRotator(30.0f, 0.0f, 0.0f));
	key9->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 90.0f));
	key10->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key11->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 100.f), FRotator(0.0f, 0.0f, 0.0f));
	key12->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 10.f), FRotator(30.0f, 0.0f, 0.0f));
	key13->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key14->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key15->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 100.f), FRotator(0.0f, 0.0f, 0.0f));
	key16->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 10.f), FRotator(30.0f, 0.0f, 0.0f));
	key17->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key18->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key19->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 10.f), FRotator(30.0f, 0.0f, 0.0f));
	key20->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key21->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key22->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 10.f), FRotator(30.0f, 0.0f, 0.0f));
	key23->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key24->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key25->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 10.f), FRotator(30.0f, 0.0f, 0.0f));
	key26->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key27->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key28->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key29->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key30->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key31->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key32->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key33->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key34->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key35->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key36->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key37->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key38->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key39->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key40->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key41->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key42->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key43->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key44->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key45->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key46->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key47->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key48->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key49->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key50->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key51->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key52->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key53->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key54->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key55->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key56->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key57->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key58->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));
	key59->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.f), FRotator(0.0f, 0.0f, 0.0f));
	key60->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 70.f), FRotator(0.0f, 0.0f, 0.0f));

	t0 = 0.5f;
	t1 = t0+1.5f;
	t2 = t1+1.5f;
	t3 = t2+0.5f;
	t4 = t3+1.0f;
	t5 = t4+0.5f;
	t6 = t5+1.0f;
	t7 = t6+1.0f;
	t8 = t7+1.0f;
	t9 = t8+1.0f;
	t10 = t9+1.0f;
	t11 = t10+1.0f;
	t12 = t11+1.0f;
	t13 = t12+1.0f;
	t14 = t13+1.0f;
	t15 = t14+1.0f;
	t16 = t15+1.0f;
	t17 = t16+1.0f;
	t18 = t17+1.0f;
	t19 = t18+1.0f;
	t20 = t19+1.0f;
	t21 = t20+1.0f;
	t22 = t21+1.0f;
	t23 = t22+1.0f;
	t24 = t23+1.0f;
	t25 = t24+1.0f;
	t26 = t25+1.0f;
	t27 = t26+1.0f;
	t28 = t27+1.0f;
	t29 = t28+1.0f;
	t30 = t29+1.0f;
	t31 = t30+1.0f;
	t32 = t31+1.0f;
	t33 = t32+1.0f;
	t34 = t33+1.0f;
	t35 = t34+1.0f;
	t36 = t35+1.0f;
	t37 = t36+1.0f;
	t38 = t37+1.5f;
	t39 = t38+1.5f;
	t40 = t39+0.5f;
	t41 = t40+0.5f;
	t42 = t41+0.5f;
	t43 = t42+0.5f;
	t44 = t43+1.0f;
	t45 = t44+1.0f;
	t46 = t45+1.0f;
	t47 = t46+1.0f;
	t48 = t47+1.0f;
	t49 = t48+0.5f;
	t50 = t49+1.5f;
	t51 = t50+0.5f;
	t52 = t51+0.5f;
	t53 = t52+1.0f;
	t54 = t53+1.0f;
	t55 = t54+1.0f;
	t56 = t55+1.0f;
	t57 = t56+1.0f;
	t58 = t57+1.0f;
	t59 = t58+1.0f;
	t60 = t59+2.5f;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	time = 0.f;

	if (camera_actor) {
		GetWorld()->GetFirstPlayerController()->SetViewTarget(camera_actor);
		heli_to_cam = (camera_actor->GetActorLocation() - key0->GetComponentLocation());
	}
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	time += DeltaTime;

	FVector p;
	FQuat q;
	float t;

	if (time < t0) {

		p = key0->GetRelativeLocation();
		q = FQuat(key0->GetRelativeRotation());

	}
	else if (time < t1) {
		FVector p0 = key0->GetRelativeLocation();
		FQuat q0 = FQuat(key0->GetRelativeRotation());
		FVector p1 = key1->GetRelativeLocation();
		FQuat q1 = FQuat(key1->GetRelativeRotation());
		
		t = (time - t0) / (t1 - t0);
		p = t * (p1 - p0) + p0;
		q = FQuat::Slerp(q0, q1, t);

	}
	else if (time < t2) {
		FVector p1 = key1->GetRelativeLocation();
		FQuat q1 = FQuat(key1->GetRelativeRotation());
		FVector p2 = key2->GetRelativeLocation();
		FQuat q2 = FQuat(key2->GetRelativeRotation());

		t = (time - t1) / (t2 - t1);
		p = t * (p2 - p1) + p1;
		q = FQuat::Slerp(q1, q2, t);

	}
	else if (time < t3) {
		FVector p2 = key2->GetRelativeLocation();
		FQuat q2 = FQuat(key2->GetRelativeRotation());
		FVector p3 = key3->GetRelativeLocation();
		FQuat q3 = FQuat(key3->GetRelativeRotation());

		t = (time - t2) / (t3 - t2);
		p = t * (p3 - p2) + p2;
		q = FQuat::Slerp(q2, q3, t);
	}
	else if (time < t4) {
		FVector p3 = key3->GetRelativeLocation();
		FQuat q3 = FQuat(key3->GetRelativeRotation());
		FVector p4 = key4->GetRelativeLocation();
		FQuat q4 = FQuat(key4->GetRelativeRotation());

		t = (time - t3) / (t4 - t3);
		p = t * (p4 - p3) + p3;
		q = FQuat::Slerp(q3, q4, t);
	}
	else if (time < t5) {
		FVector p4 = key4->GetRelativeLocation();
		FQuat q4 = FQuat(key4->GetRelativeRotation());
		FVector p5 = key5->GetRelativeLocation();
		FQuat q5 = FQuat(key5->GetRelativeRotation());

		t = (time - t4) / (t5 - t4);
		p = t * (p5 - p4) + p4;
		q = FQuat::Slerp(q4, q5, t);
	}
	else if (time < t6) {
		FVector p5 = key5->GetRelativeLocation();
		FQuat q5 = FQuat(key5->GetRelativeRotation());
		FVector p6 = key6->GetRelativeLocation();
		FQuat q6 = FQuat(key6->GetRelativeRotation());

		t = (time - t5) / (t6 - t5);
		p = t * (p6 - p5) + p5;
		q = FQuat::Slerp(q5, q6, t);
	}
	else if (time < t7) {
		FVector p6 = key6->GetRelativeLocation();
		FQuat q6 = FQuat(key6->GetRelativeRotation());
		FVector p7 = key7->GetRelativeLocation();
		FQuat q7 = FQuat(key7->GetRelativeRotation());

		t = (time - t6) / (t7 - t6);
		p = t * (p7 - p6) + p6;
		q = FQuat::Slerp(q6, q7, t);
	}
	else if (time < t8) {
		FVector p7 = key7->GetRelativeLocation();
		FQuat q7 = FQuat(key7->GetRelativeRotation());
		FVector p8 = key8->GetRelativeLocation();
		FQuat q8 = FQuat(key8->GetRelativeRotation());

		t = (time - t7) / (t8 - t7);
		p = t * (p8 - p7) + p7;
		q = FQuat::Slerp(q7, q8, t);
	}
	else if (time < t9) {
		FVector p8 = key8->GetRelativeLocation();
		FQuat q8 = FQuat(key8->GetRelativeRotation());
		FVector p9 = key9->GetRelativeLocation();
		FQuat q9 = FQuat(key9->GetRelativeRotation());

		t = (time - t8) / (t9 - t8);
		p = t * (p9 - p8) + p8;
		q = FQuat::Slerp(q8, q9, t);
	}
	else if (time < t10) {
		FVector p9 = key9->GetRelativeLocation();
		FQuat q9 = FQuat(key9->GetRelativeRotation());
		FVector p10 = key10->GetRelativeLocation();
		FQuat q10 = FQuat(key10->GetRelativeRotation());

		t = (time - t9) / (t10 - t9);
		p = t * (p10 - p9) + p9;
		q = FQuat::Slerp(q9, q10, t);
	}
	else if (time < t11) {
		FVector p10 = key10->GetRelativeLocation();
		FQuat q10 = FQuat(key10->GetRelativeRotation());
		FVector p11 = key11->GetRelativeLocation();
		FQuat q11 = FQuat(key11->GetRelativeRotation());

		t = (time - t10) / (t11 - t10);
		p = t * (p11 - p10) + p10;
		q = FQuat::Slerp(q10, q11, t);
	}
	else if (time < t12) {
		FVector p11 = key11->GetRelativeLocation();
		FQuat q11 = FQuat(key11->GetRelativeRotation());
		FVector p12 = key12->GetRelativeLocation();
		FQuat q12 = FQuat(key12->GetRelativeRotation());

		t = (time - t11) / (t12 - t11);
		p = t * (p12 - p11) + p11;
		q = FQuat::Slerp(q11, q12, t);
	}
	else if (time < t13) {
		FVector p12 = key12->GetRelativeLocation();
		FQuat q12 = FQuat(key12->GetRelativeRotation());
		FVector p13 = key13->GetRelativeLocation();
		FQuat q13 = FQuat(key13->GetRelativeRotation());

		t = (time - t12) / (t13 - t12);
		p = t * (p13 - p12) + p12;
		q = FQuat::Slerp(q12, q13, t);
	}
	else if (time < t14) {
		FVector p13 = key13->GetRelativeLocation();
		FQuat q13 = FQuat(key13->GetRelativeRotation());
		FVector p14 = key14->GetRelativeLocation();
		FQuat q14 = FQuat(key14->GetRelativeRotation());

		t = (time - t13) / (t14 - t13);
		p = t * (p14 - p13) + p13;
		q = FQuat::Slerp(q13, q14, t);
	}
	else if (time < t15) {
		FVector p14 = key14->GetRelativeLocation();
		FQuat q14 = FQuat(key14->GetRelativeRotation());
		FVector p15 = key15->GetRelativeLocation();
		FQuat q15 = FQuat(key15->GetRelativeRotation());

		t = (time - t14) / (t15 - t14);
		p = t * (p15 - p14) + p14;
		q = FQuat::Slerp(q14, q15, t);
	}
	else if (time < t16) {
		FVector p15 = key15->GetRelativeLocation();
		FQuat q15 = FQuat(key15->GetRelativeRotation());
		FVector p16 = key16->GetRelativeLocation();
		FQuat q16 = FQuat(key16->GetRelativeRotation());

		t = (time - t15) / (t16 - t15);
		p = t * (p16 - p15) + p15;
		q = FQuat::Slerp(q15, q16, t);
	}
	else if (time < t17) {
		FVector p16 = key16->GetRelativeLocation();
		FQuat q16 = FQuat(key16->GetRelativeRotation());
		FVector p17 = key17->GetRelativeLocation();
		FQuat q17 = FQuat(key17->GetRelativeRotation());

		t = (time - t16) / (t17 - t16);
		p = t * (p17 - p16) + p16;
		q = FQuat::Slerp(q16, q17, t);
	}
	else if (time < t18) {
		FVector p17 = key17->GetRelativeLocation();
		FQuat q17 = FQuat(key17->GetRelativeRotation());
		FVector p18 = key18->GetRelativeLocation();
		FQuat q18 = FQuat(key18->GetRelativeRotation());

		t = (time - t17) / (t18 - t17);
		p = t * (p18 - p17) + p17;
		q = FQuat::Slerp(q17, q18, t);
	}
	else if (time < t19) {
		FVector p18 = key18->GetRelativeLocation();
		FQuat q18 = FQuat(key18->GetRelativeRotation());
		FVector p19 = key19->GetRelativeLocation();
		FQuat q19 = FQuat(key19->GetRelativeRotation());

		t = (time - t18) / (t19 - t18);
		p = t * (p19 - p18) + p18;
		q = FQuat::Slerp(q18, q19, t);
	}
	else if (time < t20) {
		FVector p19 = key19->GetRelativeLocation();
		FQuat q19 = FQuat(key19->GetRelativeRotation());
		FVector p20 = key20->GetRelativeLocation();
		FQuat q20 = FQuat(key20->GetRelativeRotation());

		t = (time - t19) / (t20 - t19);
		p = t * (p20 - p19) + p19;
		q = FQuat::Slerp(q19, q20, t);
	}
	else if (time < t21) {
		FVector p20 = key20->GetRelativeLocation();
		FQuat q20 = FQuat(key20->GetRelativeRotation());
		FVector p21 = key21->GetRelativeLocation();
		FQuat q21 = FQuat(key21->GetRelativeRotation());

		t = (time - t20) / (t21 - t20);
		p = t * (p21 - p20) + p20;
		q = FQuat::Slerp(q20, q21, t);
	}
	else if (time < t22) {
		FVector p21 = key21->GetRelativeLocation();
		FQuat q21 = FQuat(key21->GetRelativeRotation());
		FVector p22 = key22->GetRelativeLocation();
		FQuat q22 = FQuat(key22->GetRelativeRotation());

		t = (time - t21) / (t22 - t21);
		p = t * (p22 - p21) + p21;
		q = FQuat::Slerp(q21, q22, t);
	}
	else if (time < t23) {
		FVector p22 = key22->GetRelativeLocation();
		FQuat q22 = FQuat(key22->GetRelativeRotation());
		FVector p23 = key23->GetRelativeLocation();
		FQuat q23 = FQuat(key23->GetRelativeRotation());

		t = (time - t22) / (t23 - t22);
		p = t * (p23 - p22) + p22;
		q = FQuat::Slerp(q22, q23, t);
	}
	else if (time < t24) {
		FVector p23 = key23->GetRelativeLocation();
		FQuat q23 = FQuat(key23->GetRelativeRotation());
		FVector p24 = key24->GetRelativeLocation();
		FQuat q24 = FQuat(key24->GetRelativeRotation());

		t = (time - t23) / (t24 - t23);
		p = t * (p24 - p23) + p23;
		q = FQuat::Slerp(q23, q24, t);
	}
	else if (time < t25) {
		FVector p24 = key24->GetRelativeLocation();
		FQuat q24 = FQuat(key24->GetRelativeRotation());
		FVector p25 = key25->GetRelativeLocation();
		FQuat q25 = FQuat(key25->GetRelativeRotation());

		t = (time - t24) / (t25 - t24);
		p = t * (p25 - p24) + p24;
		q = FQuat::Slerp(q24, q25, t);
	}
	else if (time < t26) {
		FVector p25 = key25->GetRelativeLocation();
		FQuat q25 = FQuat(key25->GetRelativeRotation());
		FVector p26 = key26->GetRelativeLocation();
		FQuat q26 = FQuat(key26->GetRelativeRotation());

		t = (time - t25) / (t26 - t25);
		p = t * (p26 - p25) + p25;
		q = FQuat::Slerp(q25, q26, t);
	}
	else if (time < t27) {
		FVector p26 = key26->GetRelativeLocation();
		FQuat q26 = FQuat(key26->GetRelativeRotation());
		FVector p27 = key27->GetRelativeLocation();
		FQuat q27 = FQuat(key27->GetRelativeRotation());

		t = (time - t26) / (t27 - t26);
		p = t * (p27 - p26) + p26;
		q = FQuat::Slerp(q26, q27, t);
	}
	else if (time < t28) {
		FVector p27 = key27->GetRelativeLocation();
		FQuat q27 = FQuat(key27->GetRelativeRotation());
		FVector p28 = key28->GetRelativeLocation();
		FQuat q28 = FQuat(key28->GetRelativeRotation());

		t = (time - t27) / (t28 - t27);
		p = t * (p28 - p27) + p27;
		q = FQuat::Slerp(q27, q28, t);
	}
	else if (time < t29) {
		FVector p28 = key28->GetRelativeLocation();
		FQuat q28 = FQuat(key28->GetRelativeRotation());
		FVector p29 = key29->GetRelativeLocation();
		FQuat q29 = FQuat(key29->GetRelativeRotation());

		t = (time - t28) / (t29 - t28);
		p = t * (p29 - p28) + p28;
		q = FQuat::Slerp(q28, q29, t);
	}
	else if (time < t30) {
		FVector p29 = key29->GetRelativeLocation();
		FQuat q29 = FQuat(key29->GetRelativeRotation());
		FVector p30 = key30->GetRelativeLocation();
		FQuat q30 = FQuat(key30->GetRelativeRotation());

		t = (time - t29) / (t30 - t29);
		p = t * (p30 - p29) + p29;
		q = FQuat::Slerp(q29, q30, t);
	}
	else if (time < t31) {
		FVector p30 = key30->GetRelativeLocation();
		FQuat q30 = FQuat(key30->GetRelativeRotation());
		FVector p31 = key31->GetRelativeLocation();
		FQuat q31 = FQuat(key31->GetRelativeRotation());

		t = (time - t30) / (t31 - t30);
		p = t * (p31 - p30) + p30;
		q = FQuat::Slerp(q30, q31, t);
	}
	else if (time < t32) {
		FVector p31 = key31->GetRelativeLocation();
		FQuat q31 = FQuat(key31->GetRelativeRotation());
		FVector p32 = key32->GetRelativeLocation();
		FQuat q32 = FQuat(key32->GetRelativeRotation());

		t = (time - t31) / (t32 - t31);
		p = t * (p32 - p31) + p31;
		q = FQuat::Slerp(q31, q32, t);
	}
	else if (time < t33) {
		FVector p32 = key32->GetRelativeLocation();
		FQuat q32 = FQuat(key32->GetRelativeRotation());
		FVector p33 = key33->GetRelativeLocation();
		FQuat q33 = FQuat(key33->GetRelativeRotation());

		t = (time - t32) / (t33 - t32);
		p = t * (p33 - p32) + p32;
		q = FQuat::Slerp(q32, q33, t);
	}
	else if (time < t34) {
		FVector p33 = key33->GetRelativeLocation();
		FQuat q33 = FQuat(key33->GetRelativeRotation());
		FVector p34 = key34->GetRelativeLocation();
		FQuat q34 = FQuat(key34->GetRelativeRotation());

		t = (time - t33) / (t34 - t33);
		p = t * (p34 - p33) + p33;
		q = FQuat::Slerp(q33, q34, t);
	}
	else if (time < t35) {
		FVector p34 = key34->GetRelativeLocation();
		FQuat q34 = FQuat(key34->GetRelativeRotation());
		FVector p35 = key35->GetRelativeLocation();
		FQuat q35 = FQuat(key35->GetRelativeRotation());

		t = (time - t34) / (t35 - t34);
		p = t * (p35 - p34) + p34;
		q = FQuat::Slerp(q34, q35, t);
	}
	else if (time < t36) {
		FVector p35 = key35->GetRelativeLocation();
		FQuat q35 = FQuat(key35->GetRelativeRotation());
		FVector p36 = key36->GetRelativeLocation();
		FQuat q36 = FQuat(key36->GetRelativeRotation());

		t = (time - t35) / (t36 - t35);
		p = t * (p36 - p35) + p35;
		q = FQuat::Slerp(q35, q36, t);
	}
	else if (time < t37) {
		FVector p36 = key36->GetRelativeLocation();
		FQuat q36 = FQuat(key36->GetRelativeRotation());
		FVector p37 = key37->GetRelativeLocation();
		FQuat q37 = FQuat(key37->GetRelativeRotation());

		t = (time - t36) / (t37 - t36);
		p = t * (p37 - p36) + p36;
		q = FQuat::Slerp(q36, q37, t);
	}
	else if (time < t38) {
		FVector p37 = key37->GetRelativeLocation();
		FQuat q37 = FQuat(key37->GetRelativeRotation());
		FVector p38 = key38->GetRelativeLocation();
		FQuat q38 = FQuat(key38->GetRelativeRotation());

		t = (time - t37) / (t38 - t37);
		p = t * (p38 - p37) + p37;
		q = FQuat::Slerp(q37, q38, t);
	}
	else if (time < t39) {
		FVector p38 = key38->GetRelativeLocation();
		FQuat q38 = FQuat(key38->GetRelativeRotation());
		FVector p39 = key39->GetRelativeLocation();
		FQuat q39 = FQuat(key39->GetRelativeRotation());

		t = (time - t38) / (t39 - t38);
		p = t * (p39 - p38) + p38;
		q = FQuat::Slerp(q38, q39, t);
	}
	else if (time < t40) {
		FVector p39 = key39->GetRelativeLocation();
		FQuat q39 = FQuat(key39->GetRelativeRotation());
		FVector p40 = key40->GetRelativeLocation();
		FQuat q40 = FQuat(key40->GetRelativeRotation());

		t = (time - t39) / (t40 - t39);
		p = t * (p40 - p39) + p39;
		q = FQuat::Slerp(q39, q40, t);
	}
	else if (time < t41) {
		FVector p40 = key40->GetRelativeLocation();
		FQuat q40 = FQuat(key40->GetRelativeRotation());
		FVector p41 = key41->GetRelativeLocation();
		FQuat q41 = FQuat(key41->GetRelativeRotation());

		t = (time - t40) / (t41 - t40);
		p = t * (p41 - p40) + p40;
		q = FQuat::Slerp(q40, q41, t);
	}
	else if (time < t42) {
		FVector p41 = key41->GetRelativeLocation();
		FQuat q41 = FQuat(key41->GetRelativeRotation());
		FVector p42 = key42->GetRelativeLocation();
		FQuat q42 = FQuat(key42->GetRelativeRotation());

		t = (time - t41) / (t42 - t41);
		p = t * (p42 - p41) + p41;
		q = FQuat::Slerp(q41, q42, t);
	}
	else if (time < t43) {
		FVector p42 = key42->GetRelativeLocation();
		FQuat q42 = FQuat(key42->GetRelativeRotation());
		FVector p43 = key43->GetRelativeLocation();
		FQuat q43 = FQuat(key43->GetRelativeRotation());

		t = (time - t42) / (t43 - t42);
		p = t * (p43 - p42) + p42;
		q = FQuat::Slerp(q42, q43, t);
	}
	else if (time < t44) {
		FVector p43 = key43->GetRelativeLocation();
		FQuat q43 = FQuat(key43->GetRelativeRotation());
		FVector p44 = key44->GetRelativeLocation();
		FQuat q44 = FQuat(key44->GetRelativeRotation());

		t = (time - t43) / (t44 - t43);
		p = t * (p44 - p43) + p43;
		q = FQuat::Slerp(q43, q44, t);
	}
	else if (time < t45) {
		FVector p44 = key44->GetRelativeLocation();
		FQuat q44 = FQuat(key44->GetRelativeRotation());
		FVector p45 = key45->GetRelativeLocation();
		FQuat q45 = FQuat(key45->GetRelativeRotation());

		t = (time - t44) / (t45 - t44);
		p = t * (p45 - p44) + p44;
		q = FQuat::Slerp(q44, q45, t);
	}
	else if (time < t46) {
		FVector p45 = key45->GetRelativeLocation();
		FQuat q45 = FQuat(key45->GetRelativeRotation());
		FVector p46 = key46->GetRelativeLocation();
		FQuat q46 = FQuat(key46->GetRelativeRotation());

		t = (time - t45) / (t46 - t45);
		p = t * (p46 - p45) + p45;
		q = FQuat::Slerp(q45, q46, t);
	}
	else if (time < t47) {
		FVector p46 = key46->GetRelativeLocation();
		FQuat q46 = FQuat(key46->GetRelativeRotation());
		FVector p47 = key47->GetRelativeLocation();
		FQuat q47 = FQuat(key47->GetRelativeRotation());

		t = (time - t46) / (t47 - t46);
		p = t * (p47 - p46) + p46;
		q = FQuat::Slerp(q46, q47, t);
	}
	else if (time < t48) {
		FVector p47 = key47->GetRelativeLocation();
		FQuat q47 = FQuat(key47->GetRelativeRotation());
		FVector p48 = key48->GetRelativeLocation();
		FQuat q48 = FQuat(key48->GetRelativeRotation());

		t = (time - t47) / (t48 - t47);
		p = t * (p48 - p47) + p47;
		q = FQuat::Slerp(q47, q48, t);
	}
	else if (time < t49) {
		FVector p48 = key48->GetRelativeLocation();
		FQuat q48 = FQuat(key48->GetRelativeRotation());
		FVector p49 = key49->GetRelativeLocation();
		FQuat q49 = FQuat(key49->GetRelativeRotation());

		t = (time - t48) / (t49 - t48);
		p = t * (p49 - p48) + p48;
		q = FQuat::Slerp(q48, q49, t);
	}
	else if (time < t50) {
		FVector p49 = key49->GetRelativeLocation();
		FQuat q49 = FQuat(key49->GetRelativeRotation());
		FVector p50 = key50->GetRelativeLocation();
		FQuat q50 = FQuat(key50->GetRelativeRotation());

		t = (time - t49) / (t50 - t49);
		p = t * (p50 - p49) + p49;
		q = FQuat::Slerp(q49, q50, t);
	}
	else if (time < t51) {
		FVector p50 = key50->GetRelativeLocation();
		FQuat q50 = FQuat(key50->GetRelativeRotation());
		FVector p51 = key51->GetRelativeLocation();
		FQuat q51 = FQuat(key51->GetRelativeRotation());

		t = (time - t50) / (t51 - t50);
		p = t * (p51 - p50) + p50;
		q = FQuat::Slerp(q50, q51, t);
	}
	else if (time < t52) {
		FVector p51 = key51->GetRelativeLocation();
		FQuat q51 = FQuat(key51->GetRelativeRotation());
		FVector p52 = key52->GetRelativeLocation();
		FQuat q52 = FQuat(key52->GetRelativeRotation());

		t = (time - t51) / (t52 - t51);
		p = t * (p52 - p51) + p51;
		q = FQuat::Slerp(q51, q52, t);
	}
	else if (time < t53) {
		FVector p52 = key52->GetRelativeLocation();
		FQuat q52 = FQuat(key52->GetRelativeRotation());
		FVector p53 = key53->GetRelativeLocation();
		FQuat q53 = FQuat(key53->GetRelativeRotation());

		t = (time - t52) / (t53 - t52);
		p = t * (p53 - p52) + p52;
		q = FQuat::Slerp(q52, q53, t);
	}
	else if (time < t54) {
		FVector p53 = key53->GetRelativeLocation();
		FQuat q53 = FQuat(key53->GetRelativeRotation());
		FVector p54 = key54->GetRelativeLocation();
		FQuat q54 = FQuat(key54->GetRelativeRotation());

		t = (time - t53) / (t54 - t53);
		p = t * (p54 - p53) + p53;
		q = FQuat::Slerp(q53, q54, t);
	}
	else if (time < t55) {
		FVector p54 = key54->GetRelativeLocation();
		FQuat q54 = FQuat(key54->GetRelativeRotation());
		FVector p55 = key55->GetRelativeLocation();
		FQuat q55 = FQuat(key55->GetRelativeRotation());

		t = (time - t54) / (t55 - t54);
		p = t * (p55 - p54) + p54;
		q = FQuat::Slerp(q54, q55, t);
	}
	else if (time < t56) {
		FVector p55 = key55->GetRelativeLocation();
		FQuat q55 = FQuat(key55->GetRelativeRotation());
		FVector p56 = key56->GetRelativeLocation();
		FQuat q56 = FQuat(key56->GetRelativeRotation());

		t = (time - t55) / (t56 - t55);
		p = t * (p56 - p55) + p55;
		q = FQuat::Slerp(q55, q56, t);
	}
	else if (time < t57) {
		FVector p56 = key56->GetRelativeLocation();
		FQuat q56 = FQuat(key56->GetRelativeRotation());
		FVector p57 = key57->GetRelativeLocation();
		FQuat q57 = FQuat(key57->GetRelativeRotation());

		t = (time - t56) / (t57 - t56);
		p = t * (p57 - p56) + p56;
		q = FQuat::Slerp(q56, q57, t);
	}
	else if (time < t58) {
		FVector p57 = key57->GetRelativeLocation();
		FQuat q57 = FQuat(key57->GetRelativeRotation());
		FVector p58 = key58->GetRelativeLocation();
		FQuat q58 = FQuat(key58->GetRelativeRotation());

		t = (time - t57) / (t58 - t57);
		p = t * (p58 - p57) + p57;
		q = FQuat::Slerp(q57, q58, t);
	}
	else if (time < t59) {
		FVector p58 = key58->GetRelativeLocation();
		FQuat q58 = FQuat(key58->GetRelativeRotation());
		FVector p59 = key59->GetRelativeLocation();
		FQuat q59 = FQuat(key59->GetRelativeRotation());

		t = (time - t58) / (t59 - t58);
		p = t * (p59 - p58) + p58;
		q = FQuat::Slerp(q58, q59, t);
	}
	else if (time < t60) {
		FVector p59 = key59->GetRelativeLocation();
		FQuat q59 = FQuat(key59->GetRelativeRotation());
		FVector p60 = key60->GetRelativeLocation();
		FQuat q60 = FQuat(key60->GetRelativeRotation());

		t = (time - t59) / (t60 - t59);
		p = t * (p60 - p59) + p59;
		q = FQuat::Slerp(q59, q60, t);
	}
	else {
		p = key60->GetRelativeLocation();
		q = FQuat(key60->GetRelativeRotation());

	}
	mesh1->SetRelativeLocationAndRotation(p, q);

	if (camera_actor) {
		FVector world_heli_p = mesh1->GetComponentLocation();
		camera_actor->SetActorLocation(world_heli_p + heli_to_cam);
	}
}

