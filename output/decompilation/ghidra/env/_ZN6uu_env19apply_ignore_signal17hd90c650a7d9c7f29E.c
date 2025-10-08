undefined  [16] _ZN6uu_env19apply_ignore_signal17hd90c650a7d9c7f29E(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  lVar1 = *(long *)(param_1 + 0x68);
  lVar2 = *(long *)(param_1 + 0x70);
  lVar4 = 0;
  do {
    lVar3 = 0;
    if (lVar2 << 3 == lVar4) break;
    auVar5 = _ZN78__LT_nix__sys__signal__Signal_u20_as_u20_core__convert__TryFrom_LT_i32_GT__GT_8try_from17h9a35f89cbe212992E
                       (*(undefined4 *)(lVar1 + lVar4));
    if ((auVar5 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      auVar5._0_8_ = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbad3cb5039bc98ddE(&stack0xffffffffffffffe0)
      ;
      auVar5._8_8_ = &
                     PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h700d3e94e2b313d5E_002125e8
      ;
      return auVar5;
    }
    lVar3 = _ZN6uu_env13ignore_signal17hd22c2b126fd57d37E(auVar5._8_8_ & 0xffffffff);
    lVar4 = lVar4 + 8;
  } while (lVar3 == 0);
  auVar6._8_8_ = &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h60677b330daa6f59E_002108a8
  ;
  auVar6._0_8_ = lVar3;
  return auVar6;
}