void _ZN8uu_shred11BytesWriter14from_pass_type17h9b8f49adafc10293E(undefined *param_1,char *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined uVar4;
  undefined auVar5 [16];
  undefined auStack_20028 [131072];
  
  puVar2 = &stack0xffffffffffffffd8;
  do {
    puVar3 = puVar2;
    *(undefined8 *)(puVar3 + -0x1000) = 0;
    puVar2 = puVar3 + -0x1000;
  } while (puVar3 + -0x1000 != auStack_20028);
  if (*param_2 == '\0') {
    cVar1 = param_2[1];
    *(undefined8 *)(puVar3 + -0x1038) = 0x1bc165;
    (*(code *)PTR_memset_0023d1a8)(puVar3 + -0x1004,cVar1,0x10002);
  }
  else {
    if (*param_2 == '\x02') {
      *(undefined8 *)(puVar3 + -0x1038) = 0x1bc135;
      _ZN9rand_core11SeedableRng12from_entropy17hd7fe6f62e2325342E(param_1 + 0x10);
      uVar4 = 0;
      *(undefined8 *)(puVar3 + -0x1038) = 0x1bc14b;
      (*(code *)PTR_memset_0023d1a8)(param_1 + 0x150,0,0x10000);
      goto LAB_001bc20d;
    }
    *(undefined8 *)(puVar3 + -0x1038) = 0x1bc182;
    (*(code *)PTR_memset_0023d1a8)(puVar3 + 0xeffe,0,0x10002);
    *(undefined8 *)(puVar3 + -0x1038) = 0x1bc190;
    _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_16chunks_exact_mut17h9602805c4835881bE
              (puVar3 + -0x1030,puVar3 + 0xeffe);
    *(undefined8 *)(puVar3 + -0x1038) = 0x1bc198;
    auVar5 = _ZN101__LT_core__slice__iter__ChunksExactMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha7dcdd33cfb13c3bE
                       (puVar3 + -0x1030);
    if (auVar5._0_8_ != 0) {
      do {
        *(undefined8 *)(puVar3 + -0x1038) = 0x1bc1c6;
        _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_15copy_from_slice17h592b16ec71136960E
                  (auVar5._0_8_,auVar5._8_8_,param_2 + 1,3,&PTR_DAT_00238668);
        *(undefined8 *)(puVar3 + -0x1038) = 0x1bc1ce;
        auVar5 = _ZN101__LT_core__slice__iter__ChunksExactMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha7dcdd33cfb13c3bE
                           (puVar3 + -0x1030);
      } while (auVar5._0_8_ != 0);
    }
    *(undefined8 *)(puVar3 + -0x1038) = 0x1bc1eb;
    (*(code *)PTR_memcpy_0023cbc8)(puVar3 + -0x1004,puVar3 + 0xeffe,0x10002);
  }
  *(undefined8 *)(param_1 + 0x10008) = 0;
  *(undefined8 *)(puVar3 + -0x1038) = 0x1bc20a;
  (*(code *)PTR_memcpy_0023cbc8)(param_1 + 1,puVar3 + -0x1004,0x10002);
  uVar4 = 1;
LAB_001bc20d:
  *param_1 = uVar4;
  return;
}