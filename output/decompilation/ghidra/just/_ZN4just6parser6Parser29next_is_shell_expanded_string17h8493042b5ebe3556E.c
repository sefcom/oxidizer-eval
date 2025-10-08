bool _ZN4just6parser6Parser29next_is_shell_expanded_string17h8493042b5ebe3556E(long param_1)

{
  char cVar1;
  long lVar2;
  long local_28;
  long local_20;
  undefined8 local_18;
  undefined local_10 [8];
  
  local_28 = *(long *)(param_1 + 0x18);
  local_20 = local_28 + *(long *)(param_1 + 0x20) * 0x48;
  local_18 = *(undefined8 *)(param_1 + 0x58);
  local_10[0] = 0;
  lVar2 = _ZN100__LT_core__iter__adapters__skip__Skip_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h20ee6d2d274d07c4E
                    (&local_28,local_10);
  if (lVar2 != 0) {
    cVar1 = _ZN4just6parser6Parser29next_is_shell_expanded_string28__u7b__u7b_closure_u7d__u7d_17hf8f95d614f703e87E
                      (lVar2);
    if (cVar1 != '\0') {
      lVar2 = _ZN100__LT_core__iter__adapters__skip__Skip_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h20ee6d2d274d07c4E
                        (&local_28,local_10);
      if (lVar2 != 0) {
        return *(char *)(lVar2 + 0x40) == '!';
      }
    }
  }
  return false;
}