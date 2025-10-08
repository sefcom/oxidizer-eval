byte _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_20process_key_bindings17h19a8c305713b2048E
               (long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  byte bVar5;
  undefined uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  byte local_ee;
  undefined local_ed;
  undefined4 local_ec;
  undefined *local_e8;
  undefined2 *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined4 *local_c8;
  byte *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 local_50 [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar8 = *(long *)(param_1 + 8);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (lVar8);
  uVar6 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13search_active17hab11a215551a244eE
                    (*(undefined8 *)(param_1 + 0x68));
  local_ed = _ZN9alacritty6config8bindings11BindingMode3new17h37ed06d7071d7006E
                       (*(undefined4 *)(lVar8 + 0x6dc),uVar6);
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
            (puVar1);
  local_ec = *puVar1;
  local_ee = 2;
  (*(code *)PTR__ZN5winit8keyboard3Key6as_ref17ha61159f0166fa8fbE_009dfee0)(&local_e0,param_2);
  if ((char)local_e0 == ' ') {
                    /* try { // try from 005569c6 to 005569df has its CatchHandler @ 00556c51 */
    (*(code *)PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17hb778be1bb3f3f772E_009dfd60)
              (&local_80,local_d8,local_d0);
    _ZN8smol_str4Repr3new17hdb169bdb6c6b5e78E(&local_b8,&local_80);
    local_48 = local_b8;
    uStack_44 = uStack_b4;
    uStack_40 = uStack_b0;
    uStack_3c = uStack_ac;
    local_50[0] = 1;
    _ZN4core3ptr56drop_in_place_LT_winit__keyboard__Key_LT__RF_str_GT__GT_17h2dc152dabd79984bE
              (&local_e0);
  }
  else {
    _ZN4core3ptr56drop_in_place_LT_winit__keyboard__Key_LT__RF_str_GT__GT_17h2dc152dabd79984bE
              (&local_e0);
    _ZN70__LT_winit__keyboard__Key_LT_Str_GT__u20_as_u20_core__clone__Clone_GT_5clone17ha91dda63f770d88eE
              (local_50,param_2);
  }
  local_e0 = local_50;
  local_d0 = &local_ed;
  local_c8 = &local_ec;
  local_c0 = &local_ee;
  lVar8 = *(long *)(param_1 + 0x40);
  local_d8 = param_2;
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6config17h316f4bbf9a336606E
            (lVar8);
  uVar2 = *(ulong *)(lVar8 + 0x2f0);
  if (uVar2 != 0) {
    lVar8 = 0;
    local_e8 = &DAT_00982c48;
    uVar10 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x40);
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6config17h316f4bbf9a336606E
                (lVar3);
      uVar9 = *(ulong *)(lVar3 + 0x2f0);
      if (uVar9 <= uVar10) goto LAB_00556c41;
      _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_20process_key_bindings28__u7b__u7b_closure_u7d__u7d_17h1896a1048bc44dc4E
                (&local_80,&local_e0,*(long *)(lVar3 + 0x2e8) + lVar8);
      if (CONCAT44(uStack_7c,local_80) == -0x7fffffffffffffcb) {
                    /* try { // try from 00556a90 to 00556ade has its CatchHandler @ 00556c82 */
        _ZN4core3ptr84drop_in_place_LT_core__option__Option_LT_alacritty__config__bindings__Action_GT__GT_17h1f9d15c7c9cc1a23E
                  (&local_80);
      }
      else {
        local_98 = local_60;
        uStack_94 = uStack_5c;
        uStack_90 = uStack_58;
        uStack_8c = uStack_54;
        local_a8 = local_70;
        uStack_a4 = uStack_6c;
        uStack_a0 = uStack_68;
        uStack_9c = uStack_64;
        local_b8 = local_80;
        uStack_b4 = uStack_7c;
        uStack_b0 = uStack_78;
        uStack_ac = uStack_74;
                    /* try { // try from 00556b14 to 00556b1e has its CatchHandler @ 00556c6f */
        _ZN90__LT_alacritty__config__bindings__Action_u20_as_u20_alacritty__input__Execute_LT_T_GT__GT_7execute17hbc4eac16f06c9ab7E
                  (&local_b8,param_1);
                    /* try { // try from 00556b1f to 00556b26 has its CatchHandler @ 00556c82 */
        _ZN4core3ptr56drop_in_place_LT_alacritty__config__bindings__Action_GT_17hffcdaa1347139d5cE
                  (&local_b8);
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x60;
    } while (uVar2 != uVar10);
    lVar8 = *(long *)(param_1 + 0x40);
  }
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6config17h316f4bbf9a336606E
            (lVar8);
  uVar2 = *(ulong *)(lVar8 + 0x2d8);
  if (uVar2 != 0) {
    uVar10 = 0;
    local_e8 = &DAT_00982c30;
    do {
      lVar8 = *(long *)(param_1 + 0x40);
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6config17h316f4bbf9a336606E
                (lVar8);
      uVar9 = *(ulong *)(lVar8 + 0x2d8);
      if (uVar9 <= uVar10) {
LAB_00556c41:
                    /* try { // try from 00556c41 to 00556c4e has its CatchHandler @ 00556c80 */
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                  (uVar10,uVar9,local_e8);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0x2d0) + uVar10 * 8);
      if (*(short *)(lVar8 + 0x40) != 5) {
        uVar7 = _ZN9alacritty6config9ui_config11HintBinding11key_binding17h0eda263f8a34080bE
                          (lVar8 + 0x40);
        _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_20process_key_bindings28__u7b__u7b_closure_u7d__u7d_17h1896a1048bc44dc4E
                  (&local_80,&local_e0,uVar7);
        if (CONCAT44(uStack_7c,local_80) == -0x7fffffffffffffcb) {
                    /* try { // try from 00556b70 to 00556bca has its CatchHandler @ 00556c7e */
          _ZN4core3ptr84drop_in_place_LT_core__option__Option_LT_alacritty__config__bindings__Action_GT__GT_17h1f9d15c7c9cc1a23E
                    (&local_80);
        }
        else {
          local_98 = local_60;
          uStack_94 = uStack_5c;
          uStack_90 = uStack_58;
          uStack_8c = uStack_54;
          local_a8 = local_70;
          uStack_a4 = uStack_6c;
          uStack_a0 = uStack_68;
          uStack_9c = uStack_64;
          local_b8 = local_80;
          uStack_b4 = uStack_7c;
          uStack_b0 = uStack_78;
          uStack_ac = uStack_74;
                    /* try { // try from 00556c00 to 00556c0a has its CatchHandler @ 00556c60 */
          _ZN90__LT_alacritty__config__bindings__Action_u20_as_u20_alacritty__input__Execute_LT_T_GT__GT_7execute17hbc4eac16f06c9ab7E
                    (&local_b8,param_1);
                    /* try { // try from 00556c0b to 00556c12 has its CatchHandler @ 00556c7e */
          _ZN4core3ptr56drop_in_place_LT_alacritty__config__bindings__Action_GT_17hffcdaa1347139d5cE
                    (&local_b8);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
  }
  bVar5 = local_ee;
  _ZN4core3ptr41drop_in_place_LT_winit__keyboard__Key_GT_17h52f71c141f8140f2E(local_50);
  return bVar5 & 1;
}