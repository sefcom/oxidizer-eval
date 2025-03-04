ulong _ZN5uu_df13mount_info_lt17he7799b73577b1743E(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char cVar5;
  ulong in_RAX;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_38 = in_RAX & 0xffffffff00000000;
  uVar6 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(&local_38);
  cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hfcb4c23ecb597bc5E
                    (uVar1,uVar2,uVar6,1);
  if (cVar5 != '\0') {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    local_38 = local_38 & 0xffffffff;
    uVar7 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E((long)&local_38 + 4);
    cVar5 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17hfcb4c23ecb597bc5E
                      (uVar6,uVar3,uVar7,1);
    if (cVar5 == '\0') {
      return 0;
    }
  }
  uVar8 = *(ulong *)(param_1 + 0x70);
  uVar4 = *(ulong *)(param_2 + 0x70);
  if ((*(ulong *)(param_1 + 0x58) == 0) || (*(ulong *)(param_2 + 0x58) == 0)) {
    if (uVar4 <= uVar8) goto LAB_001c689d;
  }
  else if ((uVar4 <= uVar8) || (*(ulong *)(param_2 + 0x58) < *(ulong *)(param_1 + 0x58))) {
LAB_001c689d:
    cVar5 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h26cf2969793785fbE
                      (uVar1,uVar2,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
    if (cVar5 == '\0') {
      uVar8 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h26cf2969793785fbE
                        (*(undefined8 *)(param_1 + 0x68),uVar8,*(undefined8 *)(param_2 + 0x68),uVar4
                        );
      return uVar8 ^ 1;
    }
    return 1;
  }
  return 0;
}