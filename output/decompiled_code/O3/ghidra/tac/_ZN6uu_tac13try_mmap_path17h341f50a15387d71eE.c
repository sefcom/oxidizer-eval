void __rustcall uu_tac::try_mmap_path(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined local_30;
  undefined2 local_2e;
  long local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  std::fs::File::open(&local_48);
  if ((int)local_48 == 0) {
    uVar1 = local_48._4_4_;
    local_4c = local_48._4_4_;
    local_38 = 0;
    local_48 = 0;
    local_30 = 0;
    local_2e = 0;
                    /* try { // try from 002a0513 to 002a0538 has its CatchHandler @ 002a0564 */
    memmap2::MmapOptions::map(&local_28,&local_48,&local_4c);
    if (local_28 == 0) {
      *(undefined4 *)(param_1 + 1) = local_20;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_1c;
      *(undefined4 *)(param_1 + 2) = uStack_18;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_14;
      *param_1 = 1;
    }
    else {
      core::ptr::drop_in_place<core::result::Result<memmap2::Mmap,std::io::error::Error>>(&local_28)
      ;
      *param_1 = 0;
      uVar1 = local_4c;
    }
    core::ptr::drop_in_place<std::fs::File>(uVar1);
  }
  else {
    core::ptr::drop_in_place<core::result::Result<std::fs::File,std::io::error::Error>>(&local_48);
    *param_1 = 0;
  }
  return;
}