undefined  [16]
_ZN11uu_unexpand12next_tabstop17h080f73c87180f742E
          (ulong *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  ulong local_20;
  ulong *local_18;
  ulong *local_10;
  
  local_20 = param_3;
  if (param_2 == 1) {
    uVar1 = *param_1;
    if (uVar1 == 0) {
      (*(code *)
        PTR__ZN4core9panicking11panic_const23panic_const_rem_by_zero17hedb898bfe2cd5907E_001eebd8)
                (&PTR_s_src_uu_unexpand_src_unexpand_rs_001e82f8);
      pcVar2 = (code *)swi(3);
      auVar6 = (*pcVar2)();
      return auVar6;
    }
    if ((param_3 | uVar1) >> 0x20 == 0) {
      param_3 = (param_3 & 0xffffffff) % (uVar1 & 0xffffffff);
    }
    else {
      param_3 = param_3 % uVar1;
    }
    lVar4 = uVar1 - param_3;
  }
  else {
    local_10 = param_1 + param_2;
    local_18 = param_1;
    plVar3 = (long *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4find17hbb310f0c725f7a84E
                               (&local_18,&local_20);
    if (plVar3 == (long *)0x0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = param_4;
      return auVar6 << 0x40;
    }
    lVar4 = *plVar3 - param_3;
  }
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = 1;
  return auVar5;
}