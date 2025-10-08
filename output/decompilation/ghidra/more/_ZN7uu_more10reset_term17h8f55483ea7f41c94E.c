void _ZN7uu_more10reset_term17h8f55483ea7f41c94E(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = (*(code *)PTR__ZN9crossterm8terminal16disable_raw_mode17h465f563c46635ef8E_0022d3b0)();
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3a901ae51f259b59E
            (uVar1,&PTR_s_src_uu_more_src_more_rs_00225318);
  uVar1 = _ZN9crossterm7command18write_command_ansi17h092cdb5fcd9c0436E(param_1);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3a901ae51f259b59E
            (uVar1,&PTR_s_src_uu_more_src_more_rs_00225330);
  local_38 = &PTR_s__00225308;
  local_30 = 1;
  local_28 = 8;
  local_20 = 0;
  uStack_18 = 0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0022d3e8)(&local_38);
  uVar1 = (*(code *)
            PTR__ZN57__LT_std__io__stdio__Stdout_u20_as_u20_std__io__Write_GT_5flush17hfb2969f84e2164f2E_0022d300
          )(param_1);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3a901ae51f259b59E
            (uVar1,&PTR_s_src_uu_more_src_more_rs_00225348);
  return;
}