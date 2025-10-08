void _ZN6uu_env10EnvAppData30make_error_no_such_file_or_dir17hd6612e965bb2f841E
               (ulong param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *local_90;
  undefined8 local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 **local_60;
  code *local_58;
  undefined local_50 [16];
  undefined8 local_40;
  undefined local_38;
  
  local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002191d8)();
  puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0;
  local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c2ec06aa0838e92E;
  local_90 = &DAT_00210958;
  local_88 = 2;
  local_70 = 0;
  local_78 = 1;
  local_80 = &local_60;
  local_60 = (undefined8 **)local_50;
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002191e0)(&local_90);
  local_50._0_8_ = (undefined8 **)0x1;
  local_38 = 1;
  local_58 = (code *)
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00219558
  ;
  local_90 = &DAT_00210a00;
  local_88 = 2;
  local_70 = 0;
  local_78 = 1;
  local_80 = &local_60;
  local_60 = (undefined8 **)local_50;
  local_50._8_8_ = param_2;
  local_40 = param_3;
  (*(code *)puVar1)(&local_90);
  if ((param_1 & 1) == 0) {
    local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002191d8)();
    local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c2ec06aa0838e92E;
    local_90 = &DAT_00210958;
    local_88 = 2;
    local_70 = 0;
    local_78 = 1;
    local_80 = &local_60;
    local_60 = (undefined8 **)local_50;
    (*(code *)puVar1)(&local_90);
    local_50._0_8_ = &PTR_DAT_00210a40;
    local_50._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c2ec06aa0838e92E;
    local_90 = &DAT_00210a20;
    local_88 = 2;
    local_70 = 0;
    local_78 = 1;
    local_80 = (undefined8 **)local_50;
    (*(code *)puVar1)(&local_90);
  }
  (*(code *)PTR__ZN6uucore4mods5error8ExitCode3new17hdcf0963f6fc7caedE_002191e8)(0x7f);
  return;
}