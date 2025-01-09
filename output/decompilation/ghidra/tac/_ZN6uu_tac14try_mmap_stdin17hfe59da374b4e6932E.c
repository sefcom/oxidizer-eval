void __rustcall uu_tac::try_mmap_stdin(undefined8 *param_1)

{
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28 [2];
  undefined8 local_18;
  undefined local_10;
  undefined2 local_e;
  
  local_48 = std::io::stdio::stdin();
  local_18 = 0;
  local_28[0] = 0;
  local_10 = 0;
  local_e = 0;
  memmap2::MmapOptions::map(&local_40,local_28,&local_48);
  if (local_40 == 0) {
    param_1[1] = local_38;
    param_1[2] = uStack_30;
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
    core::ptr::drop_in_place<core::result::Result<memmap2::Mmap,std::io::error::Error>>(&local_40);
  }
  return;
}