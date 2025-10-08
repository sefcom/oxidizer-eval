ulong _ZN5uu_df7is_best17h2e728b01e5cd47e3E(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  
  uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    param_2 = param_2 * 0x98;
    do {
      cVar3 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h6c46bd122a266b24E
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),uVar1,uVar2);
      if (cVar3 != '\0') {
        cVar3 = _ZN5uu_df13mount_info_lt17h4da597b980b7148dE(param_3,param_1);
        if (cVar3 != '\0') {
          uVar4 = 0;
          break;
        }
      }
      param_1 = param_1 + 0x98;
      param_2 = param_2 + -0x98;
    } while (param_2 != 0);
  }
  return uVar4 & 0xffffffff;
}