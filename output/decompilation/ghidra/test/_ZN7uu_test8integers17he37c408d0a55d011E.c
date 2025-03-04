void _ZN7uu_test8integers17he37c408d0a55d011E
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
  long local_78;
  undefined8 local_70;
  ulong local_68;
  undefined local_60;
  undefined7 uStack_5f;
  ulong local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
            (&local_78);
  uVar3 = param_2;
  uVar4 = param_3;
  if (local_78 != 0) {
LAB_001aceab:
    local_68 = uVar4;
    local_70 = uVar3;
    local_78 = 1;
    local_60 = 1;
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h0530b763d48a6791E
              (&local_48,&local_78);
    *param_1 = 5;
    param_1[1] = local_48;
    param_1[2] = uStack_40;
    param_1[3] = local_38;
    return;
  }
  _ZN4core3num61__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_i128_GT_8from_str17hc8dce56db4b142c5E
            (&local_78,local_70,local_68);
  uVar1 = local_68;
  uVar3 = param_2;
  uVar4 = param_3;
  if ((char)local_78 != '\0') goto LAB_001aceab;
  lVar6 = CONCAT71(uStack_5f,local_60);
  _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
            (&local_78,param_4,param_5);
  uVar3 = param_4;
  uVar4 = param_5;
  if (local_78 != 0) goto LAB_001aceab;
  _ZN4core3num61__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_i128_GT_8from_str17hc8dce56db4b142c5E
            (&local_78,local_70,local_68);
  uVar2 = local_68;
  uVar3 = param_4;
  uVar4 = param_5;
  if ((char)local_78 != '\0') goto LAB_001aceab;
  _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
            (&local_78,param_6,param_7);
  if (local_78 != 0) {
LAB_001acf5a:
    local_78 = 1;
    local_68 = param_7;
    local_60 = 1;
    local_70 = param_6;
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h0530b763d48a6791E
              (param_1 + 1,&local_78);
    *param_1 = 4;
    return;
  }
  local_58 = uVar2;
  local_50 = CONCAT71(uStack_5f,local_60);
  cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                    (local_70,local_68,&DAT_0011d0f1,3);
  if (cVar5 != '\0') {
    bVar7 = lVar6 == local_50 && uVar1 == local_58;
    goto LAB_001ad051;
  }
  cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                    (local_70,local_68,&DAT_0011d0f4,3);
  if (cVar5 != '\0') {
    bVar7 = lVar6 != local_50 || uVar1 != local_58;
    goto LAB_001ad051;
  }
  cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                    (local_70,local_68,&DAT_0011d0f7,3);
  if (cVar5 == '\0') {
    cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                      (local_70,local_68,&DAT_0011d0fa,3);
    if (cVar5 == '\0') {
      cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                        (local_70,local_68,&DAT_0011d0fd,3);
      if (cVar5 != '\0') {
        bVar7 = SBORROW8(lVar6,local_50) != SBORROW8(lVar6 - local_50,(ulong)(uVar1 < local_58));
        lVar6 = (lVar6 - local_50) - (ulong)(uVar1 < local_58);
        goto LAB_001ad024;
      }
      cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h63b5f1612d3f588eE
                        (local_70,local_68,&DAT_0011d100,3);
      if (cVar5 == '\0') goto LAB_001acf5a;
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
LAB_001ad024:
    bVar7 = bVar7 != lVar6 < 0;
  }
LAB_001ad051:
  *(bool *)(param_1 + 1) = bVar7;
  *param_1 = 7;
  return;
}