undefined * __rustcall
uu_dd::Output::new_file(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 local_54;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  long local_40 [2];
  
  new_file::open_dst(local_40,param_2,param_3,*(undefined *)(param_4 + 0x91),
                     *(undefined *)(param_4 + 0x92),param_4 + 0x96);
  _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
  ::map_err_context(&local_50,local_40,param_2,param_3);
  if (local_50 == 0) {
    local_54 = local_48;
    if (*(char *)(param_4 + 0x93) == '\0') {
                    /* try { // try from 001d77c5 to 001d77e3 has its CatchHandler @ 001d7807 */
      local_40[0] = std::fs::File::set_len(&local_54,*(undefined8 *)(param_4 + 0x88));
      if (local_40[0] != 0) {
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(local_40);
        local_48 = local_54;
      }
    }
    prepare_file(param_1,local_48,param_4);
  }
  else {
    *(long *)(param_1 + 8) = local_50;
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_44,local_48);
    *param_1 = 4;
  }
  return param_1;
}