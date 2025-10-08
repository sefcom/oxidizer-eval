undefined8
_ZN21ruff_python_formatter8builders25JoinCommaSeparatedBuilder5nodes17h093f1809138499c5E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined local_40 [16];
  undefined8 local_30;
  undefined local_28;
  
  local_40 = _ZN63__LT_I_u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h022f528d55d30d71E
                       (param_2,param_3);
  lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a264e658f5c99fcE
                    (local_40);
  if (lVar1 != 0) {
    do {
      local_30 = _ZN119__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_core__convert__From_LT__RF_ruff_python_ast__nodes__Alias_GT__GT_4from17h7ed13ad84bdbb77eE
                           (lVar1);
      local_28 = 0;
      _ZN21ruff_python_formatter8builders25JoinCommaSeparatedBuilder25entry_with_line_separator17h34b4a072574088e2E
                (param_1,lVar1,&local_30);
      lVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a264e658f5c99fcE
                        (local_40);
    } while (lVar1 != 0);
  }
  return param_1;
}