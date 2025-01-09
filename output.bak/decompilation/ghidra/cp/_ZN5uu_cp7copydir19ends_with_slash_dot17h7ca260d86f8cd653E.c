undefined4 __rustcall uu_cp::copydir::ends_with_slash_dot(void)

{
  undefined4 uVar1;
  undefined local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined local_18 [16];
  
  local_18 = _<&T_as_core::convert::AsRef<U>>::as_ref();
  _<T_as_alloc::string::ToString>::to_string(local_30,local_18);
                    /* try { // try from 0020dfdd to 0020dfed has its CatchHandler @ 0020e002 */
  uVar1 = core::slice::_<impl[T]>::ends_with(local_28,local_20,"/.",2);
  core::ptr::drop_in_place<alloc::string::String>(local_30);
  return uVar1;
}