void _ZN9meilitool7upgrade5v1_1210IndexStats3new17h99d067e09fcc58bfE
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long local_1c8;
  long local_1c0;
  int local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  long local_160 [38];
  
  (*(code *)PTR__ZN5milli5index5Index19number_of_documents17he7561050651c944bE_0063cf10)(&local_178)
  ;
  lVar1 = CONCAT44(uStack_16c,iStack_170);
  if (CONCAT44(uStack_174,local_178) != 0x5d) {
    (*(code *)PTR_memcpy_0063bdc0)(param_1 + 2,&uStack_168,0x130);
    *param_1 = CONCAT44(uStack_174,local_178);
    param_1[1] = lVar1;
    return;
  }
  (*(code *)PTR__ZN5milli5index5Index12on_disk_size17h9beb989c25719560E_0063cf18)
            (&local_178,param_2);
  lVar2 = CONCAT44(uStack_174,local_178);
  lVar3 = CONCAT44(uStack_16c,iStack_170);
  if (lVar2 == 0x5d) {
    local_1c0 = lVar3;
    (*(code *)PTR__ZN5milli5index5Index9used_size17h6c42f9cb4ef1d190E_0063cf20)(&local_178,param_2);
    lVar2 = CONCAT44(uStack_174,local_178);
    lVar3 = CONCAT44(uStack_16c,iStack_170);
    if (lVar2 == 0x5d) {
      (*(code *)PTR__ZN5milli5index5Index18field_distribution17h792d9a5578eb92c3E_0063cf28)
                (&local_178,param_2,param_3);
      uVar5 = (undefined4)uStack_168;
      uVar6 = uStack_168._4_4_;
      local_1d8 = iStack_170;
      uStack_1d4 = uStack_16c;
      uStack_1d0 = (undefined4)uStack_168;
      uStack_1cc = uStack_168._4_4_;
      local_1c8 = local_160[0];
      if (local_178 == 1) {
        uStack_168 = local_160[0];
        local_178 = iStack_170;
        uStack_174 = uStack_16c;
        iStack_170 = uVar5;
        uStack_16c = uVar6;
        (*(code *)
          PTR__ZN78__LT_milli__error__Error_u20_as_u20_core__convert__From_LT_heed__Error_GT__GT_4from17h1b56cf9d6794bae7E_0063caf0
        )(param_1,&local_178);
        return;
      }
                    /* try { // try from 00459f88 to 00459f98 has its CatchHandler @ 0045a07e */
      (*(code *)PTR__ZN5milli5index5Index10created_at17he78916ad0eb86001E_0063cf30)
                (&local_178,param_2,param_3);
      lVar2 = CONCAT44(uStack_174,local_178);
      local_1b8 = iStack_170;
      uStack_1b4 = uStack_16c;
      uStack_1b0 = (undefined4)uStack_168;
      uStack_1ac = uStack_168._4_4_;
      if (lVar2 == 0x5d) {
                    /* try { // try from 00459fb6 to 00459fc6 has its CatchHandler @ 0045a071 */
        (*(code *)PTR__ZN5milli5index5Index10updated_at17haa775a27446385acE_0063cf38)
                  (&local_178,param_2,param_3);
        lVar2 = CONCAT44(uStack_174,local_178);
        local_1a8 = iStack_170;
        uStack_1a4 = uStack_16c;
        uStack_1a0 = (undefined4)uStack_168;
        uStack_19c = uStack_168._4_4_;
        if (lVar2 == 0x5d) {
          param_1[10] = local_1c8;
          param_1[8] = CONCAT44(uStack_1d4,local_1d8);
          param_1[9] = CONCAT44(uStack_1cc,uStack_1d0);
          param_1[1] = CONCAT44(uStack_1b4,local_1b8);
          param_1[2] = CONCAT44(uStack_1ac,uStack_1b0);
          param_1[3] = CONCAT44(uStack_16c,iStack_170);
          param_1[4] = uStack_168;
          param_1[5] = lVar1;
          param_1[6] = local_1c0;
          param_1[7] = lVar3;
          *param_1 = 0x5d;
          return;
        }
        (*(code *)PTR_memcpy_0063bdc0)(param_1 + 3,local_160,0x128);
        iVar4 = local_1a8;
        uVar5 = uStack_1a4;
        uVar6 = uStack_1a0;
        uVar7 = uStack_19c;
      }
      else {
        (*(code *)PTR_memcpy_0063bdc0)(param_1 + 3,local_160,0x128);
        iVar4 = local_1b8;
        uVar5 = uStack_1b4;
        uVar6 = uStack_1b0;
        uVar7 = uStack_1ac;
      }
      *(int *)(param_1 + 1) = iVar4;
      *(undefined4 *)((long)param_1 + 0xc) = uVar5;
      *(undefined4 *)(param_1 + 2) = uVar6;
      *(undefined4 *)((long)param_1 + 0x14) = uVar7;
      *param_1 = lVar2;
      _ZN4core3ptr96drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_alloc__string__String_C_u64_GT__GT_17hc39567d683fffe9aE
                (&local_1d8);
      return;
    }
  }
  (*(code *)PTR_memcpy_0063bdc0)(param_1 + 2,&uStack_168,0x130);
  *param_1 = lVar2;
  param_1[1] = lVar3;
  return;
}