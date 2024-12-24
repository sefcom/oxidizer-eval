void __rustcall uu_test::parser::Parser::expect(undefined8 *param_1)

{
  char cVar1;
  int local_70 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  next_token(local_70);
                    /* try { // try from 001aeec7 to 001aef36 has its CatchHandler @ 001aef74 */
  if ((local_70[0] == 3) &&
     (cVar1 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<&str>>::eq
                        (CONCAT44(uStack_5c,uStack_60),local_58), cVar1 != '\0')) {
    local_38 = local_58;
    local_48 = CONCAT44(uStack_64,local_68);
    uStack_40 = (char *)CONCAT44(uStack_5c,uStack_60);
    *param_1 = 7;
    core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_48);
    if (local_70[0] == 3) {
      return;
    }
  }
  else {
    local_48 = 0;
    uStack_40 = ")";
    local_38 = 1;
    local_30 = 1;
    _<T_as_alloc::string::ToString>::to_string(&local_28,&local_48);
    param_1[3] = local_18;
    *(undefined4 *)(param_1 + 1) = local_28;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_24;
    *(undefined4 *)(param_1 + 2) = uStack_20;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_1c;
    *param_1 = 1;
    if (local_70[0] == 3) {
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_68);
      return;
    }
  }
  core::ptr::drop_in_place<uu_test::parser::Symbol>(local_70);
  return;
}