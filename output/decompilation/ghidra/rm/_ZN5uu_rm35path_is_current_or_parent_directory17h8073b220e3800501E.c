ulong _ZN5uu_rm35path_is_current_or_parent_directory17h8073b220e3800501E
                (short *param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  ulong unaff_RBP;
  undefined7 uVar3;
  undefined4 local_34;
  undefined8 local_30;
  short *local_28;
  long local_20;
  
  local_30 = 0;
  uVar3 = (undefined7)(unaff_RBP >> 8);
  local_28 = param_1;
  local_20 = param_2;
  if (param_2 == 2) {
    unaff_RBP = CONCAT71(uVar3,1);
    if (*param_1 == 0x2e2e) goto LAB_0015ee46;
  }
  else if ((param_2 == 1) && (unaff_RBP = CONCAT71(uVar3,1), *(char *)param_1 == '.'))
  goto LAB_0015ee46;
  local_34 = CONCAT22(local_34._2_2_,0x2e2f);
                    /* try { // try from 0015edc1 to 0015ee43 has its CatchHandler @ 0015ee5b */
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17hfb293b5be5b6c72eE
                    (param_1,param_2,&local_34,2);
  unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
  if (cVar1 == '\0') {
    local_34 = CONCAT13(local_34._3_1_,0x2e2e2f);
    cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17hfb293b5be5b6c72eE
                      (param_1,param_2,&local_34,3);
    if (cVar1 == '\0') {
      local_34 = CONCAT13(local_34._3_1_,0x2f2e2f);
      cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17hfb293b5be5b6c72eE
                        (param_1,param_2,&local_34,3);
      if (cVar1 == '\0') {
        local_34 = 0x2f2e2e2f;
        uVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17hfb293b5be5b6c72eE
                          (param_1,param_2,&local_34,4);
        unaff_RBP = (ulong)uVar2;
      }
    }
  }
LAB_0015ee46:
  _ZN4core3ptr128drop_in_place_LT_core__result__Result_LT__RF__u5b_u8_u5d__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h161a4a1502d63dd1E
            (&local_30);
  return unaff_RBP & 0xffffffff;
}