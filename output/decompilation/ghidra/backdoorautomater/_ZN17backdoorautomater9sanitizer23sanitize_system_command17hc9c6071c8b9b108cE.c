void _ZN17backdoorautomater9sanitizer23sanitize_system_command17hc9c6071c8b9b108cE(long param_1)

{
  code *pcVar1;
  undefined ***pppuVar2;
  undefined ***pppuStack_98;
  undefined8 **ppuStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_48;
  undefined *local_40;
  code *local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = (undefined *)&local_48;
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h79b96a6ad6630cecE;
  local_30 = &PTR_s_Error__0032a678;
  local_28 = 2;
  local_10 = 0;
  local_20 = &local_40;
  local_18 = 1;
  pppuVar2 = &local_30;
  local_48 = param_1;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)
            (pppuVar2,&PTR_s_src_sanitizer_rs_0032a698);
  if (pppuVar2 == (undefined ***)0x0) {
    return;
  }
  ppuStack_90 = &pppuStack_98;
  pcStack_88 = 
  _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h1188510700eda4dcE;
  ppuStack_80 = &PTR_s_Error__Something_was_wrong_____0032a6b0;
  uStack_78 = 2;
  uStack_60 = 0;
  ppuStack_70 = &ppuStack_90;
  uStack_68 = 1;
  pppuStack_98 = pppuVar2;
  (*(code *)PTR__ZN4core9panicking9panic_fmt17he7d3af46f65769b3E_003681c0)
            (&ppuStack_80,&PTR_s_src_sanitizer_rs_0032a6d0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}