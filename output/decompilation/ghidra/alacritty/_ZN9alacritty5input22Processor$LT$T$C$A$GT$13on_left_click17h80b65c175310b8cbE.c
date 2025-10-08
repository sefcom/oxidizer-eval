void _ZN9alacritty5input22Processor_LT_T_C_A_GT_13on_left_click17h80b65c175310b8cbE(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar1);
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_19inline_search_state17h7eeec55d722ca445E
            (*(undefined8 *)(param_1 + 0x28));
  _ZN105__LT_alacritty__event__ActionContext_LT_N_C_T_GT__u20_as_u20_alacritty__input__ActionContext_LT_T_GT__GT_13scheduler_mut17h7228edc0b7dad3eaE
            (lVar1);
                    /* WARNING: Could not recover jumptable at 0x00559ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_001f2b80 + *(int *)(&DAT_001f2b80 + (ulong)*(byte *)(lVar1 + 0x3b) * 4)))();
  return;
}