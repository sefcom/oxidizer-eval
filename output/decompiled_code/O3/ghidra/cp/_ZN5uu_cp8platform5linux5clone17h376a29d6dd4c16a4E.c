ulong __rustcall
uu_cp::platform::linux::clone
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined param_5)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  ulong local_20;
  
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  std::fs::File::open(&local_28,&local_48);
  uVar1 = local_24;
  if (local_28 == 0) {
                    /* try { // try from 002122c0 to 002122ce has its CatchHandler @ 002123ad */
    std::fs::File::create(&local_28,&local_38);
    if (local_28 == 0) {
      iVar2 = (*(code *)PTR_ioctl_002bb978)(local_24,0x40049409,uVar1);
      if (iVar2 == 0) {
        core::ptr::drop_in_place<std::fs::File>(local_24);
        local_20 = 0;
      }
      else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(param_5) {
        case 0:
                    /* try { // try from 0021230d to 0021237c has its CatchHandler @ 002123a1 */
          lVar3 = std::sys::pal::unix::os::errno();
          uVar4 = lVar3 << 0x20 | 2;
          break;
        case 1:
          auVar5 = std::fs::copy(local_48,local_40,local_38,local_30);
          uVar4 = auVar5._8_8_;
          if (auVar5._0_8_ == 0) {
            uVar4 = 0;
          }
          break;
        case 2:
          uVar4 = sparse_copy(local_48,local_40,local_38,local_30);
          break;
        case 3:
          uVar4 = sparse_copy_without_hole(local_48,local_40,local_38,local_30);
        }
        core::ptr::drop_in_place<std::fs::File>(local_24);
        local_20 = uVar4;
      }
    }
    core::ptr::drop_in_place<std::fs::File>(uVar1);
  }
  return local_20;
}