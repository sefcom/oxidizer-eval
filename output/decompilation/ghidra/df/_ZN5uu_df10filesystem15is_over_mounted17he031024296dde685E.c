ulong _ZN5uu_df10filesystem15is_over_mounted17he031024296dde685E
                (long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long local_20;
  long local_18;
  long local_10;
  
  local_18 = param_2 * 0x98 + param_1;
  local_20 = param_1;
  local_10 = param_3;
  lVar1 = _ZN4core4iter6traits12double_ended19DoubleEndedIterator9try_rfold17h0447a209abcf8cc8E
                    (&local_20,&local_10);
  if (lVar1 != 0) {
    uVar2 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h6c46bd122a266b24E
                      (*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),
                       *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
    return uVar2 ^ 1;
  }
  return 0;
}