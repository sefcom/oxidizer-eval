void _ZN9alacritty5input53__LT_impl_u20_alacritty__config__bindings__Action_GT_16toggle_selection17hd16f39a2721d862fE
               (long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (lVar1);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_16toggle_selection17h33a77c980c2b7ac5E
            (param_1,param_2,*(undefined8 *)(lVar1 + 0x290),*(undefined4 *)(lVar1 + 0x298));
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_12terminal_mut17ha68c2ba7b3d97983E
            (lVar1);
  if (*(char *)(lVar1 + 0x280) == '\x02') {
    return;
  }
  (*(code *)
    PTR__ZN18alacritty_terminal9selection9Selection11include_all17h7c6fde09d9c3054dE_009de580)
            (lVar1 + 600);
  return;
}