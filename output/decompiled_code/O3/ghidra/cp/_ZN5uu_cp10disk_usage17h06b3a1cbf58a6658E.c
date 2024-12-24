undefined  [16] __rustcall uu_cp::disk_usage(long param_1,long param_2,char param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  long local_e8;
  long local_e0;
  int local_d8 [2];
  long local_d0;
  uint local_a0;
  long local_88;
  
  local_e0 = param_1 + param_2 * 0x18;
  local_e8 = param_1;
  lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_e8);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else if (param_3 == '\0') {
    lVar3 = 0;
    do {
      std::fs::metadata(local_d8,lVar1);
      lVar4 = local_d0;
      if (local_d8[0] == 2) goto LAB_002080fd;
      lVar1 = local_88;
      if ((local_a0 & 0xf000) == 0x4000) {
        lVar1 = 0;
      }
      lVar3 = lVar3 + lVar1;
      lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_e8);
    } while (lVar1 != 0);
  }
  else {
    lVar3 = 0;
    do {
      std::fs::metadata(local_d8,lVar1);
      lVar4 = local_d0;
      if (local_d8[0] == 2) goto LAB_002080fd;
      lVar4 = local_88;
      if ((local_a0 & 0xf000) == 0x4000) {
        auVar5 = disk_usage_directory(*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
        lVar4 = auVar5._8_8_;
        if (auVar5._0_8_ != 0) goto LAB_002080fd;
      }
      lVar3 = lVar3 + lVar4;
      lVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_e8);
    } while (lVar1 != 0);
  }
  uVar2 = 0;
  lVar4 = lVar3;
LAB_00208102:
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
LAB_002080fd:
  uVar2 = 1;
  goto LAB_00208102;
}