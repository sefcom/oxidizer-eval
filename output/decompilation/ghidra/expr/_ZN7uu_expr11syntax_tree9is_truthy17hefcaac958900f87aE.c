ulong _ZN7uu_expr11syntax_tree9is_truthy17hefcaac958900f87aE(long param_1)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulong uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_20;
  
  _ZN10num_bigint6bigint7convert87__LT_impl_u20_core__convert__From_LT_i64_GT__u20_for_u20_num_bigint__bigint__BigInt_GT_4from17h0b235168218471e1E
            (&local_38);
  uVar2 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  if (*(char *)(param_1 + 0x18) == local_20) {
    if (*(char *)(param_1 + 0x18) == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar1 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h0032e1dc3f085ef7E
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),local_30,
                         local_28);
      uVar2 = (ulong)uVar1 ^ 1;
    }
  }
  _ZN4core3ptr47drop_in_place_LT_num_bigint__bigint__BigInt_GT_17hd240cd584614de3eE
            (local_38,local_30);
  return uVar2 & 0xffffffff;
}