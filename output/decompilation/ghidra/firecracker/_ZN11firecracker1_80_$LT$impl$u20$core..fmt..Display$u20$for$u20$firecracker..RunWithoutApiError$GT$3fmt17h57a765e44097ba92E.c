void _ZN11firecracker1_80__LT_impl_u20_core__fmt__Display_u20_for_u20_firecracker__RunWithoutApiError_GT_3fmt17h57a765e44097ba92E
               (char *param_1,undefined8 param_2,undefined8 param_3)

{
  char *local_48;
  char **local_40;
  code *local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*param_1 == '\x1c') {
    local_48 = param_1 + 1;
    local_38 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h0d8937d31288cb39E;
    local_30 = (undefined **)&DAT_004a4668;
  }
  else {
    local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e3a3e8366703febE;
    local_30 = &PTR_s_Failed_to_build_MicroVM_from_Jso_004a4398;
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