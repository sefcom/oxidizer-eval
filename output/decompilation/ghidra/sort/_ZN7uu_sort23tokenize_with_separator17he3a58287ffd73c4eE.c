void _ZN7uu_sort23tokenize_with_separator17he3a58287ffd73c4eE
               (long param_1,ulong param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined4 local_5c;
  ulong local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined4 *local_38;
  
  local_48 = param_1 + param_2;
  local_40 = 0;
  local_38 = &local_5c;
  local_5c = param_3;
  local_58 = param_2;
  local_50 = param_1;
  auVar3 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h6349d0229f81716eE(&local_50,&local_38);
  lVar1 = auVar3._8_8_;
  if ((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar2 = 0;
    if (local_58 == 0) {
      return;
    }
  }
  else {
    uVar2 = 0;
    do {
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h5e09b1a2e814c1b4E
                (param_4,uVar2,lVar1,&PTR_s_src_uu_sort_src_sort_rs_0028d000);
      uVar2 = lVar1 + 1;
      auVar3 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h6349d0229f81716eE
                         (&local_50,&local_38);
      lVar1 = auVar3._8_8_;
    } while ((auVar3 & (undefined  [16])0x1) != (undefined  [16])0x0);
    if (local_58 <= uVar2) {
      return;
    }
  }
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h5e09b1a2e814c1b4E
            (param_4,uVar2,local_58,&PTR_s_src_uu_sort_src_sort_rs_0028cfe8);
  return;
}