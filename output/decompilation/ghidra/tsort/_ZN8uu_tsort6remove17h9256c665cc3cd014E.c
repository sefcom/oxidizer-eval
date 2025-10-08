void _ZN8uu_tsort6remove17h9256c665cc3cd014E(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  long local_10;
  
  local_18 = *(long *)(param_1 + 8);
  local_10 = *(long *)(param_1 + 0x10) * 0x10 + local_18;
  local_28 = param_2;
  local_20 = param_3;
  auVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17hc2769bd0853c5449E
                     (&local_18,&local_28);
  _ZN4core6option15Option_LT_T_GT_7inspect17h35b0acb6d29925d4E(auVar1._0_8_,auVar1._8_8_,param_1);
  return;
}