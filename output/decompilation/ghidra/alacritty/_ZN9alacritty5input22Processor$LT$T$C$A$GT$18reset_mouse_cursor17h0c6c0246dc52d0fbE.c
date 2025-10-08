void _ZN9alacritty5input22Processor_LT_T_C_A_GT_18reset_mouse_cursor17h0c6c0246dc52d0fbE
               (long param_1)

{
  char cVar1;
  long lVar2;
  
  cVar1 = _ZN9alacritty5input22Processor_LT_T_C_A_GT_12cursor_state17hd11ac0475868ceffE();
  lVar2 = _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_6window17hc2466ca785044c59E
                    (*(undefined8 *)(param_1 + 0x30));
  if (cVar1 == *(char *)(lVar2 + 0xf5)) {
    return;
  }
  *(char *)(lVar2 + 0xf5) = cVar1;
  _ZN5winit6window6Window10set_cursor17h058b386c12dba32cE
            (*(undefined8 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28),cVar1);
  return;
}