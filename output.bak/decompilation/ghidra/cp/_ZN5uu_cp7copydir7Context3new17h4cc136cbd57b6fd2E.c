void __rustcall
uu_cp::copydir::Context::new(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long local_128;
  long lStack_120;
  long local_118;
  long local_110;
  long local_108;
  long lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e0;
  long local_d8;
  long lStack_d0;
  
  std::env::current_dir(&local_e0);
  if (local_e0 == -0x8000000000000000) {
    param_1[1] = local_d8;
    *param_1 = -0x8000000000000000;
  }
  else {
    local_128 = local_e0;
    lStack_120 = local_d8;
    local_118 = lStack_d0;
                    /* try { // try from 0020db33 to 0020db42 has its CatchHandler @ 0020dc6c */
    std::path::Path::join(&local_110,local_d8,lStack_d0,param_2,param_3);
                    /* try { // try from 0020db43 to 0020dc06 has its CatchHandler @ 0020dc71 */
    std::fs::metadata(&local_e0,param_4,param_5);
    if (local_e0 == 2) {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (2,local_d8);
    }
    else {
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (local_e0,local_d8);
      std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
                (&local_e0,param_2,param_3);
      if (local_e0 != 0) {
                    /* try { // try from 0020dc5f to 0020dc6b has its CatchHandler @ 0020dc71 */
        uVar3 = core::option::unwrap_failed(&PTR_s_src_uu_cp_src_copydir_rs_002b6288);
                    /* catch() { ... } // from try @ 0020db33 with catch @ 0020dc6c */
        core::ptr::drop_in_place<std::path::PathBuf>(&local_128);
        _Unwind_Resume(uVar3);
        return;
      }
      cVar1 = core::slice::_<impl[T]>::ends_with(local_d8,lStack_d0,"/.",2);
      if (cVar1 == '\0') {
        lVar2 = std::path::Path::parent(local_108,lStack_100);
        lVar4 = -0x8000000000000000;
        if (lVar2 != 0) {
          std::sys::pal::unix::os::split_paths::bytes_to_path(&local_e0,lVar2);
          local_f8 = local_d8;
          uStack_f0 = lStack_d0;
          lVar4 = local_e0;
        }
        param_1[2] = local_118;
        *param_1 = local_128;
        param_1[1] = lStack_120;
        param_1[3] = lVar4;
        *(undefined4 *)(param_1 + 4) = (undefined4)local_f8;
        *(undefined4 *)((long)param_1 + 0x24) = local_f8._4_4_;
        *(undefined4 *)(param_1 + 5) = (undefined4)uStack_f0;
        *(undefined4 *)((long)param_1 + 0x2c) = uStack_f0._4_4_;
        param_1[6] = param_4;
        param_1[7] = param_5;
        param_1[8] = param_2;
        param_1[9] = param_3;
        core::ptr::drop_in_place<std::path::PathBuf>(&local_110);
        return;
      }
    }
    param_1[2] = local_118;
    *param_1 = local_128;
    param_1[1] = lStack_120;
    param_1[3] = local_110;
    param_1[4] = local_108;
    param_1[5] = lStack_100;
    param_1[6] = param_4;
    param_1[7] = param_5;
    param_1[8] = param_2;
    param_1[9] = param_3;
  }
  return;
}