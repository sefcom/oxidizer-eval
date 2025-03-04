undefined8 *
_ZN5uu_du11parse_depth17h0681c409b9251d40E
          (undefined8 *param_1,long param_2,undefined8 param_3,char param_4)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38 [3];
  
  if (param_2 == 0) {
    uVar1 = 0;
    local_38[0] = in_RAX;
LAB_001f40b8:
    param_1[1] = uVar1;
    param_1[2] = local_38[0];
    uVar1 = 0;
    goto LAB_001f40c2;
  }
  _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
            (&local_40);
  if ((char)local_40 == '\0') {
    if (param_4 == '\0') {
      uVar1 = 1;
      goto LAB_001f40b8;
    }
LAB_001f4075:
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h1383527df360b9cfE
              (local_38,param_2,param_3);
    local_40 = 1;
  }
  else {
    if (param_4 != '\0') goto LAB_001f4075;
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h1383527df360b9cfE
              (local_38,param_2,param_3);
    local_40 = 0;
  }
  uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h19aedf1648b3dc3bE(&local_40);
  param_1[1] = uVar1;
  param_1[2] = &PTR__ZN4core3ptr35drop_in_place_LT_uu_du__DuError_GT_17h55943e498f41d83eE_00284558;
  uVar1 = 1;
LAB_001f40c2:
  *param_1 = uVar1;
  return param_1;
}