void __rustcall uu_pr::file_last_modified_time(undefined8 param_1)

{
  undefined8 local_d0;
  undefined8 local_c8;
  int local_b8 [2];
  undefined8 local_b0;
  
  std::fs::metadata(local_b8);
  if (local_b8[0] == 2) {
    local_c8 = local_b0;
    local_d0 = 0x8000000000000000;
  }
  else {
    file_last_modified_time::___closure__(&local_d0,local_b8);
  }
  core::result::Result<T,E>::unwrap_or_default(param_1,&local_d0);
  return;
}