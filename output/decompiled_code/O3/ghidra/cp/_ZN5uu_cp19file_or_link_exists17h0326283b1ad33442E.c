ulong __rustcall uu_cp::file_or_link_exists(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_RBP;
  int local_c0 [44];
  
  std::fs::symlink_metadata(local_c0,param_1,param_2);
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(local_c0);
  return CONCAT71((int7)((ulong)unaff_RBP >> 8),local_c0[0] != 2) & 0xffffffff;
}