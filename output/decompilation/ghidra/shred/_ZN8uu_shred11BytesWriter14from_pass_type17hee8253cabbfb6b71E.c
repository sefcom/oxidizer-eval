void _ZN8uu_shred11BytesWriter14from_pass_type17hee8253cabbfb6b71E(undefined *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined uVar5;
  long lVar6;
  ulong uVar7;
  undefined auStack_20030 [131072];
  
  puVar3 = &stack0xffffffffffffffd0;
  do {
    puVar4 = puVar3;
    *(undefined8 *)(puVar4 + -0x1000) = 0;
    puVar3 = puVar4 + -0x1000;
  } while (puVar4 + -0x1000 != auStack_20030);
  if (*param_2 == 2) {
    *(undefined8 *)(puVar4 + -0x1040) = 0x16385f;
    _ZN9rand_core11SeedableRng11from_os_rng17hd386da512c6ef0d4E(param_1 + 0x10);
    uVar5 = 0;
    *(undefined8 *)(puVar4 + -0x1040) = 0x163875;
    (*(code *)PTR_memset_00200e40)(param_1 + 0x150,0,0x10000);
  }
  else {
    if ((*param_2 & 1) == 0) {
      bVar1 = param_2[1];
      *(undefined8 *)(puVar4 + -0x1040) = 0x163930;
      (*(code *)PTR_memset_00200e40)(puVar4 + -0x1004,bVar1,0x10002);
    }
    else {
      *(undefined8 *)(puVar4 + -0x1040) = 0x1638a0;
      (*(code *)PTR_memset_00200e40)(puVar4 + 0xeffe,0,0x10002);
      *(undefined8 *)(puVar4 + -0x1040) = 0x1638b7;
      _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_16chunks_exact_mut17hc65588b0192ca83cE
                (puVar4 + -0x1030,puVar4 + 0xeffe,0x10002,3);
      uVar7 = *(ulong *)(puVar4 + -0x1018);
      uVar2 = *(ulong *)(puVar4 + -0x1010);
      if (uVar2 <= uVar7) {
        lVar6 = *(long *)(puVar4 + -0x1020);
        do {
          uVar7 = uVar7 - uVar2;
          *(undefined8 *)(puVar4 + -0x1040) = 0x1638fa;
          _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h0641c419a2aac1adE
                    (lVar6,uVar2,param_2 + 1,3,&PTR_s_src_uu_shred_src_shred_rs_001f9f68);
          lVar6 = lVar6 + uVar2;
        } while (uVar2 <= uVar7);
      }
      *(undefined8 *)(puVar4 + -0x1040) = 0x16391a;
      (*(code *)PTR_memcpy_00200c50)(puVar4 + -0x1004,puVar4 + 0xeffe,0x10002);
    }
    *(undefined8 *)(param_1 + 0x10008) = 0;
    *(undefined8 *)(puVar4 + -0x1040) = 0x16394f;
    (*(code *)PTR_memcpy_00200c50)(param_1 + 1,puVar4 + -0x1004,0x10002);
    uVar5 = 1;
  }
  *param_1 = uVar5;
  return;
}