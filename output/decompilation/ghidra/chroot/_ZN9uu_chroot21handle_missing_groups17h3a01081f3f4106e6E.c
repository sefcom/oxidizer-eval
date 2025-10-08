void _ZN9uu_chroot21handle_missing_groups17h3a01081f3f4106e6E(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  if ((param_2 & 1) != 0) {
    if ((param_2 & 0x100) == 0) {
      _ZN9uu_chroot17supplemental_gids17hf985b44dc073fbb6E(&local_28,param_2 >> 0x20);
      if (local_18 == 0) {
        *param_1 = 7;
        param_1[1] = (int)(param_2 >> 0x20);
      }
      else {
        lVar1 = _ZN9uu_chroot21set_supplemental_gids17h6e10f73cbbb1a6e6E(local_20);
        if (lVar1 == 0) {
          *param_1 = 0xe;
        }
        else {
          *param_1 = 0xc;
          *(long *)(param_1 + 2) = lVar1;
        }
      }
    }
    else {
      _ZN9uu_chroot17supplemental_gids17hf985b44dc073fbb6E(&local_28,param_2 >> 0x20);
      lVar1 = _ZN9uu_chroot21set_supplemental_gids17h6e10f73cbbb1a6e6E(local_20,local_18);
      if (lVar1 == 0) {
        *param_1 = 0xe;
      }
      else {
        *(long *)(param_1 + 2) = lVar1;
        *param_1 = 0xc;
      }
    }
    _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u32_GT__GT_17hd86db2e6974637b8E
              (local_28,local_20);
    return;
  }
  *param_1 = 0xe;
  return;
}