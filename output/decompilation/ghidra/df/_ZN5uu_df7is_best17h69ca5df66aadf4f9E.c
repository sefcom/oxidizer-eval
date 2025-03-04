undefined8 _ZN5uu_df7is_best17h69ca5df66aadf4f9E(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long local_38;
  long local_30;
  
  local_30 = param_2 * 0x98 + param_1;
  local_38 = param_1;
  lVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h437f1ce06bbe5de2E
                    (&local_38);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    do {
      cVar3 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h26cf2969793785fbE
                        (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),uVar1,uVar2);
      if ((cVar3 != '\0') &&
         (cVar3 = _ZN5uu_df13mount_info_lt17he7799b73577b1743E(param_3,lVar4), cVar3 != '\0')) {
        return 0;
      }
      lVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h437f1ce06bbe5de2E
                        (&local_38);
    } while (lVar4 != 0);
  }
  return 1;
}