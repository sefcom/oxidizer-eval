void _ZN6uu_cat10write_fast17h4be31f706c06ce8cE(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined auVar11 [16];
  undefined auStack_10030 [65536];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar10 = puVar1;
    *(undefined8 *)(puVar10 + -0x1000) = 0;
    puVar1 = puVar10 + -0x1000;
  } while (puVar10 + -0x1000 != auStack_10030);
  *(undefined8 *)(puVar10 + -0x1020) = param_1;
  *(undefined8 *)(puVar10 + -0x1030) = 0x15e90a;
  uVar8 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001f2388)();
  *(undefined8 *)(puVar10 + -0x1008) = uVar8;
  *(undefined8 *)(puVar10 + -0x1030) = 0x15e91a;
  uVar8 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001f2570)
                    (puVar10 + -0x1008);
  *(undefined8 *)(puVar10 + -0x1028) = uVar8;
                    /* try { // try from 0015e921 to 0015e92d has its CatchHandler @ 0015ea91 */
  *(undefined8 *)(puVar10 + -0x1030) = 0x15e92e;
  _ZN6uu_cat6splice23write_fast_using_splice17h744b995d7f4d97cfE(puVar10 + -0x1000,param_2);
  lVar9 = *(long *)(puVar10 + -0x1000);
  bVar2 = puVar10[-0xff8];
  if (lVar9 == -0x7ffffffffffffffa) {
    if ((bVar2 & 1) == 0) {
      **(undefined8 **)(puVar10 + -0x1020) = 0x8000000000000006;
    }
    else {
      puVar1 = puVar10 + -0x1000;
      *(undefined8 *)(puVar10 + -0x1030) = 0x15e968;
      (*(code *)PTR_memset_001f2510)(puVar1,0,0x10000);
      puVar7 = 
      PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_4read17h614ade6d36e62b0eE_001f2578;
      puVar6 = 
      PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_001f2408
      ;
      while( true ) {
                    /* try { // try from 0015e980 to 0015e98c has its CatchHandler @ 0015eaa2 */
        *(undefined8 *)(puVar10 + -0x1030) = 0x15e98d;
        auVar11 = (*(code *)puVar7)(param_2,puVar1,0x10000);
        *(undefined (*) [16])(puVar10 + -0x1018) = auVar11;
        if (((auVar11 & (undefined  [16])0x1) != (undefined  [16])0x0) || (auVar11._8_8_ == 0))
        break;
                    /* try { // try from 0015e9a0 to 0015e9c1 has its CatchHandler @ 0015ea93 */
        *(undefined8 *)(puVar10 + -0x1030) = 0x15e9b9;
        uVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hefdaf78919a7c5d0E
                          (0,auVar11._8_8_,puVar1,0x10000,&PTR_s_src_uu_cat_src_cat_rs_001eac18);
        *(undefined8 *)(puVar10 + -0x1030) = 0x15e9c2;
        lVar9 = (*(code *)puVar6)(puVar10 + -0x1028,uVar8);
        if (lVar9 != 0) {
          puVar5 = *(undefined8 **)(puVar10 + -0x1020);
          *puVar5 = 0x8000000000000000;
          puVar5[1] = lVar9;
          *(undefined8 *)(puVar10 + -0x1030) = 0x15ea5f;
          _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed7edf1086309a68E
                    (puVar10 + -0x1018);
          goto LAB_0015ea73;
        }
                    /* try { // try from 0015e9c7 to 0015e9ce has its CatchHandler @ 0015eaa2 */
        *(undefined8 *)(puVar10 + -0x1030) = 0x15e9cf;
        _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed7edf1086309a68E
                  (puVar10 + -0x1018);
      }
                    /* try { // try from 0015ea07 to 0015ea5e has its CatchHandler @ 0015ea91 */
      *(undefined8 *)(puVar10 + -0x1030) = 0x15ea11;
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed7edf1086309a68E
                (puVar10 + -0x1018);
      *(undefined8 *)(puVar10 + -0x1030) = 0x15ea1a;
      lVar9 = (*(code *)
                PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_5flush17h9c181f7575a57cf0E_001f24f0
              )(puVar10 + -0x1028);
      if (lVar9 == 0) {
        **(undefined8 **)(puVar10 + -0x1020) = 0x8000000000000006;
      }
      else {
        puVar5 = *(undefined8 **)(puVar10 + -0x1020);
        *puVar5 = 0x8000000000000000;
        puVar5[1] = lVar9;
      }
LAB_0015ea73:
      uVar8 = *(undefined8 *)(puVar10 + -0x1028);
    }
  }
  else {
    uVar3 = *(undefined8 *)(puVar10 + -0xff7);
    plVar4 = *(long **)(puVar10 + -0x1020);
    plVar4[2] = *(long *)(puVar10 + -0xff0);
    *(undefined8 *)((long)plVar4 + 9) = uVar3;
    *plVar4 = lVar9;
    *(byte *)(plVar4 + 1) = bVar2;
  }
  *(undefined8 *)(puVar10 + -0x1030) = 0x15ea7f;
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h364967744e8570e4E(uVar8);
  return;
}