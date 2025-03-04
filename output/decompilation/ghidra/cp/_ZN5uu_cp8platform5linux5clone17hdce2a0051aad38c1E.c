ulong _ZN5uu_cp8platform5linux5clone17hdce2a0051aad38c1E
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined param_5)

{
  int __fd;
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined auVar4 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  ulong local_20;
  
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_30 = param_4;
  _ZN3std2fs4File4open17h9d5fc688c698f3f4E(&local_28,&local_48);
  __fd = local_24;
  if (local_28 == 0) {
                    /* try { // try from 00212c80 to 00212c8e has its CatchHandler @ 00212d6d */
    _ZN3std2fs4File6create17h9e6a42a7892f8117E(&local_28,&local_38);
    if (local_28 == 0) {
      iVar1 = (*(code *)PTR_ioctl_002bc0b0)(local_24,0x40049409,__fd);
      if (iVar1 == 0) {
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(local_24);
        local_20 = 0;
      }
      else {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(param_5) {
        case 0:
                    /* try { // try from 00212ccd to 00212d3c has its CatchHandler @ 00212d61 */
          lVar2 = _ZN3std3sys3pal4unix2os5errno17hddfd8da9c36b1a59E();
          uVar3 = lVar2 << 0x20 | 2;
          break;
        case 1:
          auVar4 = _ZN3std2fs4copy17h82e95226cca79e6aE(local_48,local_40,local_38,local_30);
          uVar3 = auVar4._8_8_;
          if (auVar4._0_8_ == 0) {
            uVar3 = 0;
          }
          break;
        case 2:
          uVar3 = _ZN5uu_cp8platform5linux11sparse_copy17ha5f85eebd4c718f5E
                            (local_48,local_40,local_38,local_30);
          break;
        case 3:
          uVar3 = _ZN5uu_cp8platform5linux24sparse_copy_without_hole17h5128473705372174E
                            (local_48,local_40,local_38,local_30);
        }
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(local_24);
        local_20 = uVar3;
      }
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(__fd);
  }
  return local_20;
}