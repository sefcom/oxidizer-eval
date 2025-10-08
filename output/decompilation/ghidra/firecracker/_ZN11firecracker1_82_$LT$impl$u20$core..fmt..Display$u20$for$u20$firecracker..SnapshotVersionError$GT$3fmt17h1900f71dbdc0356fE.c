void _ZN11firecracker1_82__LT_impl_u20_core__fmt__Display_u20_for_u20_firecracker__SnapshotVersionError_GT_3fmt17h1900f71dbdc0356fE
               (int *param_1,undefined8 param_2,undefined8 param_3)

{
  int *local_48;
  int **local_40;
  code *local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*param_1 == 6) {
    local_48 = param_1 + 2;
    local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h05d68fb92091720fE;
    local_30 = &PTR_s_Unable_to_open_snapshot_state_fi_004a4608;
  }
  else {
    local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h892261fdba3d1c45E;
    local_30 = &PTR_s_Invalid_data_format_version_of_s_004a4618;
    local_48 = param_1;
  }
  local_40 = &local_48;
  local_28 = 1;
  local_10 = 0;
  local_20 = &local_40;
  local_18 = 1;
  _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E(param_2,param_3,&local_30);
  return;
}