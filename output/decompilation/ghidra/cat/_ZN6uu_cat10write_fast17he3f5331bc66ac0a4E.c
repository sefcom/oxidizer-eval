void _ZN6uu_cat10write_fast17he3f5331bc66ac0a4E(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined auVar9 [16];
  undefined auStack_10030 [65536];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar8 = puVar1;
    *(undefined8 *)(puVar8 + -0x1000) = 0;
    puVar1 = puVar8 + -0x1000;
  } while (puVar8 + -0x1000 != auStack_10030);
  *(undefined8 *)(puVar8 + -0x1020) = param_1;
  *(undefined8 *)(puVar8 + -0x1030) = 0x1af98a;
  uVar6 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  *(undefined8 *)(puVar8 + -0x1008) = uVar6;
  *(undefined8 *)(puVar8 + -0x1030) = 0x1af99a;
  uVar6 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(puVar8 + -0x1008);
  *(undefined8 *)(puVar8 + -0x1028) = uVar6;
                    /* try { // try from 001af9a1 to 001af9b0 has its CatchHandler @ 001afb23 */
  *(undefined8 *)(puVar8 + -0x1030) = 0x1af9b1;
  _ZN6uu_cat6splice23write_fast_using_splice17h8d35de54429b343dE
            (puVar8 + -0x1000,param_2,puVar8 + -0x1028);
  lVar7 = *(long *)(puVar8 + -0x1000);
  cVar2 = puVar8[-0xff8];
  if (lVar7 == -0x7ffffffffffffffa) {
    if (cVar2 == '\0') {
      **(undefined8 **)(puVar8 + -0x1020) = 0x8000000000000006;
    }
    else {
      puVar1 = puVar8 + -0x1000;
      *(undefined8 *)(puVar8 + -0x1030) = 0x1af9eb;
      (*(code *)PTR_memset_0021c7a0)(puVar1,0,0x10000);
      while( true ) {
                    /* try { // try from 001afa10 to 001afa1c has its CatchHandler @ 001afb34 */
        *(undefined8 *)(puVar8 + -0x1030) = 0x1afa1d;
        auVar9 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_4read17h24fce4ed669fe556E
                           (param_2,puVar1,0x10000);
        *(undefined (*) [16])(puVar8 + -0x1018) = auVar9;
        if ((auVar9._0_8_ != 0) || (auVar9._8_8_ == 0)) break;
                    /* try { // try from 001afa34 to 001afa50 has its CatchHandler @ 001afb25 */
        *(undefined8 *)(puVar8 + -0x1030) = 0x1afa48;
        uVar6 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2183ab5a6b7a9c40E
                          (auVar9._8_8_,puVar1,0x10000,&PTR_s_src_uu_cat_src_cat_rs_002186e0);
        *(undefined8 *)(puVar8 + -0x1030) = 0x1afa51;
        lVar7 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                          (puVar8 + -0x1028,uVar6);
        if (lVar7 != 0) {
          puVar5 = *(undefined8 **)(puVar8 + -0x1020);
          *puVar5 = 0x8000000000000000;
          puVar5[1] = lVar7;
          *(undefined8 *)(puVar8 + -0x1030) = 0x1afaf4;
          _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hdeb0a990ca1d4581E
                    (puVar8 + -0x1018);
          goto LAB_001afb08;
        }
                    /* try { // try from 001afa56 to 001afa5d has its CatchHandler @ 001afb34 */
        *(undefined8 *)(puVar8 + -0x1030) = 0x1afa5e;
        _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hdeb0a990ca1d4581E
                  (puVar8 + -0x1018);
      }
                    /* try { // try from 001afa9c to 001afaf3 has its CatchHandler @ 001afb23 */
      *(undefined8 *)(puVar8 + -0x1030) = 0x1afaa6;
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hdeb0a990ca1d4581E
                (puVar8 + -0x1018);
      *(undefined8 *)(puVar8 + -0x1030) = 0x1afaaf;
      lVar7 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_5flush17hf4899ae455fb37b6E
                        (puVar8 + -0x1028);
      if (lVar7 == 0) {
        **(undefined8 **)(puVar8 + -0x1020) = 0x8000000000000006;
      }
      else {
        puVar5 = *(undefined8 **)(puVar8 + -0x1020);
        *puVar5 = 0x8000000000000000;
        puVar5[1] = lVar7;
      }
LAB_001afb08:
      uVar6 = *(undefined8 *)(puVar8 + -0x1028);
    }
  }
  else {
    uVar3 = *(undefined8 *)(puVar8 + -0xff7);
    plVar4 = *(long **)(puVar8 + -0x1020);
    plVar4[2] = *(long *)(puVar8 + -0xff0);
    *(undefined8 *)((long)plVar4 + 9) = uVar3;
    *plVar4 = lVar7;
    *(char *)(plVar4 + 1) = cVar2;
  }
  *(undefined8 *)(puVar8 + -0x1030) = 0x1afb11;
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h7157efe841e7afadE(uVar6);
  return;
}