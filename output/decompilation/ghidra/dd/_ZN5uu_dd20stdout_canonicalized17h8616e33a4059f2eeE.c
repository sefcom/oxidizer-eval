void __rustcall uu_dd::stdout_canonicalized(long *param_1)

{
  long local_38;
  long lStack_30;
  long local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  long local_10;
  
  std::fs::canonicalize(&local_38,&DAT_00123e07,0xb);
  if (local_38 == -0x8000000000000000) {
                    /* try { // try from 001d8dbc to 001d8dd2 has its CatchHandler @ 001d8e04 */
    std::sys::os_str::bytes::Slice::to_owned(&local_20,&DAT_00123e07,0xb);
    param_1[2] = local_10;
    *(undefined4 *)param_1 = local_20;
    *(undefined4 *)((long)param_1 + 4) = uStack_1c;
    *(undefined4 *)(param_1 + 1) = uStack_18;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_14;
    core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>
              (&local_38);
  }
  else {
    param_1[2] = local_28;
    *param_1 = local_38;
    param_1[1] = lStack_30;
  }
  return;
}