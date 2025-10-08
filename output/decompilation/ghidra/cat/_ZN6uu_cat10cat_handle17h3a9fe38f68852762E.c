void _ZN6uu_cat10cat_handle17h3a9fe38f68852762E
               (long *param_1,long param_2,char *param_3,long param_4)

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
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  code *pcVar15;
  ulong uVar16;
  undefined auVar17 [16];
  undefined auStack_10030 [33600];
  undefined8 uStack_7cf0;
  char cStack_7ce1;
  long *plStack_7ce0;
  long lStack_7cd8;
  long lStack_7cd0;
  uint uStack_7cc8;
  uint uStack_7cc4;
  undefined **ppuStack_7cc0;
  undefined auStack_7cb8 [16];
  long lStack_7ca8;
  long lStack_7ca0;
  long lStack_7c98;
  char *pcStack_7c80;
  long lStack_7c78;
  char *pcStack_7c70;
  undefined8 uStack_7c68;
  long lStack_7c60;
  undefined4 uStack_7c58;
  undefined4 uStack_7c54;
  undefined4 uStack_7c50;
  undefined4 uStack_7c4c;
  undefined auStack_7c30 [3072];
  undefined8 uStack_7030;
  undefined8 uStack_6030;
  undefined8 uStack_5030;
  undefined8 uStack_4030;
  undefined8 uStack_3030;
  undefined8 uStack_2030;
  undefined8 uStack_1030;
  
  if ((((param_3[1] != '\0') || (param_3[3] != '\0')) || (param_3[2] != '\0')) || (*param_3 != '\0')
     ) {
    uStack_1030 = 0;
    uStack_2030 = 0;
    uStack_3030 = 0;
    uStack_4030 = 0;
    uStack_5030 = 0;
    uStack_6030 = 0;
    uStack_7030 = 0;
    uStack_7cf0 = 0x15ef4a;
    plStack_7ce0 = param_1;
    (*(code *)PTR_memset_001f2510)(auStack_7c30,0,0x7c00);
    uStack_7cf0 = 0x15ef50;
    uStack_7c68 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001f2388)();
    uStack_7cf0 = 0x15ef66;
    uVar8 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001f2570)(&uStack_7c68);
    uStack_7cf0 = 0x15ef73;
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h324f64a3f2f04756E
              (&lStack_7ca8,uVar8);
    cStack_7ce1 = param_3[4];
    pcStack_7c80 = "\n";
    if ((param_3[2] & 1U) != 0) {
      pcStack_7c80 = "$\n";
    }
    lStack_7c78 = (ulong)(byte)param_3[2] + 1;
    ppuStack_7cc0 = &PTR_s_src_uu_cat_src_cat_rs_001eac48;
    lStack_7cd8 = -0x7ffffffffffffffa;
    uStack_7cc4 = (uint)(byte)param_3[1];
    uStack_7cc8 = (uint)(byte)param_3[3];
    pcVar15 = (code *)
              PTR__ZN72__LT_std__os__unix__net__stream__UnixStream_u20_as_u20_std__io__Read_GT_4read17h7d3fed2628b1467eE_001f2580
    ;
    lStack_7cd0 = param_2;
    pcStack_7c70 = param_3;
    do {
      uStack_7cf0 = 0x15efe8;
      auVar17 = (*pcVar15)(param_2,auStack_7c30,0x7c00);
      uVar12 = auVar17._8_8_;
      auStack_7cb8 = auVar17;
      if (((auVar17 & (undefined  [16])0x1) != (undefined  [16])0x0) || (uVar12 == 0)) {
        uStack_7cf0 = 0x15f263;
        _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed7edf1086309a68E
                  (auStack_7cb8);
        *plStack_7ce0 = lStack_7cd8;
LAB_0015f225:
        uStack_7cf0 = 0x15f22f;
        _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17hd1802b23d85409a9E
                  (&lStack_7ca8);
        return;
      }
      uStack_7cf0 = 0x15f01f;
      auVar17 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hefdaf78919a7c5d0E
                          (0,uVar12,auStack_7c30,0x7c00,&PTR_s_src_uu_cat_src_cat_rs_001eac30);
      uVar13 = auVar17._8_8_;
      lVar9 = auVar17._0_8_;
      uVar16 = 0;
LAB_0015f044:
      do {
        uVar10 = uVar16;
        if (uVar13 < uVar16 || uVar13 - uVar16 == 0) {
LAB_0015f2b3:
          uStack_7cf0 = 0x15f2c4;
          (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001f2210)
                    (uVar10,uVar13,ppuStack_7cc0);
LAB_0015f2c4:
                    /* WARNING: Does not return */
          pcVar15 = (code *)invalidInstructionException();
          (*pcVar15)();
        }
        if (*(char *)(lVar9 + uVar16) == '\n') {
          uStack_7cf0 = 0x15f07b;
          _ZN6uu_cat14write_new_line17h0b98791ec69ec77eE
                    (&lStack_7c60,&lStack_7ca8,pcStack_7c70,param_4,*(undefined *)(lStack_7cd0 + 4))
          ;
          if (lStack_7c60 != lStack_7cd8) {
LAB_0015f207:
            *(undefined4 *)(plStack_7ce0 + 1) = uStack_7c58;
            *(undefined4 *)((long)plStack_7ce0 + 0xc) = uStack_7c54;
            *(undefined4 *)(plStack_7ce0 + 2) = uStack_7c50;
            *(undefined4 *)((long)plStack_7ce0 + 0x14) = uStack_7c4c;
            *plStack_7ce0 = lStack_7c60;
            goto LAB_0015f21b;
          }
          *(undefined *)(param_4 + 0x38) = 1;
          uVar16 = uVar16 + 1;
          if (uVar12 <= uVar16) break;
          goto LAB_0015f044;
        }
        if (*(char *)(param_4 + 0x39) == '\0') {
          *(undefined *)(param_4 + 0x3a) = 0;
          if (((*(byte *)(param_4 + 0x38) & 1) != 0) && (cStack_7ce1 != '\0')) {
            uStack_7cf0 = 0x15f100;
            lVar11 = _ZN6uu_cat10LineNumber5write17h9eeedfd1c7640e65E(param_4,&lStack_7ca8);
            if (lVar11 != 0) goto LAB_0015f241;
            uStack_7cf0 = 0x15f111;
            _ZN6uu_cat10LineNumber9increment17hc9558597a4dcfd2dE(param_4);
          }
        }
        else {
          if ((ulong)(lStack_7ca8 - lStack_7c98) < 2) {
            uStack_7cf0 = 0x15f1b9;
            lVar11 = (*(code *)
                       PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h37f9a4980bc018ddE_001f23c0
                     )(&lStack_7ca8,"\r",1);
            if (lVar11 != 0) goto LAB_0015f241;
          }
          else {
            *(undefined *)(lStack_7ca0 + lStack_7c98) = 0xd;
            lStack_7c98 = lStack_7c98 + 1;
          }
          *(undefined2 *)(param_4 + 0x38) = 0;
          *(undefined *)(param_4 + 0x3a) = 0;
        }
        uStack_7cf0 = 0x15f12b;
        lVar11 = _ZN6uu_cat9write_end17heef5c1c4c44423b4E
                           (&lStack_7ca8,lVar9 + uVar16,uVar13 - uVar16,uStack_7cc4,uStack_7cc8);
        uVar10 = lVar11 + uVar16;
        if (uVar10 == uVar13) {
          *(undefined *)(param_4 + 0x38) = 0;
          break;
        }
        if (uVar13 <= uVar10) {
          ppuStack_7cc0 = &PTR_s_src_uu_cat_src_cat_rs_001eac60;
          goto LAB_0015f2b3;
        }
        if (*(char *)(lVar9 + uVar10) == '\r') {
          *(undefined *)(param_4 + 0x39) = 1;
        }
        else {
          if (*(char *)(lVar9 + uVar10) != '\n') {
            lStack_7c60 = 0;
            uStack_7cf0 = 0x15f2a2;
            (*(code *)PTR__ZN4core9panicking13assert_failed17hd7a166b926776132E_001f23c8)
                      (0,lVar9 + uVar10,"\n",&lStack_7c60,&PTR_s_src_uu_cat_src_cat_rs_001eac78);
            goto LAB_0015f2c4;
          }
          uStack_7cf0 = 0x15f17d;
          _ZN6uu_cat17write_end_of_line17h1af273733bdb3f49E
                    (&lStack_7c60,&lStack_7ca8,pcStack_7c80,lStack_7c78,
                     *(undefined *)(lStack_7cd0 + 4));
          if (lStack_7c60 != lStack_7cd8) goto LAB_0015f207;
          *(undefined *)(param_4 + 0x38) = 1;
        }
        uVar16 = uVar16 + lVar11 + 1;
      } while (uVar16 < uVar12);
      uStack_7cf0 = 0x15f1df;
      lVar11 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h92f2b65981f505d2E
                         (&lStack_7ca8);
      param_2 = lStack_7cd0;
      pcVar15 = (code *)
                PTR__ZN72__LT_std__os__unix__net__stream__UnixStream_u20_as_u20_std__io__Read_GT_4read17h7d3fed2628b1467eE_001f2580
      ;
      if (lVar11 != 0) {
LAB_0015f241:
        *plStack_7ce0 = -0x8000000000000000;
        plStack_7ce0[1] = lVar11;
LAB_0015f21b:
        uStack_7cf0 = 0x15f225;
        _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed7edf1086309a68E
                  (auStack_7cb8);
        goto LAB_0015f225;
      }
      uStack_7cf0 = 0x15f202;
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed7edf1086309a68E
                (auStack_7cb8);
    } while( true );
  }
  if (param_3[4] != '\0') {
    _ZN6uu_cat11write_lines17h59950f7c6160fd92E();
    return;
  }
  puVar1 = &stack0xffffffffffffffd0;
  do {
    puVar14 = puVar1;
    *(undefined8 *)(puVar14 + -0x1000) = 0;
    puVar1 = puVar14 + -0x1000;
  } while (puVar14 + -0x1000 != auStack_10030);
  *(long **)(puVar14 + -0x1020) = param_1;
  *(undefined8 *)(puVar14 + -0x1030) = 0x15eafa;
  uVar8 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001f2388)();
  *(undefined8 *)(puVar14 + -0x1008) = uVar8;
  *(undefined8 *)(puVar14 + -0x1030) = 0x15eb0a;
  uVar8 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001f2570)
                    (puVar14 + -0x1008);
  *(undefined8 *)(puVar14 + -0x1028) = uVar8;
  *(undefined8 *)(puVar14 + -0x1030) = 0x15eb1e;
  _ZN6uu_cat6splice23write_fast_using_splice17ha67428404f006dccE(puVar14 + -0x1000,param_2);
  lVar9 = *(long *)(puVar14 + -0x1000);
  bVar2 = puVar14[-0xff8];
  if (lVar9 == -0x7ffffffffffffffa) {
    if ((bVar2 & 1) == 0) {
      **(undefined8 **)(puVar14 + -0x1020) = 0x8000000000000006;
    }
    else {
      puVar1 = puVar14 + -0x1000;
      *(undefined8 *)(puVar14 + -0x1030) = 0x15eb58;
      (*(code *)PTR_memset_001f2510)(puVar1,0,0x10000);
      puVar7 = 
      PTR__ZN72__LT_std__os__unix__net__stream__UnixStream_u20_as_u20_std__io__Read_GT_4read17h7d3fed2628b1467eE_001f2580
      ;
      puVar6 = 
      PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_9write_all17hb8477e4d9e0e6d9bE_001f2408
      ;
      while( true ) {
        *(undefined8 *)(puVar14 + -0x1030) = 0x15eb7d;
        auVar17 = (*(code *)puVar7)(param_2,puVar1,0x10000);
        *(undefined (*) [16])(puVar14 + -0x1018) = auVar17;
        if (((auVar17 & (undefined  [16])0x1) != (undefined  [16])0x0) || (auVar17._8_8_ == 0))
        break;
        *(undefined8 *)(puVar14 + -0x1030) = 0x15eba9;
        uVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hefdaf78919a7c5d0E
                          (0,auVar17._8_8_,puVar1,0x10000,&PTR_s_src_uu_cat_src_cat_rs_001eac18);
        *(undefined8 *)(puVar14 + -0x1030) = 0x15ebb2;
        lVar9 = (*(code *)puVar6)(puVar14 + -0x1028,uVar8);
        if (lVar9 != 0) {
          puVar5 = *(undefined8 **)(puVar14 + -0x1020);
          *puVar5 = 0x8000000000000000;
          puVar5[1] = lVar9;
          *(undefined8 *)(puVar14 + -0x1030) = 0x15ec4f;
          _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed7edf1086309a68E
                    (puVar14 + -0x1018);
          goto LAB_0015ec63;
        }
        *(undefined8 *)(puVar14 + -0x1030) = 0x15ebbf;
        _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed7edf1086309a68E
                  (puVar14 + -0x1018);
      }
      *(undefined8 *)(puVar14 + -0x1030) = 0x15ec01;
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed7edf1086309a68E
                (puVar14 + -0x1018);
      *(undefined8 *)(puVar14 + -0x1030) = 0x15ec0a;
      lVar9 = (*(code *)
                PTR__ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_5flush17h9c181f7575a57cf0E_001f24f0
              )(puVar14 + -0x1028);
      if (lVar9 == 0) {
        **(undefined8 **)(puVar14 + -0x1020) = 0x8000000000000006;
      }
      else {
        puVar5 = *(undefined8 **)(puVar14 + -0x1020);
        *puVar5 = 0x8000000000000000;
        puVar5[1] = lVar9;
      }
LAB_0015ec63:
      uVar8 = *(undefined8 *)(puVar14 + -0x1028);
    }
  }
  else {
    uVar3 = *(undefined8 *)(puVar14 + -0xff7);
    plVar4 = *(long **)(puVar14 + -0x1020);
    plVar4[2] = *(long *)(puVar14 + -0xff0);
    *(undefined8 *)((long)plVar4 + 9) = uVar3;
    *plVar4 = lVar9;
    *(byte *)(plVar4 + 1) = bVar2;
  }
  *(undefined8 *)(puVar14 + -0x1030) = 0x15ec6f;
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h364967744e8570e4E(uVar8);
  return;
}