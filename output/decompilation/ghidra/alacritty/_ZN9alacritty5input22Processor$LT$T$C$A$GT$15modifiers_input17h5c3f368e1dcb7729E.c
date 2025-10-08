void _ZN9alacritty5input22Processor_LT_T_C_A_GT_15modifiers_input17h5c3f368e1dcb7729E
               (long param_1,undefined4 param_2,undefined param_3)

{
  undefined4 *puVar1;
  char cVar2;
  long lVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
            (puVar1);
  *puVar1 = param_2;
  *(undefined *)(puVar1 + 1) = param_3;
  lVar3 = *(long *)(param_1 + 0x18);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar3);
  *(undefined *)(lVar3 + 0x39) = 1;
  cVar2 = _ZN9alacritty5input22Processor_LT_T_C_A_GT_12cursor_state17hd11ac0475868ceffE(param_1);
  lVar3 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6window17hc2466ca785044c59E
                    (*(undefined8 *)(param_1 + 0x30));
  if (cVar2 == *(char *)(lVar3 + 0xf5)) {
    return;
  }
  *(char *)(lVar3 + 0xf5) = cVar2;
  _ZN5winit6window6Window10set_cursor17h058b386c12dba32cE
            (*(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28),cVar2);
  return;
}