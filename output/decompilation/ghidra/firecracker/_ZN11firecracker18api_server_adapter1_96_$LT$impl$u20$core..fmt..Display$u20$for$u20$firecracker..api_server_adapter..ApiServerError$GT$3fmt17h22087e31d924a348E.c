void _ZN11firecracker18api_server_adapter1_96__LT_impl_u20_core__fmt__Display_u20_for_u20_firecracker__api_server_adapter__ApiServerError_GT_3fmt17h22087e31d924a348E
               (char *param_1,undefined8 param_2,undefined8 param_3)

{
  char *local_48;
  char **local_40;
  code *local_38;
  undefined **local_30;
  undefined8 local_28;
  char ***local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  switch(*param_1) {
  case '\x1c':
    local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hab697a8642e9c9e1E;
    local_30 = &PTR_s_Failed_to_build_MicroVM__004a4338;
    goto LAB_0025cfb2;
  case '\x1d':
    local_48 = param_1 + 1;
    local_38 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h0d8937d31288cb39E;
    local_30 = &PTR_s_MicroVM_stopped_with_an_error__004a4358;
    break;
  case '\x1e':
    local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h6d91c61c63b782e8E;
    local_30 = &PTR_s_Failed_to_open_the_API_socket_at_004a4368;
LAB_0025cfb2:
    local_48 = param_1 + 8;
    local_28 = 2;
    goto LAB_0025d017;
  case '\x1f':
    local_48 = param_1 + 8;
    local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h584920b91f85c053E;
    local_30 = &PTR_s_Failed_to_bind_and_run_the_HTTP_s_004a4388;
    break;
  default:
    local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5e3a3e8366703febE;
    local_30 = &PTR_s_Failed_to_build_MicroVM_from_Jso_004a4398;
    local_48 = param_1;
  }
  local_28 = 1;
LAB_0025d017:
  local_40 = &local_48;
  local_10 = 0;
  local_20 = &local_40;
  local_18 = 1;
  _ZN4core3fmt9Formatter9write_fmt17h80c932efe9b76eb7E(param_2,param_3,&local_30);
  return;
}