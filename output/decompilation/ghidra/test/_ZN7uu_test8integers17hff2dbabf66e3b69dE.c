void _ZN7uu_test8integers17hff2dbabf66e3b69dE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  bool bVar7;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  undefined local_60;
  undefined7 uStack_5f;
  ulong local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001e60e0)(&local_78);
  uVar3 = param_2;
  uVar4 = param_3;
  if ((int)local_78 == 1) {
LAB_001592d9:
    local_68 = uVar4;
    local_70 = uVar3;
    local_78 = 1;
    local_60 = 1;
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h47d193bf63b6bc9aE
              (&local_48,&local_78);
    *param_1 = 5;
    param_1[1] = local_48;
    param_1[2] = uStack_40;
    param_1[3] = local_38;
    return;
  }
  _ZN4core3num22__LT_impl_u20_i128_GT_16from_ascii_radix17h1d5c018759fadde2E
            (&local_78,local_70,local_68);
  uVar1 = local_68;
  uVar3 = param_2;
  uVar4 = param_3;
  if ((char)local_78 == '\x01') goto LAB_001592d9;
  lVar6 = CONCAT71(uStack_5f,local_60);
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001e60e0)
            (&local_78,param_4,param_5);
  uVar3 = param_4;
  uVar4 = param_5;
  if ((int)local_78 == 1) goto LAB_001592d9;
  _ZN4core3num22__LT_impl_u20_i128_GT_16from_ascii_radix17h1d5c018759fadde2E
            (&local_78,local_70,local_68);
  uVar2 = local_68;
  uVar3 = param_4;
  uVar4 = param_5;
  if ((char)local_78 == '\x01') goto LAB_001592d9;
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001e60e0)
            (&local_78,param_6,param_7);
  if ((int)local_78 == 1) {
LAB_00159385:
    local_78 = 1;
    local_68 = param_7;
    local_60 = 1;
    local_70 = param_6;
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h47d193bf63b6bc9aE
              (param_1 + 1,&local_78);
    *param_1 = 4;
    return;
  }
  local_58 = uVar2;
  local_50 = CONCAT71(uStack_5f,local_60);
  cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                    (local_70,local_68,"-eq",3);
  if (cVar5 != '\0') {
    bVar7 = lVar6 == local_50 && uVar1 == local_58;
    goto LAB_0015947c;
  }
  cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                    (local_70,local_68,"-ne",3);
  if (cVar5 != '\0') {
    bVar7 = lVar6 != local_50 || uVar1 != local_58;
    goto LAB_0015947c;
  }
  cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                    (local_70,local_68,"-gt",3);
  if (cVar5 == '\0') {
    cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                      (local_70,local_68,"-ge",3);
    if (cVar5 == '\0') {
      cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                        (local_70,local_68,"-lt",3);
      if (cVar5 != '\0') {
        bVar7 = SBORROW8(lVar6,local_50) != SBORROW8(lVar6 - local_50,(ulong)(uVar1 < local_58));
        lVar6 = (lVar6 - local_50) - (ulong)(uVar1 < local_58);
        goto LAB_0015944f;
      }
      cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he9763320142bec48E
                        (local_70,local_68,"-le",3);
      if (cVar5 == '\0') goto LAB_00159385;
      bVar7 = SBORROW8(local_50,lVar6) != SBORROW8(local_50 - lVar6,(ulong)(local_58 < uVar1));
      lVar6 = (local_50 - lVar6) - (ulong)(local_58 < uVar1);
    }
    else {
      bVar7 = SBORROW8(lVar6,local_50) != SBORROW8(lVar6 - local_50,(ulong)(uVar1 < local_58));
      lVar6 = (lVar6 - local_50) - (ulong)(uVar1 < local_58);
    }
    bVar7 = bVar7 == lVar6 < 0;
  }
  else {
    bVar7 = SBORROW8(local_50,lVar6) != SBORROW8(local_50 - lVar6,(ulong)(local_58 < uVar1));
    lVar6 = (local_50 - lVar6) - (ulong)(local_58 < uVar1);
LAB_0015944f:
    bVar7 = bVar7 != lVar6 < 0;
  }
LAB_0015947c:
  *(bool *)(param_1 + 1) = bVar7;
  *param_1 = 7;
  return;
}