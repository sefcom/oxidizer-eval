ulong __rustcall uu_cp::platform::linux::check_dest_is_fifo(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBX;
  long local_b8;
  undefined8 local_b0;
  uint local_80;
  
  std::fs::metadata(&local_b8,param_1,param_2);
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
            (local_b8,local_b0);
  return CONCAT71((int7)((ulong)unaff_RBX >> 8),(local_80 & 0xf000) == 0x1000 && local_b8 != 2) &
         0xffffffff;
}