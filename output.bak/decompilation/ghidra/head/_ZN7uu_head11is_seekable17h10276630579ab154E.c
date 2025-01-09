ulong __rustcall uu_head::is_seekable(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined local_30 [16];
  undefined local_20 [16];
  
  local_20 = _<std::fs::File_as_std::io::Seek>::seek(param_1,2,0);
  uVar1 = local_20._8_8_;
  if (local_20._0_8_ == 0) {
                    /* try { // try from 001b9e76 to 001b9ea1 has its CatchHandler @ 001b9ef4 */
    local_30 = _<std::fs::File_as_std::io::Seek>::seek(param_1,1,0);
    if (local_30._0_8_ == 0) {
                    /* try { // try from 001b9eb8 to 001b9ec1 has its CatchHandler @ 001b9ef4 */
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(local_30);
      uVar1 = core::result::Result<T,E>::unwrap(uVar1);
      auVar3 = _<std::fs::File_as_std::io::Seek>::seek(param_1,0,uVar1);
      uVar2 = CONCAT71((int7)((ulong)param_1 >> 8),auVar3._0_8_ == 0);
      local_30 = auVar3;
      core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(local_30);
      goto LAB_001b9eae;
    }
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(local_30);
  }
  core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(local_20);
  uVar2 = 0;
LAB_001b9eae:
  return uVar2 & 0xffffffff;
}