undefined4 __rustcall uu_ls::is_hidden(undefined8 param_1)

{
  undefined4 uVar1;
  undefined auVar2 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  std::fs::DirEntry::file_name(local_28,param_1);
                    /* try { // try from 00227cdf to 00227d27 has its CatchHandler @ 00227d3e */
  std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
            (&local_40,local_20,local_18);
  if (CONCAT44(uStack_3c,local_40) == 0) {
    local_40 = 0;
    auVar2 = core::char::methods::encode_utf8_raw(0x2e,&local_40);
    uVar1 = core::slice::_<impl[T]>::starts_with(local_38,local_30,auVar2._0_8_,auVar2._8_8_);
  }
  else {
    uVar1 = 0;
  }
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(local_28);
  return uVar1;
}