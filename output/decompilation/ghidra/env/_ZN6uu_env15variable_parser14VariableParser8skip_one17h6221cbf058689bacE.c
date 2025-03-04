void _ZN6uu_env15variable_parser14VariableParser8skip_one17h6221cbf058689bacE(undefined4 *param_1)

{
  undefined4 uVar1;
  long local_20;
  undefined8 local_18;
  undefined local_10;
  
  _ZN6uu_env13string_parser12StringParser13consume_chunk17hb3f2998da0acbfa7E(&local_20);
  if (local_20 == 0) {
    uVar1 = 8;
  }
  else {
    *(undefined8 *)(param_1 + 2) = local_18;
    *(undefined8 *)(param_1 + 4) = local_18;
    *(undefined *)(param_1 + 6) = local_10;
    uVar1 = 5;
  }
  *param_1 = uVar1;
  return;
}