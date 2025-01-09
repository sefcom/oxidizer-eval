void __rustcall
uu_realpath::canonicalize_relative_option
          (long *param_1,long *param_2,undefined param_3,undefined param_4)

{
  long unaff_R12;
  long unaff_R15;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  long local_58;
  long local_50;
  long local_48;
  undefined local_40 [24];
  
  if (*param_2 == -0x8000000000000000) {
    local_58 = -0x8000000000000000;
  }
  else {
    local_68 = param_2[2];
    local_78 = *(undefined4 *)param_2;
    uStack_74 = *(undefined4 *)((long)param_2 + 4);
    uStack_70 = *(undefined4 *)(param_2 + 1);
    uStack_6c = *(undefined4 *)((long)param_2 + 0xc);
                    /* try { // try from 001b6769 to 001b6792 has its CatchHandler @ 001b67e0 */
    canonicalize_relative(local_40,param_2[1],local_68,param_3,param_4);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_58,local_40,&local_78);
    if (local_58 == -0x8000000000000000) {
      param_1[1] = local_50;
      param_1[2] = local_48;
      *param_1 = -0x7fffffffffffffff;
      core::ptr::drop_in_place<std::path::PathBuf>(&local_78);
      return;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&local_78);
    unaff_R12 = local_48;
    unaff_R15 = local_50;
  }
  *param_1 = local_58;
  param_1[1] = unaff_R15;
  param_1[2] = unaff_R12;
  return;
}