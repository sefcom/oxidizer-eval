void _ZN7uu_uniq4Uniq11skip_fields17habc1c899824c43e1E
               (undefined8 *param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_R15;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  if ((param_2 & 1) == 0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h555f59bb363643cbE
              (param_1,param_4,param_5);
    return;
  }
  local_50 = param_5 + param_4;
  local_58 = param_4;
  if (param_3 != 0) {
    cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3all17h2470b6c344d1905eE
                      (&local_58);
    if (cVar1 != '\0') {
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
      return;
    }
    _ZN4core4iter6traits8iterator8Iterator7collect17h346062323deb9fffE(&local_48,&local_58);
    lVar2 = local_40;
    unaff_R15 = local_48;
    if (local_38 == 0) {
LAB_0016679e:
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
      goto LAB_001667b5;
    }
    local_50 = local_38 + local_40;
    local_58 = local_40;
    if (param_3 != 1) {
      lVar3 = param_3 + -1;
      do {
        lVar2 = local_40;
        unaff_R15 = local_48;
        local_58 = local_40;
        cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3all17h2470b6c344d1905eE
                          (&local_58);
        if (cVar1 != '\0') goto LAB_0016679e;
                    /* try { // try from 0016674c to 00166758 has its CatchHandler @ 001667df */
        _ZN4core4iter6traits8iterator8Iterator7collect17h346062323deb9fffE(&local_48,&local_58);
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hfd495873f16042daE
                  (unaff_R15,lVar2);
        lVar2 = local_40;
        unaff_R15 = local_48;
        if (local_38 == 0) goto LAB_0016679e;
        local_50 = local_38 + local_40;
        local_58 = local_40;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
                    /* try { // try from 00166789 to 00166796 has its CatchHandler @ 001667cf */
  lVar2 = local_58;
  _ZN4core4iter6traits8iterator8Iterator7collect17haff871eb77765be1E(param_1,local_58,local_50);
  if (param_3 == 0) {
    return;
  }
LAB_001667b5:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hfd495873f16042daE(unaff_R15,lVar2);
  return;
}