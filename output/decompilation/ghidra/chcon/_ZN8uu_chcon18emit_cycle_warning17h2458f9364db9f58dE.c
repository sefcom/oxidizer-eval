void _ZN8uu_chcon18emit_cycle_warning17h2458f9364db9f58dE(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *local_88;
  code *local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_48 [16];
  undefined8 local_38;
  undefined local_30;
  
  local_48 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f6f18)();
  puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f6f20;
  local_80 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfc43d111ea64d20eE;
  local_78 = (undefined **)&DAT_001f04a0;
  local_70 = 2;
  local_58 = 0;
  local_60 = 1;
  local_88 = (undefined8 *)local_48;
  local_68 = (undefined *)&local_88;
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f6f20)(&local_78);
  local_48._0_8_ = 1;
  local_30 = 1;
  local_80 = (code *)
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f6f68
  ;
  local_78 = &PTR_s_Circular_directory_structure__Th_001f0510;
  local_70 = 2;
  local_58 = 0;
  local_60 = 1;
  local_88 = (undefined8 *)local_48;
  local_68 = (undefined *)&local_88;
  local_48._8_8_ = param_1;
  local_38 = param_2;
  (*(code *)puVar1)(&local_78);
  return;
}