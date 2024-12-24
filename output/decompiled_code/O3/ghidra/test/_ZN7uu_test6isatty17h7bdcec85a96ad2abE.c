void __rustcall uu_test::isatty(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  
  std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
            (&local_50);
  if ((local_50 == 0) &&
     (uVar2 = core::num::_<impl_core::str::traits::FromStr_for_i32>::from_str(local_48,local_40),
     (uVar2 & 1) == 0)) {
    iVar1 = (*(code *)PTR_isatty_00218748)(uVar2 >> 0x20);
    *(bool *)(param_1 + 1) = iVar1 == 1;
    *param_1 = 7;
    return;
  }
  local_50 = 1;
  local_38 = 1;
  local_48 = param_2;
  local_40 = param_3;
  _<T_as_alloc::string::ToString>::to_string(&local_30,&local_50);
  *(undefined4 *)((long)param_1 + 0x1c) = local_1c;
  *(undefined8 *)((long)param_1 + 0xc) = local_2c;
  *(undefined8 *)((long)param_1 + 0x14) = uStack_24;
  *param_1 = 5;
  *(undefined4 *)(param_1 + 1) = local_30;
  return;
}