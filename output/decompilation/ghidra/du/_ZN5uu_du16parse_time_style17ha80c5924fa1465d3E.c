undefined8 *
_ZN5uu_du16parse_time_style17ha80c5924fa1465d3E(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined local_30 [24];
  
  if (param_2 == 0) {
LAB_00198962:
    param_1[1] = "%Y-%m-%d %H:%M";
    param_1[2] = 0xe;
  }
  else {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h99bb5143d53920f6E
                      (param_2,param_3,"full-iso",8);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h99bb5143d53920f6E
                        (param_2,param_3,"long-isoDateTime",8);
      if (cVar1 != '\0') goto LAB_00198962;
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h99bb5143d53920f6E
                        (param_2,param_3,"iso",3);
      if (cVar1 == '\0') {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hac1b67b8d5e5f2cfE
                  (local_30,param_2,param_3);
        local_38 = 2;
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8a707cc2bcbdfcb0E(&local_38);
        param_1[1] = uVar2;
        param_1[2] = &
                     PTR__ZN4core3ptr35drop_in_place_LT_uu_du__DuError_GT_17h2285cec56b29122cE_00245d90
        ;
        uVar2 = 1;
        goto LAB_00198977;
      }
      param_1[1] = "%Y-%m-%d";
      param_1[2] = 8;
    }
    else {
      param_1[1] = "%Y-%m-%d %H:%M:%S.%f %z";
      param_1[2] = 0x17;
    }
  }
  uVar2 = 0;
LAB_00198977:
  *param_1 = uVar2;
  return param_1;
}