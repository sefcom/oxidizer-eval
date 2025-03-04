long _ZN7uu_head21read_but_last_n_bytes17hcec7d62dae3b0b23E(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined auVar10 [16];
  undefined auStack_10030 [65536];
  
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar7 = puVar1;
    *(undefined8 *)(puVar7 + -0x1000) = 0;
    puVar1 = puVar7 + -0x1000;
  } while (puVar7 + -0x1000 != auStack_10030);
  if (param_2 == 0) {
    lVar9 = _ZN7uu_head12read_n_bytes17h336678ff3f92cdc9E(param_1);
    return lVar9;
  }
  *(long *)(puVar7 + -0x1020) = param_2;
  *(undefined8 *)(puVar7 + -0x1050) = 0x1b97a3;
  uVar3 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  *(undefined8 *)(puVar7 + -0x1008) = uVar3;
  *(undefined8 *)(puVar7 + -0x1050) = 0x1b97b3;
  uVar3 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(puVar7 + -0x1008);
  *(undefined8 *)(puVar7 + -0x1040) = uVar3;
  *(undefined8 *)(puVar7 + -0x1038) = 0;
  *(undefined8 *)(puVar7 + -0x1030) = 1;
  *(undefined8 *)(puVar7 + -0x1028) = 0;
  puVar1 = puVar7 + -0x1000;
  *(undefined8 *)(puVar7 + -0x1018) = 0;
  *(undefined8 *)(puVar7 + -0x1050) = 0x1b97ef;
  (*(code *)PTR_memset_00231160)(puVar1,0,0x10000);
  while( true ) {
    while( true ) {
                    /* try { // try from 001b9800 to 001b9834 has its CatchHandler @ 001b9965 */
      *(undefined8 *)(puVar7 + -0x1050) = 0x1b9810;
      auVar10 = _ZN82__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__Read_GT_4read17h16586897cfb9760dE
                          (param_1,puVar1,0x10000);
      lVar9 = auVar10._8_8_;
      if (auVar10._0_8_ != 0) break;
      if (lVar9 == 0) {
                    /* try { // try from 001b9945 to 001b994e has its CatchHandler @ 001b995e */
        *(undefined8 *)(puVar7 + -0x1050) = 0x1b994f;
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hb5d1cc1ebcc864d9E
                  (puVar7 + -0x1038);
        *(undefined8 *)(puVar7 + -0x1050) = 0x1b9959;
        _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h2105b16ee338ea42E
                  (*(undefined8 *)(puVar7 + -0x1040));
        return 0;
      }
      uVar5 = *(long *)(puVar7 + -0x1018) + lVar9;
      *(ulong *)(puVar7 + -0x1018) = uVar5;
      if (*(ulong *)(puVar7 + -0x1020) < uVar5) {
                    /* try { // try from 001b9861 to 001b98f8 has its CatchHandler @ 001b9963 */
        *(undefined8 *)(puVar7 + -0x1050) = 0x1b986c;
        lVar4 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                          (puVar7 + -0x1040,*(undefined8 *)(puVar7 + -0x1030),
                           *(undefined8 *)(puVar7 + -0x1028));
        if (lVar4 != 0) goto LAB_001b9903;
        lVar8 = lVar9 - *(long *)(puVar7 + -0x1020);
        *(undefined8 *)(puVar7 + -0x1050) = 0x1b9899;
        uVar3 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17ha1b168ca8ea64d34E
                          (0,*(long *)(puVar7 + -0x1028) + lVar8,puVar1,
                           &PTR_s_src_uu_head_src_head_rs_0022ce90);
        *(undefined8 *)(puVar7 + -0x1050) = 0x1b98a7;
        lVar4 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                          (puVar7 + -0x1040,uVar3);
        if (lVar4 != 0) goto LAB_001b9903;
        *(undefined8 *)(puVar7 + -0x1028) = 0;
        ppuVar6 = &PTR_s_src_uu_head_src_head_rs_0022cea8;
      }
      else {
        lVar9 = (lVar9 + *(ulong *)(puVar7 + -0x1020)) - uVar5;
        lVar8 = 0;
        ppuVar6 = &PTR_s_src_uu_head_src_head_rs_0022cec0;
      }
      *(undefined8 *)(puVar7 + -0x1050) = 0x1b98de;
      auVar10 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17ha1b168ca8ea64d34E
                          (lVar8,lVar9,puVar1,ppuVar6);
      *(undefined8 *)(puVar7 + -0x1050) = 0x1b98ec;
      uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17hbdca4b1d4fdb647eE
                        (auVar10._0_8_,auVar10._8_8_ + auVar10._0_8_);
      *(undefined8 *)(puVar7 + -0x1050) = 0x1b98f9;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h638c534dbe90cd22E(puVar7 + -0x1038,uVar3);
    }
    *(long *)(puVar7 + -0x1010) = lVar9;
    *(undefined8 *)(puVar7 + -0x1050) = 0x1b9825;
    cVar2 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(lVar9);
    if (cVar2 != '#') break;
    *(undefined8 *)(puVar7 + -0x1050) = 0x1b9835;
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h57d894b44a41053eE(puVar7 + -0x1010);
  }
  lVar4 = *(long *)(puVar7 + -0x1010);
LAB_001b9903:
                    /* try { // try from 001b9903 to 001b990c has its CatchHandler @ 001b995e */
  *(undefined8 *)(puVar7 + -0x1050) = 0x1b990d;
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hb5d1cc1ebcc864d9E(puVar7 + -0x1038)
  ;
  *(undefined8 *)(puVar7 + -0x1050) = 0x1b9917;
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h2105b16ee338ea42E
            (*(undefined8 *)(puVar7 + -0x1040));
  return lVar4;
}