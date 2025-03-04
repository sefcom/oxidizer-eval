undefined8
_ZN5uu_dd24flush_caches_full_length17h852ee23a16d52f1fE(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined auVar2 [16];
  
  lVar1 = *(long *)(param_1 + 2);
  if (*(char *)(lVar1 + 0x45) != '\0') {
    auVar2 = _ZN5uu_dd6Source3len17hc3b1b96fe0850bcfE();
    if (auVar2._0_8_ != 0) {
      return auVar2._8_8_;
    }
    _ZN5uu_dd5Input13discard_cache17h2bede2b9be5bf459E(*param_1,param_1[1],0);
  }
  if (*(char *)(lVar1 + 0x9c) != '\0') {
    auVar2 = _ZN5uu_dd4Dest3len17hc5f67b7ac477ff9eE(param_2);
    if (auVar2._0_8_ != 0) {
      return auVar2._8_8_;
    }
    _ZN5uu_dd6Output13discard_cache17h9654de1740a6c207E(param_2,0,auVar2._8_8_);
  }
  return 0;
}