undefined8
_ZN21ruff_python_formatter8builders25JoinCommaSeparatedBuilder7entries17h11ba4f915a643efbE
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  undefined local_40 [16];
  undefined local_30 [16];
  
  local_40 = _ZN63__LT_I_u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h022f528d55d30d71E
                       (param_2,param_3);
  auVar1 = _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb1d6a77fc160ddb8E
                     (local_40);
  if (auVar1._0_8_ != 0) {
    do {
      local_30 = auVar1;
      _ZN21ruff_python_formatter8builders25JoinCommaSeparatedBuilder25entry_with_line_separator17h9423e41039be4e33E
                (param_1,local_30,local_30 + 8);
      auVar1 = _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb1d6a77fc160ddb8E
                         (local_40);
    } while (auVar1._0_8_ != 0);
  }
  return param_1;
}