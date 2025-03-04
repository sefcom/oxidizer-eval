void _ZN6uu_env10EnvAppData30make_error_no_such_file_or_dir17hb7f284d37785d950E
               (char param_1,code *param_2,undefined8 param_3)

{
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
  
  local_50 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h402b3702303fb18eE;
  local_90 = &DAT_00248978;
  local_88 = 2;
  local_70 = 0;
  local_78 = 1;
  local_80 = &local_60;
  local_60 = (undefined8 **)local_50;
  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_90);
  local_50._0_8_ = (undefined8 **)0x1;
  local_38 = 1;
  local_58 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
  local_90 = &DAT_00248a28;
  local_88 = 2;
  local_70 = 0;
  local_78 = 1;
  local_80 = &local_60;
  local_60 = (undefined8 **)local_50;
  local_50._8_8_ = param_2;
  local_40 = param_3;
  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_90);
  if (param_1 == '\0') {
    local_50 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_58 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h402b3702303fb18eE;
    local_90 = &DAT_00248978;
    local_88 = 2;
    local_70 = 0;
    local_78 = 1;
    local_80 = &local_60;
    local_60 = (undefined8 **)local_50;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_90);
    local_50._0_8_ = &PTR_DAT_00248a68;
    local_50._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h402b3702303fb18eE;
    local_90 = &DAT_00248a48;
    local_88 = 2;
    local_70 = 0;
    local_78 = 1;
    local_80 = (undefined8 **)local_50;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_90);
  }
  _ZN6uucore4mods5error8ExitCode3new17he6e429e301480307E(0x7f);
  return;
}