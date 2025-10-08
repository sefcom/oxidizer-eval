void _ZN5uu_wc4utf84read23BufReadDecoder_LT_B_GT_11next_strict17h5ded0a3c9701df78E
               (undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  int local_48;
  undefined4 uStack_44;
  ulong local_40;
  byte local_38;
  byte local_37;
  
  puVar3 = PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001ff968;
  lVar1 = param_2 + 0x38;
LAB_001648a0:
  do {
    if (*(long *)(param_2 + 0x30) != 0) {
      _ZN85__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__BufRead_GT_7consume17ha95fa77ba2de7100E
                (param_2);
      *(undefined8 *)(param_2 + 0x30) = 0;
    }
    _ZN85__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__BufRead_GT_8fill_buf17h3e97b555acf3b590E
              (&local_48,param_2);
    uVar6 = local_40;
    lVar2 = CONCAT44(uStack_44,local_48);
    if (lVar2 == 0) {
LAB_001649e4:
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = local_40;
      return;
    }
    if (*(char *)(param_2 + 0x3c) == '\0') {
      if (local_40 == 0) {
        *param_1 = 2;
        return;
      }
      (*(code *)puVar3)(&local_48,lVar2,local_40);
      if (local_48 == 1) {
        uVar5 = local_40;
        if (local_40 == 0) {
          if ((local_38 & 1) == 0) {
            *(ulong *)(param_2 + 0x30) = uVar6;
            uVar4 = _ZN5uu_wc4utf810Incomplete3new17hec8ef2d4187e9f87E(lVar2,uVar6);
            *(int *)(param_2 + 0x38) = (int)uVar4;
            *(char *)(param_2 + 0x3c) = (char)((ulong)uVar4 >> 0x20);
            goto LAB_001648a0;
          }
          uVar5 = (ulong)local_37;
        }
        bVar7 = local_40 == 0;
        uVar6 = uVar5;
      }
      else {
        bVar7 = false;
      }
      *(ulong *)(param_2 + 0x30) = uVar6;
      _ZN85__LT_std__io__buffered__bufreader__BufReader_LT_R_GT__u20_as_u20_std__io__BufRead_GT_8fill_buf17h3e97b555acf3b590E
                (&local_48,param_2);
      if (CONCAT44(uStack_44,local_48) == 0) goto LAB_001649e4;
      auVar9 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h7028662c39c50e0fE
                         (0,uVar6,CONCAT44(uStack_44,local_48),local_40,&PTR_DAT_001f8f58);
      if (bVar7) goto LAB_001649ce;
      goto LAB_00164962;
    }
    if (local_40 == 0) {
      auVar9 = _ZN5uu_wc4utf810Incomplete11take_buffer17h1aa814b698a895eeE(lVar1);
      goto LAB_001649ce;
    }
    auVar8 = _ZN5uu_wc4utf810Incomplete20try_complete_offsets17h473bfdae9ee1fad0E
                       (lVar1,lVar2,local_40);
    *(long *)(param_2 + 0x30) = auVar8._0_8_;
    if (auVar8[8] != '\x02') {
      auVar9 = _ZN5uu_wc4utf810Incomplete11take_buffer17h1aa814b698a895eeE(lVar1);
      if ((auVar8 & (undefined  [16])0x1) == (undefined  [16])0x0) {
LAB_00164962:
        *param_1 = 0;
      }
      else {
LAB_001649ce:
        *param_1 = 1;
      }
      *(undefined (*) [16])(param_1 + 1) = auVar9;
      return;
    }
  } while( true );
}