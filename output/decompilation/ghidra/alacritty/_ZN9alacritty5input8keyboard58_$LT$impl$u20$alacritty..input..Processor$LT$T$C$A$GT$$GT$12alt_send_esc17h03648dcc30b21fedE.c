uint _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_12alt_send_esc17h03648dcc30b21fedE
               (uint *param_1,short param_2,uint param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
            ();
  uVar2 = *param_1;
  if (param_2 == 0) {
    if ((0x2a < (ushort)param_3) ||
       ((0x4000201c000U >> ((ulong)(param_3 & 0xffff) & 0x3f) & 1) == 0)) {
      _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
                (param_1);
    }
    uVar2 = uVar2 >> 8 & 1;
  }
  else if ((uVar2 & 0x100) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                      (param_4,param_5 + param_4);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),lVar1 == 1);
  }
  return uVar2;
}