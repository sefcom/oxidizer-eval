undefined8 * __rustcall uu_mktemp::exec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  char param_9;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (param_9 == '\0') {
    make_temp_file(&local_68,param_2,param_3);
  }
  else {
    make_temp_dir(&local_68,param_2,param_3);
  }
  if (local_68 != -0x8000000000000000) {
    local_50 = local_68;
    local_48 = local_60;
    local_40 = local_58;
                    /* try { // try from 001bff79 to 001bffb0 has its CatchHandler @ 001bfff1 */
    lVar1 = std::path::Path::file_name();
    if (lVar1 == 0) {
      ppuVar3 = &PTR_DAT_002363a0;
    }
    else {
      std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
                (&local_68,lVar1);
      if (local_68 == 0) {
        std::path::Path::join(&local_38,param_2,param_3,local_60,local_58);
        param_1[2] = local_28;
        *(undefined4 *)param_1 = local_38;
        *(undefined4 *)((long)param_1 + 4) = uStack_34;
        *(undefined4 *)(param_1 + 1) = uStack_30;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_2c;
        core::ptr::drop_in_place<std::path::PathBuf>(&local_50);
        return param_1;
      }
      ppuVar3 = &PTR_DAT_002363b8;
    }
                    /* try { // try from 001bffeb to 001bfff0 has its CatchHandler @ 001bfff1 */
    uVar2 = core::option::unwrap_failed(ppuVar3);
                    /* catch() { ... } // from try @ 001bff79 with catch @ 001bfff1
                       catch() { ... } // from try @ 001bffeb with catch @ 001bfff1 */
                    /* try { // try from 001bfff4 to 001bfffd has its CatchHandler @ 001c0006 */
    core::ptr::drop_in_place<std::path::PathBuf>(&local_50);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar2);
  }
  param_1[1] = local_60;
  param_1[2] = local_58;
  *param_1 = 0x8000000000000000;
  return param_1;
}