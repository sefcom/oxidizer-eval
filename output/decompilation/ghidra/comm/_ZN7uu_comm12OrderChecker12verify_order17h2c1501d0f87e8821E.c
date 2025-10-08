byte _ZN7uu_comm12OrderChecker12verify_order17h2c1501d0f87e8821E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **local_70;
  undefined8 uStack_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  char **local_40;
  code *local_38;
  char *local_30;
  undefined8 local_28;
  
  if (param_1[2] == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h397e91f739d192dbE
              (&local_70);
    uVar3 = *param_1;
    uVar2 = param_1[1];
  }
  else {
    uVar2 = param_1[1];
    cVar1 = _ZN50__LT_A_u20_as_u20_core__slice__cmp__SliceChain_GT_11chaining_ge17hfc119572dc8ad81eE
                      (param_2,param_3,uVar2);
    if (cVar1 == '\0') {
      if (*(char *)((long)param_1 + 0x1a) != '\x01') {
        local_30 = "1";
        if (*(char *)(param_1 + 3) != '\0') {
          local_30 = "2";
        }
        local_28 = 1;
        local_40 = &local_30;
        local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h4b6cb7d1e879db89E;
        local_70 = &PTR_s_comm__file_is_not_in_sorted_orde_001e0c58;
        uStack_68 = 2;
        local_50 = 0;
        local_60 = &local_40;
        local_58 = 1;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e72b8)(&local_70);
        *(undefined *)((long)param_1 + 0x1a) = 1;
      }
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h397e91f739d192dbE
                (&local_70,param_2,param_3);
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17he0a0047fc625cdb7E
                (*param_1,uVar2);
      param_1[2] = local_60;
      *param_1 = local_70;
      param_1[1] = uStack_68;
      return *(byte *)((long)param_1 + 0x19) ^ 1;
    }
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h397e91f739d192dbE
              (&local_70,param_2,param_3);
    uVar3 = *param_1;
  }
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17he0a0047fc625cdb7E(uVar3,uVar2);
  param_1[2] = local_60;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return 1;
}