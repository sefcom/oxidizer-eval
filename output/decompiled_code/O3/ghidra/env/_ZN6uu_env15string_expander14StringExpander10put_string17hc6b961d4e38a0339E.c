void __rustcall uu_env::string_expander::StringExpander::put_string(undefined8 param_1,long param_2)

{
  undefined8 local_28;
  undefined local_20 [16];
  
  local_20 = _<std::ffi::os_str::OsString_as_core::convert::AsRef<std::ffi::os_str::OsStr>>::as_ref
                       (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  local_28 = 0x8000000000000000;
                    /* try { // try from 001d8c35 to 001d8c3f has its CatchHandler @ 001d8c5d */
  _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::
  spec_extend(param_1,local_20._0_8_,local_20._8_8_ + local_20._0_8_);
                    /* try { // try from 001d8c40 to 001d8c47 has its CatchHandler @ 001d8c58 */
  core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&local_28);
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(param_2);
  return;
}