undefined8 * __rustcall uu_tail::paths::Input::from(undefined8 *param_1,undefined8 param_2)

{
  undefined auVar1 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  auVar1 = _<&T_as_core::convert::AsRef<U>>::as_ref(param_2);
  _<uu_tail::paths::InputKind_as_core::convert::From<&std::ffi::os_str::OsStr>>::from
            (&local_30,auVar1._0_8_);
  if (local_30 == -0x8000000000000000) {
                    /* try { // try from 00210f88 to 00210fc4 has its CatchHandler @ 00211022 */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_60,"standard input",0xe);
    local_38 = local_50;
    local_48 = local_60;
    uStack_40 = uStack_58;
  }
  else {
    std::sys::os_str::bytes::Slice::to_string_lossy(&local_60,auVar1._0_8_,auVar1._8_8_);
                    /* try { // try from 00210fcf to 00210fd8 has its CatchHandler @ 00211013 */
    _<alloc::borrow::Cow<str>as_alloc::string::ToString>::to_string(&local_48,uStack_58,local_50);
                    /* try { // try from 00210fd9 to 00210fe2 has its CatchHandler @ 00211022 */
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_60);
  }
  param_1[5] = local_20;
  param_1[3] = local_30;
  param_1[4] = uStack_28;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[2] = local_38;
  return param_1;
}