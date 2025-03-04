void _ZN6uu_cat10cat_handle17hd11b5f8e6960e509E
               (long *param_1,long param_2,int *param_3,long *param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  bool bVar14;
  undefined auVar15 [16];
  undefined auStack_10030 [33568];
  undefined *puStack_7d10;
  char cStack_7d01;
  undefined8 uStack_7d00;
  long *plStack_7cf8;
  long lStack_7cf0;
  uint uStack_7ce8;
  uint uStack_7ce4;
  undefined **ppuStack_7ce0;
  undefined auStack_7cd8 [16];
  long lStack_7cc8;
  undefined4 uStack_7cc0;
  undefined4 uStack_7cbc;
  undefined8 uStack_7cb8;
  undefined8 uStack_7cb0;
  undefined8 uStack_7ca8;
  undefined8 uStack_7ca0;
  undefined uStack_7c98;
  char *pcStack_7c90;
  long lStack_7c88;
  int *piStack_7c80;
  undefined8 uStack_7c78;
  long *plStack_7c70;
  code *pcStack_7c68;
  undefined *puStack_7c60;
  undefined8 uStack_7c58;
  long **pplStack_7c50;
  undefined8 uStack_7c48;
  long *plStack_7c40;
  undefined8 uStack_7c38;
  undefined auStack_7c30 [3072];
  undefined8 uStack_7030;
  undefined8 uStack_6030;
  undefined8 uStack_5030;
  undefined8 uStack_4030;
  undefined8 uStack_3030;
  undefined8 uStack_2030;
  undefined8 uStack_1030;
  
  if (*param_3 != 0) {
    uStack_1030 = 0;
    uStack_2030 = 0;
    uStack_3030 = 0;
    uStack_4030 = 0;
    uStack_5030 = 0;
    uStack_6030 = 0;
    uStack_7030 = 0;
    puStack_7d10 = (undefined *)0x1b0550;
    plStack_7cf8 = param_1;
    (*(code *)PTR_memset_0021c7a0)(auStack_7c30,0,0x7c00);
    puStack_7d10 = (undefined *)0x1b0556;
    uStack_7c78 = _ZN3std2io5stdio6stdout17h077da66234850927E();
    puStack_7d10 = (undefined *)0x1b056c;
    uStack_7d00 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(&uStack_7c78);
    cStack_7d01 = *(char *)(param_3 + 1);
    bVar14 = *(char *)((long)param_3 + 2) != '\0';
    pcStack_7c90 = "$\n";
    if (!bVar14) {
      pcStack_7c90 = "\n";
    }
    lStack_7c88 = (ulong)bVar14 + 1;
    ppuStack_7ce0 = &PTR_s_src_uu_cat_src_cat_rs_00218710;
    uStack_7ce4 = (uint)*(byte *)((long)param_3 + 1);
    uStack_7ce8 = (uint)*(byte *)((long)param_3 + 3);
    lStack_7cf0 = param_2;
    piStack_7c80 = param_3;
    do {
      puStack_7d10 = (undefined *)0x1b05e1;
      auVar15 = _ZN72__LT_std__os__unix__net__stream__UnixStream_u20_as_u20_std__io__Read_GT_4read17hcece2f3bec9614edE
                          (lStack_7cf0,auStack_7c30,0x7c00);
      uVar10 = auVar15._8_8_;
      auStack_7cd8 = auVar15;
      if ((auVar15._0_8_ != 0) || (uVar10 == 0)) {
        puStack_7d10 = (undefined *)0x1b08cf;
        _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hdeb0a990ca1d4581E
                  (auStack_7cd8);
        *plStack_7cf8 = -0x7ffffffffffffffa;
LAB_001b08a9:
        puStack_7d10 = (undefined *)0x1b08b3;
        _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h7157efe841e7afadE
                  (uStack_7d00);
        return;
      }
      puStack_7d10 = (undefined *)0x1b0617;
      auVar15 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2183ab5a6b7a9c40E
                          (uVar10,auStack_7c30,0x7c00,&PTR_s_src_uu_cat_src_cat_rs_002186f8);
      uVar11 = auVar15._8_8_;
      lVar7 = auVar15._0_8_;
      uVar13 = 0;
      do {
        uVar9 = uVar13;
        if (uVar11 < uVar13 || uVar11 - uVar13 == 0) goto LAB_001b08f2;
        if (*(char *)(lVar7 + uVar13) == '\n') {
          puStack_7d10 = (undefined *)0x1b0670;
          _ZN6uu_cat14write_new_line17h703f4daf25cc548eE
                    (&lStack_7cc8,&uStack_7d00,piStack_7c80,param_4,*(undefined *)(lStack_7cf0 + 4))
          ;
          if (lStack_7cc8 != -0x7ffffffffffffffa) {
LAB_001b0872:
            *(undefined4 *)(plStack_7cf8 + 1) = uStack_7cc0;
            *(undefined4 *)((long)plStack_7cf8 + 0xc) = uStack_7cbc;
            *(undefined4 *)(plStack_7cf8 + 2) = (undefined4)uStack_7cb8;
            *(undefined4 *)((long)plStack_7cf8 + 0x14) = uStack_7cb8._4_4_;
            *plStack_7cf8 = lStack_7cc8;
LAB_001b089f:
            puStack_7d10 = (undefined *)0x1b08a9;
            _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hdeb0a990ca1d4581E
                      (auStack_7cd8);
            goto LAB_001b08a9;
          }
          *(undefined *)(param_4 + 1) = 1;
          uVar13 = uVar13 + 1;
        }
        else {
          if (*(char *)((long)param_4 + 9) != '\0') {
            puStack_7d10 = (undefined *)0x1b06be;
            lVar8 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                              (&uStack_7d00,"\r",1);
            if (lVar8 == 0) {
              *(undefined2 *)(param_4 + 1) = 0;
              *(undefined *)((long)param_4 + 10) = 0;
              goto LAB_001b07b0;
            }
LAB_001b0885:
            *plStack_7cf8 = -0x8000000000000000;
            plStack_7cf8[1] = lVar8;
            goto LAB_001b089f;
          }
          *(undefined *)((long)param_4 + 10) = 0;
          if ((*(char *)(param_4 + 1) != '\0') && (cStack_7d01 != '\0')) {
            pcStack_7c68 = 
            _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
            ;
            lStack_7cc8 = 2;
            uStack_7cb8 = 0;
            uStack_7cb0 = 6;
            uStack_7ca8 = 0;
            uStack_7ca0 = 0x20;
            uStack_7c98 = 3;
            puStack_7c60 = &DAT_00218728;
            uStack_7c58 = 2;
            plStack_7c40 = &lStack_7cc8;
            uStack_7c38 = 1;
            pplStack_7c50 = &plStack_7c70;
            uStack_7c48 = 1;
            puStack_7d10 = (undefined *)0x1b079e;
            plStack_7c70 = param_4;
            lVar8 = _ZN3std2io5Write9write_fmt17h6cba046ccfa3b685E(&uStack_7d00,&puStack_7c60);
            if (lVar8 != 0) goto LAB_001b0885;
            *param_4 = *param_4 + 1;
          }
LAB_001b07b0:
          puStack_7d10 = (undefined *)0x1b07ca;
          lVar8 = _ZN6uu_cat9write_end17h5e37c7be961ff133E
                            (&uStack_7d00,lVar7 + uVar13,uVar11 - uVar13,uStack_7ce4,uStack_7ce8);
          uVar9 = lVar8 + uVar13;
          if (uVar9 == uVar11) {
            *(undefined *)(param_4 + 1) = 0;
            break;
          }
          if (uVar11 <= uVar9) {
            ppuStack_7ce0 = &PTR_s_src_uu_cat_src_cat_rs_00218748;
LAB_001b08f2:
                    /* WARNING: Subroutine does not return */
            puStack_7d10 = (undefined *)0x1b0903;
            _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(uVar9,uVar11,ppuStack_7ce0);
          }
          if (*(char *)(lVar7 + uVar9) == '\n') {
            puStack_7d10 = (undefined *)0x1b0826;
            _ZN6uu_cat17write_end_of_line17h4ed837c9dff89e3fE
                      (&lStack_7cc8,&uStack_7d00,pcStack_7c90,lStack_7c88,
                       *(undefined *)(lStack_7cf0 + 4));
            if (lStack_7cc8 != -0x7ffffffffffffffa) goto LAB_001b0872;
            *(undefined *)(param_4 + 1) = 1;
            uVar13 = uVar13 + lVar8 + 1;
          }
          else {
            if (*(char *)(lVar7 + uVar9) != '\r') {
              lStack_7cc8 = 0;
              puStack_7d10 = (undefined *)0x1b092c;
              uVar6 = _ZN4core9panicking13assert_failed17hdf70ea46a40497a8E
                                (0,lVar7 + uVar9,"\n",&lStack_7cc8,
                                 &PTR_s_src_uu_cat_src_cat_rs_00218760);
              puStack_7d10 = (undefined *)0x1b0951;
              _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h7157efe841e7afadE
                        (uStack_7d00);
              puStack_7d10 = &LAB_001b0959;
              _Unwind_Resume(uVar6);
              return;
            }
            *(undefined *)((long)param_4 + 9) = 1;
            uVar13 = uVar13 + lVar8 + 1;
          }
        }
      } while (uVar13 < uVar10);
      puStack_7d10 = (undefined *)0x1b0859;
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hdeb0a990ca1d4581E
                (auStack_7cd8);
    } while( true );
  }
  if (*(char *)(param_3 + 1) != '\0') {
    _ZN6uu_cat11write_lines17hff42684e0ec60399E();
    return;
  }
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar12 = puVar1;
    *(undefined8 *)(puVar12 + -0x1000) = 0;
    puVar1 = puVar12 + -0x1000;
  } while (puVar12 + -0x1000 != auStack_10030);
  *(long **)(puVar12 + -0x1020) = param_1;
  *(undefined8 *)(puVar12 + -0x1030) = 0x1af78a;
  uVar6 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  *(undefined8 *)(puVar12 + -0x1008) = uVar6;
  *(undefined8 *)(puVar12 + -0x1030) = 0x1af79a;
  uVar6 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(puVar12 + -0x1008);
  *(undefined8 *)(puVar12 + -0x1028) = uVar6;
  *(undefined8 *)(puVar12 + -0x1030) = 0x1af7b1;
  _ZN6uu_cat6splice23write_fast_using_splice17hbaaa5718090ebd33E
            (puVar12 + -0x1000,param_2,puVar12 + -0x1028);
  lVar7 = *(long *)(puVar12 + -0x1000);
  cVar2 = puVar12[-0xff8];
  if (lVar7 == -0x7ffffffffffffffa) {
    if (cVar2 == '\0') {
      **(undefined8 **)(puVar12 + -0x1020) = 0x8000000000000006;
    }
    else {
      puVar1 = puVar12 + -0x1000;
      *(undefined8 *)(puVar12 + -0x1030) = 0x1af7eb;
      (*(code *)PTR_memset_0021c7a0)(puVar1,0,0x10000);
      while( true ) {
        *(undefined8 *)(puVar12 + -0x1030) = 0x1af81d;
        auVar15 = _ZN72__LT_std__os__unix__net__stream__UnixStream_u20_as_u20_std__io__Read_GT_4read17hcece2f3bec9614edE
                            (param_2,puVar1,0x10000);
        *(undefined (*) [16])(puVar12 + -0x1018) = auVar15;
        if ((auVar15._0_8_ != 0) || (auVar15._8_8_ == 0)) break;
        *(undefined8 *)(puVar12 + -0x1030) = 0x1af848;
        uVar6 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2183ab5a6b7a9c40E
                          (auVar15._8_8_,puVar1,0x10000,&PTR_s_src_uu_cat_src_cat_rs_002186e0);
        *(undefined8 *)(puVar12 + -0x1030) = 0x1af851;
        lVar7 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17h10000d12d1c1ff48E
                          (puVar12 + -0x1028,uVar6);
        if (lVar7 != 0) {
          puVar5 = *(undefined8 **)(puVar12 + -0x1020);
          *puVar5 = 0x8000000000000000;
          puVar5[1] = lVar7;
          *(undefined8 *)(puVar12 + -0x1030) = 0x1af8f4;
          _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hdeb0a990ca1d4581E
                    (puVar12 + -0x1018);
          goto LAB_001af908;
        }
        *(undefined8 *)(puVar12 + -0x1030) = 0x1af85e;
        _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hdeb0a990ca1d4581E
                  (puVar12 + -0x1018);
      }
      *(undefined8 *)(puVar12 + -0x1030) = 0x1af8a6;
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hdeb0a990ca1d4581E
                (puVar12 + -0x1018);
      *(undefined8 *)(puVar12 + -0x1030) = 0x1af8af;
      lVar7 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_5flush17hf4899ae455fb37b6E
                        (puVar12 + -0x1028);
      if (lVar7 == 0) {
        **(undefined8 **)(puVar12 + -0x1020) = 0x8000000000000006;
      }
      else {
        puVar5 = *(undefined8 **)(puVar12 + -0x1020);
        *puVar5 = 0x8000000000000000;
        puVar5[1] = lVar7;
      }
LAB_001af908:
      uVar6 = *(undefined8 *)(puVar12 + -0x1028);
    }
  }
  else {
    uVar3 = *(undefined8 *)(puVar12 + -0xff7);
    plVar4 = *(long **)(puVar12 + -0x1020);
    plVar4[2] = *(long *)(puVar12 + -0xff0);
    *(undefined8 *)((long)plVar4 + 9) = uVar3;
    *plVar4 = lVar7;
    *(char *)(plVar4 + 1) = cVar2;
  }
  *(undefined8 *)(puVar12 + -0x1030) = 0x1af911;
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h7157efe841e7afadE(uVar6);
  return;
}