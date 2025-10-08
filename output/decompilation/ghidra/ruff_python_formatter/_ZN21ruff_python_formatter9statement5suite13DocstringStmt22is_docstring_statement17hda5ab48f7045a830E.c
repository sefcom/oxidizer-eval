ulong _ZN21ruff_python_formatter9statement5suite13DocstringStmt22is_docstring_statement17hda5ab48f7045a830E
                (int *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined local_18 [16];
  
  if (*param_1 != 0x13) {
    return 0;
  }
  local_18 = _ZN15ruff_python_ast5nodes18StringLiteralValue4iter17ha28899f15c0efce0E(param_1 + 2);
  uVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17he15b6d8c4ae7a33cE
                    (local_18,param_2);
  return uVar1 ^ 1;
}