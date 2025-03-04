bool _ZN8uu_cksum9had_reset17h64707811948cf7faE(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  long local_40;
  long local_38;
  
  lVar1 = param_1 + param_2 * 0x18;
  local_40 = param_1;
  local_38 = lVar1;
  auVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h35a4fc5d12fa25d2E
                     (&local_40);
  local_40 = param_1;
  local_38 = lVar1;
  auVar4 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h58b888c41225f503E
                     (&local_40);
  local_40 = param_1;
  local_38 = lVar1;
  auVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h372c78c7d6c62d75E
                     (&local_40);
  bVar2 = false;
  if ((((auVar3._0_8_ == 1) && (auVar4._0_8_ == 1)) && (auVar5._0_8_ == 1)) &&
     (bVar2 = false, auVar3._8_8_ < auVar4._8_8_)) {
    bVar2 = auVar4._8_8_ < auVar5._8_8_;
  }
  return bVar2;
}