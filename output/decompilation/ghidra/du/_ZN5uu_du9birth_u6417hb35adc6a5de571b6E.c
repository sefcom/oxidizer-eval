undefined8 __rustcall uu_du::birth_u64(undefined8 param_1)

{
  long local_28;
  int local_20;
  long local_10;
  int local_8;
  
  std::fs::Metadata::created(&local_28,param_1);
  if (local_20 == 1000000000) {
    core::ptr::drop_in_place<core::result::Result<std::time::SystemTime,std::io::error::Error>>
              (&local_28);
  }
  else {
    local_10 = local_28;
    local_8 = local_20;
    std::time::SystemTime::duration_since(&local_28,&local_10,0,0);
    if (local_28 == 0) {
      return 1;
    }
  }
  return 0;
}