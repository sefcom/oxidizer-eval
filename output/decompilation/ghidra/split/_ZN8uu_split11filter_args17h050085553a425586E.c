undefined8 *
_ZN8uu_split11filter_args17h050085553a425586E
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined *param_4,
          undefined *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
                    /* try { // try from 0016d239 to 0016d2b0 has its CatchHandler @ 0016d323 */
  local_38 = param_4;
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00211d20)(&local_50,uVar1,uVar2)
  ;
  uVar4 = local_40;
  uVar3 = local_48;
  if (local_50 == 1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  else {
    cVar5 = _ZN8uu_split24should_extract_obs_lines17hb752b49cf9c3d508E
                      (local_48,local_40,*local_38,*param_5);
    if (cVar5 == '\0') {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfadfb68a35ae07bfE
                (&local_50,uVar3,uVar4);
    }
    else {
      _ZN8uu_split24handle_extract_obs_lines17h29d50544fed6fa56E(&local_50,uVar3,uVar4,param_3);
    }
                    /* try { // try from 0016d2cd to 0016d2dc has its CatchHandler @ 0016d30f */
    _ZN8uu_split24handle_preceding_options17hd141d9afeb690cc2E(uVar3,uVar4,local_38,param_5);
    *param_1 = CONCAT44(uStack_4c,local_50);
    param_1[1] = local_48;
    param_1[2] = local_40;
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h81504cba959ecfd9E
              (*param_2,uVar1);
  }
  return param_1;
}