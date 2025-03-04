undefined  [16] _ZN8uu_sleep5sleep17h137a23986a4540a5E(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  char local_89;
  undefined local_88 [24];
  undefined4 local_70;
  undefined local_68 [80];
  
  local_89 = '\0';
  _ZN5fundu8standard6parser14DurationParser15with_time_units17hbe13b4e07c1ddf4bE
            (local_68,&DAT_0010ab78,4);
  auVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h372e90875fe935f3E
                     (param_1,param_2 * 0x10 + param_1,local_68,&local_89);
  if (local_89 == '\0') {
    _ZN3std6thread5sleep17hdad53e7e356cecc8E(auVar2._0_8_,auVar2._8_8_ & 0xffffffff);
    uVar1 = 0;
  }
  else {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hb47bd66474e52f21E
              (local_88,1,0);
    local_70 = 1;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4f6840875b47ef13E(local_88);
  }
  auVar2._8_8_ = &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hd637be83abbfbbd9E_00216d78
  ;
  auVar2._0_8_ = uVar1;
  return auVar2;
}