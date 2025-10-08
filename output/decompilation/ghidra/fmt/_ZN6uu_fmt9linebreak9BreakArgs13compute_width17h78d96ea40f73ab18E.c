long _ZN6uu_fmt9linebreak9BreakArgs13compute_width17h78d96ea40f73ab18E
               (long param_1,int *param_2,long param_3,int param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_4 != 0) {
    return 0;
  }
  lVar4 = *(long *)(param_2 + 0xc);
  if (*param_2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x40);
    if (uVar1 == 0) {
      (*(code *)
        PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_001f7090)
                (&PTR_s_src_uu_fmt_src_linebreak_rs_001f02f0);
      pcVar2 = (code *)swi(3);
      lVar4 = (*pcVar2)();
      return lVar4;
    }
    uVar3 = *(long *)(param_2 + 2) + param_3;
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