undefined8 *
_ZN5uu_du16parse_time_style17h4c003b6524a78ee2E(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined local_30 [24];
  
  if (param_2 == 0) {
LAB_001f3f92:
    param_1[1] = &DAT_0011cf4a;
    param_1[2] = 0xe;
  }
  else {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb35b18b4f111dc4aE
                      (param_2,param_3,&DAT_0010f8b8,8);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb35b18b4f111dc4aE
                        (param_2,param_3,"long-isoDateTime",8);
      if (cVar1 != '\0') goto LAB_001f3f92;
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb35b18b4f111dc4aE
                        (param_2,param_3,&DAT_0011cf47,3);
      if (cVar1 == '\0') {
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h1383527df360b9cfE
                  (local_30,param_2,param_3);
        local_38 = 2;
        uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h19aedf1648b3dc3bE(&local_38);
        param_1[1] = uVar2;
        param_1[2] = &
                     PTR__ZN4core3ptr35drop_in_place_LT_uu_du__DuError_GT_17h55943e498f41d83eE_00284558
        ;
        uVar2 = 1;
        goto LAB_001f3fa7;
      }
      param_1[1] = "%Y-%m-%dENETDOWNThursday";
      param_1[2] = 8;
    }
    else {
      param_1[1] = &DAT_0011cf58;
      param_1[2] = 0x17;
    }
  }
  uVar2 = 0;
LAB_001f3fa7:
  *param_1 = uVar2;
  return param_1;
}