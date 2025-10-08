undefined  [16]
_ZN7uu_tail18forwards_thru_file17hb6f3f61b3da7cbd0E
          (undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined auStack_8030 [32768];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar6 = puVar1;
    *(undefined8 *)(puVar6 + -0x1000) = 0;
    puVar1 = puVar6 + -0x1000;
  } while (puVar6 + -0x1000 != auStack_8030);
  *(undefined4 *)(puVar6 + -0x103c) = param_3;
  *(undefined8 *)(puVar6 + -0x1050) = 0x1a757b;
  (*(code *)PTR_memset_0027d738)(puVar6 + -0x1000,0,0x8000);
  lVar7 = 0;
  *(undefined8 *)(puVar6 + -0x1048) = 0;
  *(undefined8 *)(puVar6 + -0x1028) = param_1;
  while( true ) {
    *(undefined8 *)(puVar6 + -0x1050) = 0x1a75a6;
    auVar8 = (*(code *)
               PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_4read17h614ade6d36e62b0eE_0027d708
             )(param_1,puVar6 + -0x1000,0x8000);
    while( true ) {
      lVar5 = auVar8._8_8_;
      *(undefined (*) [16])(puVar6 + -0x1038) = auVar8;
      if ((auVar8 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
      *(undefined8 *)(puVar6 + -0x1050) = 0x1a75ce;
      cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar5);
      if (cVar2 != '#') {
        lVar7 = *(long *)(puVar6 + -0x1030);
        uVar4 = 1;
        goto LAB_001a7690;
      }
      *(undefined8 *)(puVar6 + -0x1020) = *(undefined8 *)(puVar6 + -0x1030);
      *(undefined8 *)(puVar6 + -0x1050) = 0x1a75e8;
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hf9bb92bdb8e06921E(puVar6 + -0x1020)
      ;
      *(undefined8 *)(puVar6 + -0x1050) = 0x1a75fb;
      auVar8 = (*(code *)
                 PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_4read17h614ade6d36e62b0eE_0027d708
               )(*(undefined8 *)(puVar6 + -0x1028),puVar6 + -0x1000,0x8000);
    }
    if (lVar5 == 0) break;
                    /* try { // try from 001a7609 to 001a7621 has its CatchHandler @ 001a76aa */
    *(undefined8 *)(puVar6 + -0x1050) = 0x1a7622;
    auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hdb1cc250d47cebe0E
                       (0,lVar5,puVar6 + -0x1000,0x8000,&PTR_DAT_00273b58);
    lVar3 = auVar8._0_8_;
    *(long *)(puVar6 + -0x1020) = lVar3;
    *(long *)(puVar6 + -0x1018) = lVar3;
    *(long *)(puVar6 + -0x1010) = auVar8._8_8_ + lVar3;
    puVar6[-0x1008] = (char)*(undefined4 *)(puVar6 + -0x103c);
    while( true ) {
                    /* try { // try from 001a7640 to 001a764c has its CatchHandler @ 001a76ac */
      *(undefined8 *)(puVar6 + -0x1050) = 0x1a764d;
      auVar8 = _ZN6memchr4arch7generic6memchr4Iter4next17haf3629eb4700264fE
                         (puVar6 + -0x1020,puVar6 + -0x1008);
      if ((auVar8 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
      lVar7 = lVar7 + 1;
      if (param_2 == lVar7) {
        lVar7 = auVar8._8_8_ + *(long *)(puVar6 + -0x1048) + 1;
        uVar4 = 0;
        goto LAB_001a7690;
      }
    }
    *(long *)(puVar6 + -0x1048) = *(long *)(puVar6 + -0x1048) + lVar5;
    param_1 = *(undefined8 *)(puVar6 + -0x1028);
  }
  uVar4 = 0;
  lVar7 = *(long *)(puVar6 + -0x1048);
LAB_001a7690:
  auVar8._8_8_ = lVar7;
  auVar8._0_8_ = uVar4;
  return auVar8;
}