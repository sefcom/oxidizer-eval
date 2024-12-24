undefined8 __rustcall uu_test::path(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  int local_188 [90];
  
  if (param_3 == 8) {
    std::fs::symlink_metadata();
  }
  else {
    std::fs::metadata(local_188,param_1,param_2);
  }
  if (local_188[0] != 2) {
                    /* WARNING: Could not recover jumptable at 0x001ad7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_0011c3d8 + *(int *)(&DAT_0011c3d8 + (ulong)param_3 * 4)))();
    return uVar1;
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(local_188)
  ;
  return 0;
}