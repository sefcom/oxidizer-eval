void _ZN6uu_env15variable_parser14VariableParser8skip_one17hc689cd00633feaf8E(undefined4 *param_1)

{
  int local_20 [2];
  undefined8 local_18;
  undefined local_10;
  
  (*(code *)PTR__ZN6uu_env13string_parser12StringParser13consume_chunk17h727b81068f6a78cbE_00219370)
            (local_20);
  if (local_20[0] == 1) {
    *(undefined8 *)(param_1 + 2) = local_18;
    *(undefined8 *)(param_1 + 4) = local_18;
    *(undefined *)(param_1 + 6) = local_10;
    *param_1 = 0xb;
    return;
  }
  *param_1 = 0xc;
  return;
}