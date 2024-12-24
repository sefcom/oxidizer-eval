ulong __rustcall uu_dd::is_stdout_redirected_to_seekable_file(void)

{
  long lVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined4 local_4c;
  undefined local_48 [16];
  int local_38;
  undefined4 local_34;
  undefined local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  stdout_canonicalized(local_28);
                    /* try { // try from 001d8f9a to 001d8fa3 has its CatchHandler @ 001d9087 */
  std::fs::File::open(&local_38,local_20,local_18);
  if (local_38 != 0) {
    uVar2 = 0;
    goto LAB_001d9025;
  }
  local_4c = local_34;
                    /* try { // try from 001d8fb8 to 001d9019 has its CatchHandler @ 001d9096 */
  local_48 = _<std::fs::File_as_std::io::Seek>::seek(&local_4c,2,0);
  if (local_48._0_8_ == 0) {
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(local_48);
    auVar3 = _<std::fs::File_as_std::io::Seek>::seek(&local_4c,1,0);
    local_48 = auVar3;
    if (auVar3._0_8_ != 0) {
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(local_48);
      goto LAB_001d901a;
    }
                    /* try { // try from 001d9046 to 001d906b has its CatchHandler @ 001d9096 */
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(local_48);
    lVar1 = std::io::Seek::rewind(&local_4c);
    local_48._0_8_ = lVar1;
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(local_48);
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),lVar1 == 0);
  }
  else {
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(local_48);
LAB_001d901a:
    uVar2 = 0;
  }
  core::ptr::drop_in_place<std::fs::File>(local_4c);
LAB_001d9025:
                    /* try { // try from 001d9025 to 001d902e has its CatchHandler @ 001d9074 */
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(local_28);
  if (local_38 != 0) {
    core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&local_38);
  }
  return uVar2 & 0xffffffff;
}