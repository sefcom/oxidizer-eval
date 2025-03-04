void _ZN5uu_cp20show_error_if_needed17h934143ac50374c6eE(long *param_1)

{
  ulong uVar1;
  undefined local_68 [16];
  long *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_20;
  code *local_18;
  
  uVar1 = 4;
  if (*param_1 - 2U < 0xb) {
    uVar1 = *param_1 - 2U;
  }
  if ((uVar1 != 3) && (uVar1 != 6)) {
    local_58 = param_1;
    local_68 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_18 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h52491f3ba70e88c7E;
    local_50 = &DAT_002b5cc8;
    local_48 = 2;
    local_30 = 0;
    local_40 = &local_20;
    local_38 = 1;
    local_20 = local_68;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_50);
    local_68._0_8_ = &local_58;
    local_68._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2064bcc4257d401dE;
    local_50 = &DAT_002b5ce8;
    local_48 = 2;
    local_30 = 0;
    local_38 = 1;
    local_40 = (undefined **)local_68;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_50);
  }
  return;
}