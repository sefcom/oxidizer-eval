undefined  [16] _ZN5uu_cp10disk_usage17hb4f518c6ef29284aE(long param_1,long param_2,char param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined auVar4 [16];
  int local_e0 [2];
  long local_d8;
  uint local_a8;
  long local_90;
  
  if (param_2 == 0) {
    lVar3 = 0;
    uVar1 = 0;
  }
  else {
    param_2 = param_2 * 0x18;
    uVar1 = 0;
    lVar2 = 0;
    if (param_3 == '\0') {
      do {
        _ZN3std2fs8metadata17hfc8772c33100161dE(local_e0,param_1);
        if (local_e0[0] == 2) goto LAB_001a5775;
        lVar3 = 0;
        if ((local_a8 & 0xf000) != 0x4000) {
          lVar3 = local_90;
        }
        lVar2 = lVar2 + lVar3;
        param_1 = param_1 + 0x18;
        param_2 = param_2 + -0x18;
        lVar3 = lVar2;
      } while (param_2 != 0);
    }
    else {
      do {
        while( true ) {
          _ZN3std2fs8metadata17hfc8772c33100161dE(local_e0,param_1);
          if (local_e0[0] == 2) goto LAB_001a5775;
          if ((local_a8 & 0xf000) != 0x4000) break;
          auVar4 = _ZN5uu_cp20disk_usage_directory17h3351dc16d0087e4cE
                             (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
          lVar3 = auVar4._8_8_;
          if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
            uVar1 = 1;
            goto LAB_001a577f;
          }
          lVar3 = lVar2 + lVar3;
          param_1 = param_1 + 0x18;
          param_2 = param_2 + -0x18;
          lVar2 = lVar3;
          if (param_2 == 0) goto LAB_001a577f;
        }
        lVar3 = lVar2 + local_90;
        param_1 = param_1 + 0x18;
        param_2 = param_2 + -0x18;
        lVar2 = lVar3;
      } while (param_2 != 0);
    }
  }
LAB_001a577f:
  auVar4._8_8_ = lVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
LAB_001a5775:
  uVar1 = 1;
  lVar3 = local_d8;
  goto LAB_001a577f;
}