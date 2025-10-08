void _ZN11firecracker1_80__LT_impl_u20_core__fmt__Display_u20_for_u20_firecracker__BuildFromJsonError_GT_3fmt17hfbf2fae88897637cE
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
  
  if (*param_1 == '\x1b') {
    local_48 = param_1 + 8;
    local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4ea5a0a150527696E;
    local_30 = &PTR_s_Configuration_for_VMM_from_one_s_004a4648;
  }
  else {
    local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd931bdf604fd945E;
    local_30 = &PTR_s_Could_not_Start_MicroVM_from_one_004a4658;
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