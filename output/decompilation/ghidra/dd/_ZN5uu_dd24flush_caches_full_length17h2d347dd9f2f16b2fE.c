undefined8
_ZN5uu_dd24flush_caches_full_length17h2d347dd9f2f16b2fE(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 2);
  if (*(char *)(lVar1 + 0x45) != '\0') {
    auVar2 = _ZN5uu_dd6Source3len17h6b19960d89696b06E();
    if ((auVar2 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      return auVar2._8_8_;
    }
    _ZN5uu_dd5Input13discard_cache17h505abcb6f4256ec2E(*param_1,param_1[1],0,auVar2._8_8_);
  }
  if (*(char *)(lVar1 + 0x9c) != '\0') {
    auVar2 = _ZN5uu_dd4Dest3len17h4b4a69914304b5d1E(param_2);
    if ((auVar2 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      return auVar2._8_8_;
    }
    _ZN5uu_dd6Output13discard_cache17h1b6c721cbbbead38E(*param_2,param_2[1],0,auVar2._8_8_);
  }
  return 0;
}