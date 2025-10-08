char _ZN21ruff_python_formatter10expression11binary_like25FlatBinaryExpressionSlice17lowest_precedence17h07fc8e597721b4c7E
               (long param_1,long param_2)

{
  char cVar1;
  long local_18;
  long local_10;
  undefined8 local_8;
  
  local_10 = param_2 * 0x20 + param_1;
  local_8 = 0;
  local_18 = param_1;
  cVar1 = _ZN4core4iter6traits8iterator8Iterator6reduce17hcd7e6498fd24ff9aE(&local_18);
  if (cVar1 == '\r') {
    cVar1 = '\0';
  }
  return cVar1;
}