void _ZN6uu_cat11write_lines17h59950f7c6160fd92E
               (long *param_1,long param_2,long param_3,long param_4)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined auVar12 [16];
  undefined **local_7cc0;
  undefined local_7cb8 [16];
  long local_7ca8;
  long local_7ca0;
  long local_7c98;
  char *local_7c80;
  long local_7c78;
  long local_7c70;
  undefined8 local_7c68;
  long local_7c60;
  undefined4 local_7c58;
  undefined4 uStack_7c54;
  undefined4 uStack_7c50;
  undefined4 uStack_7c4c;
  undefined local_7c30 [3072];
  undefined8 local_7030;
  undefined8 local_6030;
  undefined8 local_5030;
  undefined8 local_4030;
  undefined8 local_3030;
  undefined8 local_2030;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030 = 0;
  local_5030 = 0;
  local_6030 = 0;
  local_7030 = 0;
  (*(code *)PTR_memset_001f2510)(local_7c30,0,0x7c00);
  local_7c68 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001f2388)();
  uVar4 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_001f2570)(&local_7c68);
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h324f64a3f2f04756E
            (&local_7ca8,uVar4);
  cVar1 = *(char *)(param_3 + 4);
  local_7c80 = "\n";
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    local_7c80 = "$\n";
  }
  local_7c78 = (ulong)*(byte *)(param_3 + 2) + 1;
  local_7cc0 = &PTR_s_src_uu_cat_src_cat_rs_001eac48;
  uVar2 = *(undefined *)(param_3 + 1);
  uVar3 = *(undefined *)(param_3 + 3);
  pcVar10 = (code *)
            PTR__ZN72__LT_std__os__unix__net__stream__UnixStream_u20_as_u20_std__io__Read_GT_4read17h7d3fed2628b1467eE_001f2580
  ;
  local_7c70 = param_3;
  do {
                    /* try { // try from 0015efdb to 0015efe7 has its CatchHandler @ 0015f2cd */
    auVar12 = (*pcVar10)(param_2,local_7c30,0x7c00);
    uVar8 = auVar12._8_8_;
    local_7cb8 = auVar12;
    if (((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) || (uVar8 == 0)) {
                    /* try { // try from 0015f259 to 0015f262 has its CatchHandler @ 0015f2c6 */
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed7edf1086309a68E
                (local_7cb8);
      *param_1 = -0x7ffffffffffffffa;
LAB_0015f225:
      _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17hd1802b23d85409a9E
                (&local_7ca8);
      return;
    }
                    /* try { // try from 0015f006 to 0015f01e has its CatchHandler @ 0015f2cb */
    auVar12 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hefdaf78919a7c5d0E
                        (0,uVar8,local_7c30,0x7c00,&PTR_s_src_uu_cat_src_cat_rs_001eac30);
    uVar9 = auVar12._8_8_;
    lVar5 = auVar12._0_8_;
    uVar11 = 0;
LAB_0015f044:
    do {
      uVar6 = uVar11;
      if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
LAB_0015f2b3:
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_001f2210)
                  (uVar6,uVar9,local_7cc0);
LAB_0015f2c4:
                    /* WARNING: Does not return */
        pcVar10 = (code *)invalidInstructionException();
        (*pcVar10)();
      }
      if (*(char *)(lVar5 + uVar11) == '\n') {
                    /* try { // try from 0015f061 to 0015f1b8 has its CatchHandler @ 0015f2d2 */
        _ZN6uu_cat14write_new_line17h0b98791ec69ec77eE
                  (&local_7c60,&local_7ca8,local_7c70,param_4,*(undefined *)(param_2 + 4));
        if (local_7c60 != -0x7ffffffffffffffa) {
LAB_0015f207:
          *(undefined4 *)(param_1 + 1) = local_7c58;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_7c54;
          *(undefined4 *)(param_1 + 2) = uStack_7c50;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_7c4c;
          *param_1 = local_7c60;
          goto LAB_0015f21b;
        }
        *(undefined *)(param_4 + 0x38) = 1;
        uVar11 = uVar11 + 1;
        if (uVar8 <= uVar11) break;
        goto LAB_0015f044;
      }
      if (*(char *)(param_4 + 0x39) == '\0') {
        *(undefined *)(param_4 + 0x3a) = 0;
        if (((*(byte *)(param_4 + 0x38) & 1) != 0) && (cVar1 != '\0')) {
          lVar7 = _ZN6uu_cat10LineNumber5write17h9eeedfd1c7640e65E(param_4,&local_7ca8);
          if (lVar7 != 0) goto LAB_0015f241;
          _ZN6uu_cat10LineNumber9increment17hc9558597a4dcfd2dE(param_4);
        }
      }
      else {
        if ((ulong)(local_7ca8 - local_7c98) < 2) {
          lVar7 = (*(code *)
                    PTR__ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h37f9a4980bc018ddE_001f23c0
                  )(&local_7ca8,"\r",1);
          if (lVar7 != 0) goto LAB_0015f241;
        }
        else {
          *(undefined *)(local_7ca0 + local_7c98) = 0xd;
          local_7c98 = local_7c98 + 1;
        }
        *(undefined2 *)(param_4 + 0x38) = 0;
        *(undefined *)(param_4 + 0x3a) = 0;
      }
      lVar7 = _ZN6uu_cat9write_end17heef5c1c4c44423b4E
                        (&local_7ca8,lVar5 + uVar11,uVar9 - uVar11,uVar2,uVar3);
      uVar6 = lVar7 + uVar11;
      if (uVar6 == uVar9) {
        *(undefined *)(param_4 + 0x38) = 0;
        break;
      }
      if (uVar9 <= uVar6) {
        local_7cc0 = &PTR_s_src_uu_cat_src_cat_rs_001eac60;
        goto LAB_0015f2b3;
      }
      if (*(char *)(lVar5 + uVar6) == '\r') {
        *(undefined *)(param_4 + 0x39) = 1;
      }
      else {
        if (*(char *)(lVar5 + uVar6) != '\n') {
          local_7c60 = 0;
                    /* try { // try from 0015f281 to 0015f2c3 has its CatchHandler @ 0015f2d4 */
          (*(code *)PTR__ZN4core9panicking13assert_failed17hd7a166b926776132E_001f23c8)
                    (0,lVar5 + uVar6,"\n",&local_7c60,&PTR_s_src_uu_cat_src_cat_rs_001eac78);
          goto LAB_0015f2c4;
        }
        _ZN6uu_cat17write_end_of_line17h1af273733bdb3f49E
                  (&local_7c60,&local_7ca8,local_7c80,local_7c78,*(undefined *)(param_2 + 4));
        if (local_7c60 != -0x7ffffffffffffffa) goto LAB_0015f207;
        *(undefined *)(param_4 + 0x38) = 1;
      }
      uVar11 = uVar11 + lVar7 + 1;
    } while (uVar11 < uVar8);
                    /* try { // try from 0015f1d5 to 0015f1de has its CatchHandler @ 0015f2cb */
    lVar7 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h92f2b65981f505d2E
                      (&local_7ca8);
    pcVar10 = (code *)
              PTR__ZN72__LT_std__os__unix__net__stream__UnixStream_u20_as_u20_std__io__Read_GT_4read17h7d3fed2628b1467eE_001f2580
    ;
    if (lVar7 != 0) {
LAB_0015f241:
      *param_1 = -0x8000000000000000;
      param_1[1] = lVar7;
LAB_0015f21b:
                    /* try { // try from 0015f21b to 0015f224 has its CatchHandler @ 0015f2c6 */
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed7edf1086309a68E
                (local_7cb8);
      goto LAB_0015f225;
    }
                    /* try { // try from 0015f1f8 to 0015f201 has its CatchHandler @ 0015f2cd */
    _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed7edf1086309a68E
              (local_7cb8);
  } while( true );
}