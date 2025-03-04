long _ZN6uu_fmt9linebreak9BreakArgs13compute_width17hfc2bd23d7c87d18bE
               (long param_1,long *param_2,long param_3,int param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_4 != 0) {
    return 0;
  }
  lVar4 = param_2[6];
  if (*param_2 != 0) {
    uVar1 = *(ulong *)(param_1 + 0x40);
    if (uVar1 == 0) {
      _ZN4core9panicking11panic_const23panic_const_div_by_zero17haded503194f0bf6eE
                (&PTR_s_src_uu_fmt_src_linebreak_rs_00226810);
      pcVar2 = (code *)swi(3);
      lVar4 = (*pcVar2)();
      return lVar4;
    }
    uVar3 = param_2[1] + param_3;
    if ((uVar3 | uVar1) >> 0x20 == 0) {
      uVar3 = (uVar3 & 0xffffffff) / (uVar1 & 0xffffffff);
    }
    else {
      uVar3 = uVar3 / uVar1;
    }
    lVar4 = (lVar4 - param_3) + (uVar3 + 1) * uVar1;
  }
  return lVar4;
}