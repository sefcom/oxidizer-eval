void __rustcall
uu_test::integers(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
            (&local_78);
  uVar3 = param_2;
  uVar4 = param_3;
  if (local_78 != 0) {
LAB_001ad03b:
    local_68 = uVar4;
    local_70 = uVar3;
    local_78 = 1;
    local_60 = 1;
    _<T_as_alloc::string::ToString>::to_string(&local_48,&local_78);
    *param_1 = 5;
    param_1[1] = local_48;
    param_1[2] = uStack_40;
    param_1[3] = local_38;
    return;
  }
  core::num::_<impl_core::str::traits::FromStr_for_i128>::from_str(&local_78,local_70,local_68);
  uVar1 = local_68;
  uVar3 = param_2;
  uVar4 = param_3;
  if ((char)local_78 != '\0') goto LAB_001ad03b;
  lVar6 = CONCAT71(uStack_5f,local_60);
  std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
            (&local_78,param_4,param_5);
  uVar3 = param_4;
  uVar4 = param_5;
  if (local_78 != 0) goto LAB_001ad03b;
  core::num::_<impl_core::str::traits::FromStr_for_i128>::from_str(&local_78,local_70,local_68);
  uVar2 = local_68;
  uVar3 = param_4;
  uVar4 = param_5;
  if ((char)local_78 != '\0') goto LAB_001ad03b;
  std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
            (&local_78,param_6,param_7);
  if (local_78 != 0) {
LAB_001ad0ea:
    local_78 = 1;
    local_68 = param_7;
    local_60 = 1;
    local_70 = param_6;
    _<T_as_alloc::string::ToString>::to_string(param_1 + 1,&local_78);
    *param_1 = 4;
    return;
  }
  local_58 = uVar2;
  local_50 = CONCAT71(uStack_5f,local_60);
  cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_70,local_68,&DAT_0011d171,3);
  if (cVar5 != '\0') {
    bVar7 = lVar6 == local_50 && uVar1 == local_58;
    goto LAB_001ad1e1;
  }
  cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_70,local_68,&DAT_0011d174,3);
  if (cVar5 != '\0') {
    bVar7 = lVar6 != local_50 || uVar1 != local_58;
    goto LAB_001ad1e1;
  }
  cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_70,local_68,&DAT_0011d177,3);
  if (cVar5 == '\0') {
    cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_70,local_68,&DAT_0011d17a,3);
    if (cVar5 == '\0') {
      cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_70,local_68,&DAT_0011d17d,3)
      ;
      if (cVar5 != '\0') {
        bVar7 = SBORROW8(lVar6,local_50) != SBORROW8(lVar6 - local_50,(ulong)(uVar1 < local_58));
        lVar6 = (lVar6 - local_50) - (ulong)(uVar1 < local_58);
        goto LAB_001ad1b4;
      }
      cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_70,local_68,&DAT_0011d180,3)
      ;
      if (cVar5 == '\0') goto LAB_001ad0ea;
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
LAB_001ad1b4:
    bVar7 = bVar7 != lVar6 < 0;
  }
LAB_001ad1e1:
  *(bool *)(param_1 + 1) = bVar7;
  *param_1 = 7;
  return;
}