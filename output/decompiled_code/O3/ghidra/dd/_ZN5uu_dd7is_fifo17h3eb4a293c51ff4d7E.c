undefined8 __rustcall uu_dd::is_fifo(undefined8 param_1,undefined8 param_2)

{
  int local_b0 [14];
  uint local_78;
  
  std::fs::metadata(local_b0,param_1,param_2);
  if ((local_b0[0] != 2) && ((local_78 & 0xf000) == 0x1000)) {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (local_b0);
    return 1;
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(local_b0);
  return 0;
}