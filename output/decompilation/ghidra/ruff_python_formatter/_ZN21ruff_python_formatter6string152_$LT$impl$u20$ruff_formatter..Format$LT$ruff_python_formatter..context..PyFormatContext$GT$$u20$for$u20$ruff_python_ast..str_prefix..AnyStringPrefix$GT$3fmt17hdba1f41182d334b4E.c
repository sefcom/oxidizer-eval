undefined4 *
_ZN21ruff_python_formatter6string152__LT_impl_u20_ruff_formatter__Format_LT_ruff_python_formatter__context__PyFormatContext_GT__u20_for_u20_ruff_python_ast__str_prefix__AnyStringPrefix_GT_3fmt17hdba1f41182d334b4E
          (undefined4 *param_1,char *param_2,undefined8 *param_3)

{
  undefined extraout_DL;
  undefined7 extraout_var;
  undefined local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  if ((byte)param_2[1] < 2 || *param_2 != '\x03') {
    local_20 = _ZN15ruff_python_ast10str_prefix15AnyStringPrefix6as_str17hfc265adb6e4a05eaE
                         (*param_2,param_2[1]);
    local_18 = CONCAT71(extraout_var,extraout_DL);
    local_28[0] = 4;
    (**(code **)(param_3[1] + 0x18))(*param_3,local_28);
  }
  *param_1 = 4;
  return param_1;
}