void _ZN7uu_more10reset_term17h414dda587ba155f3E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = _ZN9crossterm8terminal16disable_raw_mode17h305d553e1a48c02aE();
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h830102b0065460c6E(uVar1,&PTR_DAT_00262948);
  uVar1 = _ZN9crossterm7command18write_command_ansi17h0432cd0c76b6eef8E(param_1,4);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h830102b0065460c6E(uVar1,&PTR_DAT_00262960);
  local_38 = &PTR_DAT_00262938;
  local_30 = 1;
  local_28 = 8;
  local_20 = 0;
  uStack_18 = 0;
  _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_38);
  uVar1 = _ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17h392d0be644ab70e9E
                    (param_1);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h830102b0065460c6E(uVar1,&PTR_DAT_00262978);
  return;
}