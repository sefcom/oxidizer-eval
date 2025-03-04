void _ZN7uu_sort23tokenize_with_separator17hde6e77d93de0c763E
               (long param_1,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined4 local_54;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined4 *local_38;
  
  local_48 = param_1 + param_2;
  local_40 = 0;
  local_38 = &local_54;
  local_54 = param_3;
  local_50 = param_1;
  auVar3 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hafeb71a2c09695d3E(&local_50,&local_38);
  lVar1 = auVar3._8_8_;
  if (auVar3._0_8_ == 0) {
    uVar2 = 0;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    uVar2 = 0;
    do {
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0ef512be9be90a46E(param_4,uVar2,lVar1);
      uVar2 = lVar1 + 1;
      auVar3 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hafeb71a2c09695d3E
                         (&local_50,&local_38);
      lVar1 = auVar3._8_8_;
    } while (auVar3._0_8_ != 0);
    if (param_2 <= uVar2) {
      return;
    }
  }
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0ef512be9be90a46E(param_4,uVar2,param_2);
  return;
}