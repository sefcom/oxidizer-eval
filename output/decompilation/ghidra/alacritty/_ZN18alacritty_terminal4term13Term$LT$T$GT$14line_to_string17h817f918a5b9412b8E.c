void _ZN18alacritty_terminal4term13Term_LT_T_GT_14line_to_string17h817f918a5b9412b8E
               (undefined8 *param_1,long param_2,int param_3,ulong param_4,ulong param_5,
               char param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  undefined4 *puVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  bool bVar13;
  undefined **local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined8 *local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  
  local_a0 = 0;
  uStack_98 = 1;
  local_90 = 0;
  local_88 = param_2 + 0x28;
  local_78 = param_1;
                    /* try { // try from 0046f245 to 0046f267 has its CatchHandler @ 0046f557 */
  lVar4 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                    (local_88,param_3,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009776c8);
  uVar5 = (*(code *)
            PTR__ZN141__LT_alacritty_terminal__grid__row__Row_LT_alacritty_terminal__term__cell__Cell_GT__u20_as_u20_alacritty_terminal__term__cell__LineLength_GT_11line_length17h2c5104173d85403bE_009de550
          )(lVar4);
  local_70 = param_5;
  uVar6 = _ZN4core3cmp3Ord3min17hffab314b5e6491b1E(uVar5,param_5 + 1);
  uVar12 = *(ulong *)(lVar4 + 0x10);
  if (uVar12 <= param_4) {
    local_b0 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009776e0;
LAB_0046f506:
    (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
              (param_4,uVar12,local_b0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  param_4 = param_4 + (long)(short)((uint)(int)(short)(*(int *)(*(long *)(lVar4 + 8) + 0x14 +
                                                               param_4 * 0x18) << 9) >> 0xf);
  bVar13 = false;
  local_b0 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977770;
  local_80 = param_2;
LAB_0046f2d0:
  if (bVar13) {
    lVar10 = param_4 * 0x18;
    uVar12 = param_4;
    do {
      param_4 = uVar12;
      lVar7 = lVar10;
      if (uVar6 <= param_4) goto LAB_0046f3fd;
      uVar12 = *(ulong *)(lVar4 + 0x10);
      if (uVar12 <= param_4) goto LAB_0046f506;
      lVar1 = *(long *)(lVar4 + 8);
                    /* try { // try from 0046f313 to 0046f325 has its CatchHandler @ 0046f555 */
      pcVar8 = (char *)(*(code *)
                         PTR__ZN122__LT_alacritty_terminal__term__TabStops_u20_as_u20_core__ops__index__IndexMut_LT_alacritty_terminal__index__Column_GT__GT_9index_mut17h282086a4525dc455E_009de558
                       )(param_2 + 0x188,param_4,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977788);
      if (*pcVar8 != '\0') break;
      lVar10 = lVar7 + 0x18;
      uVar12 = param_4 + 1;
    } while (*(int *)(lVar1 + 0x10 + lVar7) == 0x20);
    plVar11 = (long *)(lVar1 + lVar7);
  }
  else {
    if (uVar6 <= param_4) {
LAB_0046f3fd:
      uVar2 = *(ulong *)(local_80 + 0xb8);
      if (uVar2 - 1 <= local_70) {
        if (uVar6 != 0) {
                    /* try { // try from 0046f41b to 0046f513 has its CatchHandler @ 0046f557 */
          lVar10 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                             (local_88,param_3,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_009776f8);
          param_4 = uVar6 - 1;
          uVar12 = *(ulong *)(lVar10 + 0x10);
          if (uVar12 <= param_4) {
            local_b0 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977710;
            goto LAB_0046f506;
          }
          if ((*(byte *)(*(long *)(lVar10 + 8) + 0x14 + param_4 * 0x18) & 0x10) != 0)
          goto LAB_0046f463;
        }
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_a0,10);
      }
LAB_0046f463:
      if (1 < uVar6 && uVar6 == uVar2) {
        param_4 = uVar6 - 1;
        uVar12 = *(ulong *)(lVar4 + 0x10);
        if (uVar12 <= param_4) {
          local_b0 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977728;
          goto LAB_0046f506;
        }
        if ((param_6 != '\0') &&
           ((*(ushort *)(*(long *)(lVar4 + 8) + 0x14 + param_4 * 0x18) & 0x400) != 0)) {
          lVar4 = _ZN134__LT_alacritty_terminal__grid__storage__Storage_LT_T_GT__u20_as_u20_core__ops__index__Index_LT_alacritty_terminal__index__Line_GT__GT_5index17h367087db943c6406E
                            (local_88,param_3 + -1,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977740)
          ;
          if (*(long *)(lVar4 + 0x10) == 0) {
            local_b0 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977758;
            param_4 = 0;
            uVar12 = 0;
            goto LAB_0046f506;
          }
          _ZN5alloc6string6String4push17h0ede46164189e411E
                    (&local_a0,*(undefined4 *)(*(long *)(lVar4 + 8) + 0x10));
        }
      }
      local_78[2] = local_90;
      *local_78 = local_a0;
      local_78[1] = uStack_98;
      return;
    }
    uVar12 = *(ulong *)(lVar4 + 0x10);
    if (uVar12 <= param_4) goto LAB_0046f506;
    plVar11 = (long *)(param_4 * 0x18 + *(long *)(lVar4 + 8));
  }
  param_4 = param_4 + 1;
  bVar13 = *(int *)(plVar11 + 2) == 9;
  if ((*(ushort *)((long)plVar11 + 0x14) & 0x440) == 0) {
                    /* try { // try from 0046f396 to 0046f39f has its CatchHandler @ 0046f553 */
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_a0);
    lVar10 = *plVar11;
    if (lVar10 == 0) {
      local_60 = 0;
      local_58 = 0;
    }
    else {
      local_60 = *(undefined8 *)(lVar10 + 0x18);
      local_58 = *(undefined8 *)(lVar10 + 0x20);
    }
    local_68 = 1;
    local_50 = 0;
    local_40 = 0;
    while (puVar9 = (undefined4 *)
                    _ZN116__LT_core__iter__adapters__flatten__FlattenCompat_LT_I_C_U_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf4ec7567faf38ffbE
                              (&local_68), puVar9 != (undefined4 *)0x0) {
                    /* try { // try from 0046f3f3 to 0046f3fa has its CatchHandler @ 0046f559 */
      _ZN5alloc6string6String4push17h0ede46164189e411E(&local_a0,*puVar9);
    }
  }
  goto LAB_0046f2d0;
}