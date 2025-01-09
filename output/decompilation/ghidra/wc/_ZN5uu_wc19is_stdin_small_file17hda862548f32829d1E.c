ulong __rustcall uu_wc::is_stdin_small_file(void)

{
  undefined8 unaff_RBX;
  ulong uVar1;
  undefined4 local_bc;
  long local_b8;
  undefined8 local_b0;
  uint local_80;
  ulong local_68;
  
  std::io::stdio::stdin();
  local_bc = 0;
  std::fs::File::metadata(&local_b8,&local_bc);
  if (local_b8 == 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulong)unaff_RBX >> 8),
                     local_68 < 0xa00001 && (local_80 & 0xf000) == 0x8000);
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
            (local_b8,local_b0);
  return uVar1 & 0xffffffff;
}