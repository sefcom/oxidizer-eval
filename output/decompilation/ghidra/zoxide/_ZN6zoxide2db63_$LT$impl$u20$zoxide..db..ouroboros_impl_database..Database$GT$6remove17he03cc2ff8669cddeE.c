ulong _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_6remove17he03cc2ff8669cddeE
                (long param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = *(long *)(param_1 + 8);
  local_18 = local_20 + *(long *)(param_1 + 0x10) * 0x28;
  local_28 = param_2;
  auVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17ha749ffca44ad2cd2E
                     (&local_20,&local_28);
  if ((auVar1 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    _ZN6zoxide2db63__LT_impl_u20_zoxide__db__ouroboros_impl_database__Database_GT_11swap_remove17h9faf7a74dd04c2f3E
              (param_1,auVar1._8_8_);
  }
  return auVar1._0_8_ & 0xffffff01;
}