bool _ZN4just6parser6Parser8next_are17he794a8e7ca711dc5E
               (long param_1,undefined *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined local_80 [16];
  undefined local_70 [64];
  char local_30;
  
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h5a58b559c63dc861E
            (param_1 + 0x38,*param_2);
  local_80 = _ZN4just6parser6Parser4rest17h006cb6290a6cc038E(param_1);
  lVar1 = 0;
  while (lVar2 = lVar1, param_3 != lVar2) {
    _ZN4core4iter6traits8iterator8Iterator8try_fold17hc0d12f79d33f0a11E(local_70,local_80);
    if ((local_30 == '%') || (lVar1 = lVar2 + 1, local_30 != param_2[lVar2])) break;
  }
  return param_3 == lVar2;
}