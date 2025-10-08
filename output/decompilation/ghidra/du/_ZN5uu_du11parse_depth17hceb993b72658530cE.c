undefined8 *
_ZN5uu_du11parse_depth17hceb993b72658530cE
          (undefined8 *param_1,long param_2,undefined8 param_3,char param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38 [3];
  
  if (param_2 == 0) {
    uVar1 = 0;
    local_38[0] = in_RAX;
LAB_00198a87:
    param_1[1] = uVar1;
    param_1[2] = local_38[0];
    uVar1 = 0;
    goto LAB_00198a91;
  }
  _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E(&local_40);
  if ((char)local_40 == '\0') {
    if (param_4 == '\0') {
      uVar1 = 1;
      goto LAB_00198a87;
    }
LAB_00198a44:
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hac1b67b8d5e5f2cfE
              (local_38,param_2,param_3);
    local_40 = 1;
  }
  else {
    if (param_4 != '\0') goto LAB_00198a44;
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hac1b67b8d5e5f2cfE
              (local_38,param_2,param_3);
    local_40 = 0;
  }
  uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8a707cc2bcbdfcb0E(&local_40);
  param_1[1] = uVar1;
  param_1[2] = &PTR__ZN4core3ptr35drop_in_place_LT_uu_du__DuError_GT_17h2285cec56b29122cE_00245d90;
  uVar1 = 1;
LAB_00198a91:
  *param_1 = uVar1;
  return param_1;
}