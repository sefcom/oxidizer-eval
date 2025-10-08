undefined  [16]
_ZN4just11string_kind10StringKind16from_token_start17h243afdb46a506377E
          (undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined *local_10;
  undefined *local_8;
  
  local_10 = &DAT_0017187d;
  local_8 = &DAT_00171889;
  auVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17h02e2b855d1a1521aE
                     (&local_10,param_1,param_2);
  pbVar1 = auVar2._0_8_;
  if (pbVar1 != (byte *)0x0) {
    auVar3._1_7_ = 0;
    auVar3[0] = *pbVar1;
    auVar3[8] = pbVar1[1];
    auVar3._9_7_ = 0;
    return auVar3;
  }
  auVar2._0_8_ = 2;
  return auVar2;
}