ulong _ZN7uu_expr11syntax_tree9is_truthy17hbc2e5d0622d8ecb0E(long *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined uVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 unaff_RBX;
  undefined7 uVar8;
  ulong uVar7;
  long local_38;
  long local_30;
  undefined8 local_28;
  char local_20;
  
  uVar8 = (undefined7)((ulong)unaff_RBX >> 8);
  if (*param_1 == -0x8000000000000000) {
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    cVar3 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hbdc352e98c6a24ecE
                      (lVar1,lVar2,"-*/%:",1);
    uVar7 = CONCAT71(uVar8,1);
    if (cVar3 == '\0') {
      local_30 = lVar2 + lVar1;
      local_38 = lVar1;
      pcVar6 = (char *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1ebd26144ee20df5E
                                 (&local_38);
      if (pcVar6 == (char *)0x0) {
        uVar7 = 0;
      }
      else if ((*pcVar6 == '0') || (uVar7 = CONCAT71(uVar8,1), *pcVar6 == '-')) {
        uVar4 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h530582dcff248937E(&local_38);
        uVar5 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17hef697547d5d159b7E
                          (uVar4);
        uVar7 = (ulong)uVar5 ^ 1;
      }
    }
  }
  else {
    _ZN10num_bigint6bigint7convert87__LT_impl_u20_core__convert__From_LT_i64_GT__u20_for_u20_num_bigint__bigint__BigInt_GT_4from17hfb5b8937a947fc26E
              (&local_38);
    uVar7 = CONCAT71(uVar8,1);
    if (*(char *)(param_1 + 3) == local_20) {
      if (*(char *)(param_1 + 3) == '\x01') {
        uVar7 = 0;
      }
      else {
                    /* try { // try from 00230d82 to 00230d86 has its CatchHandler @ 00230da4 */
        uVar5 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17hc86a8171fbe67109E
                          (param_1[1],param_1[2],local_30,local_28);
        uVar7 = (ulong)uVar5 ^ 1;
      }
    }
    _ZN4core3ptr47drop_in_place_LT_num_bigint__bigint__BigInt_GT_17h4ffd1c0c3ebf756bE(&local_38);
  }
  return uVar7 & 0xffffffff;
}