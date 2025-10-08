void _ZN9alacritty5input22Processor_LT_T_C_A_GT_22process_mouse_bindings17hcb4c2767c9cc745fE
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined uVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  undefined local_48 [8];
  long local_40;
  long local_38;
  
  lVar9 = *(long *)(param_1 + 8);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (lVar9);
  uVar3 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13search_active17hab11a215551a244eE
                    (*(undefined8 *)(param_1 + 0x68));
  uVar3 = _ZN9alacritty6config8bindings11BindingMode3new17h37ed06d7071d7006E
                    (*(undefined4 *)(lVar9 + 0x6dc),uVar3);
  bVar4 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_10mouse_mode17h5645ae47cef353d4E
                    (lVar9);
  puVar2 = *(uint **)(param_1 + 0x28);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
            (puVar2);
  uVar1 = *puVar2;
  lVar9 = *(long *)(param_1 + 0x40);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6config17h316f4bbf9a336606E
            (lVar9);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hca503cae22e9811dE
            (local_48,*(undefined8 *)(lVar9 + 0x1c0),*(undefined8 *)(lVar9 + 0x1c8));
  if (local_38 != 0) {
    bVar5 = (byte)((uVar1 & 4) >> 2);
    if (bVar4 != 1 || bVar5 != 0) {
      lVar7 = local_38 << 6;
      bVar8 = false;
      lVar9 = local_40;
      do {
        cVar6 = _ZN9alacritty6config8bindings16Binding_LT_T_GT_15is_triggered_by17h66634300bdaa8c9aE
                          (lVar9,uVar3,uVar1,param_2,param_3);
        if (cVar6 != '\0') {
          bVar8 = true;
                    /* try { // try from 0055b189 to 0055b195 has its CatchHandler @ 0055b210 */
          _ZN90__LT_alacritty__config__bindings__Action_u20_as_u20_alacritty__input__Execute_LT_T_GT__GT_7execute17hbc4eac16f06c9ab7E
                    (lVar9,param_1);
        }
        lVar9 = lVar9 + 0x40;
        lVar7 = lVar7 + -0x40;
      } while (lVar7 != 0);
      if (((~(bVar4 & bVar5) & 1) == 0 && !bVar8) && (local_38 != 0)) {
        lVar7 = local_38 << 6;
        lVar9 = local_40;
        do {
          cVar6 = _ZN9alacritty6config8bindings16Binding_LT_T_GT_15is_triggered_by17h66634300bdaa8c9aE
                            (lVar9,uVar3,uVar1 & 0x920,param_2,param_3);
          if (cVar6 != '\0') {
                    /* try { // try from 0055b1e6 to 0055b1f2 has its CatchHandler @ 0055b20e */
            _ZN90__LT_alacritty__config__bindings__Action_u20_as_u20_alacritty__input__Execute_LT_T_GT__GT_7execute17hbc4eac16f06c9ab7E
                      (lVar9,param_1);
          }
          lVar9 = lVar9 + 0x40;
          lVar7 = lVar7 + -0x40;
        } while (lVar7 != 0);
      }
    }
  }
  _ZN4core3ptr113drop_in_place_LT_alloc__vec__Vec_LT_alacritty__config__bindings__Binding_LT_winit__event__MouseButton_GT__GT__GT_17hbbeb5ea571877f44E
            (local_48);
  return;
}