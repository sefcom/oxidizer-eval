void _ZN7uu_test6parser6Parser10next_token17h4b6300a6fb2b38c8E(undefined8 param_1,long param_2)

{
  long lVar1;
  long local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0x8000000000000001;
  if (lVar1 == -0x7fffffffffffffff) {
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4dcbdc82a201ae23E
              (&local_20,param_2 + 0x30);
  }
  else {
    local_18 = *(undefined4 *)(param_2 + 0x20);
    uStack_14 = *(undefined4 *)(param_2 + 0x24);
    uStack_10 = *(undefined4 *)(param_2 + 0x28);
    uStack_c = *(undefined4 *)(param_2 + 0x2c);
    local_20 = lVar1;
  }
  _ZN7uu_test6parser6Symbol3new17habde89fb8e284063E(param_1,&local_20);
  return;
}