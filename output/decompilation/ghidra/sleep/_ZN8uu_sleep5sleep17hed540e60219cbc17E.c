undefined  [16] _ZN8uu_sleep5sleep17hed540e60219cbc17E(long param_1,long param_2)

{
  undefined auVar1 [16];
  char local_29;
  undefined local_28 [24];
  undefined4 local_10;
  
  local_29 = '\0';
  auVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h9e9a00eeb2bdba92E
                     (param_1,param_2 * 0x10 + param_1,&local_29);
  if (local_29 != '\0') {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h70efb2df60242032E
              (local_28);
    local_10 = 1;
    auVar1._0_8_ = _ZN5alloc5boxed12Box_LT_T_GT_3new17h1df68ea8a89b5010E(local_28);
    auVar1._8_8_ = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h83fdce3060699f5bE_001fccb8
    ;
    return auVar1;
  }
  (*(code *)PTR__ZN3std6thread5sleep17h12eb239213be7934E_00204430)
            (auVar1._0_8_,auVar1._8_8_ & 0xffffffff);
  return ZEXT816(0x1fccb8) << 0x40;
}