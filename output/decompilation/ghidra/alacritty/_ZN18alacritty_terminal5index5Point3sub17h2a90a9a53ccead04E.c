void _ZN18alacritty_terminal5index5Point3sub17h2a90a9a53ccead04E
               (ulong param_1,int param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_3 + 0x90);
  if (uVar1 == 0) {
    (*(code *)
      PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_009de5b0)
              (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977c58);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = (param_4 + uVar1) - 1;
  uVar4 = 0;
  if (param_1 <= uVar5) {
    uVar4 = uVar5 - param_1;
  }
  if ((uVar4 | uVar1) >> 0x20 == 0) {
    iVar3 = (int)((uVar4 & 0xffffffff) / (uVar1 & 0xffffffff));
  }
  else {
    iVar3 = (int)(uVar4 / uVar1);
  }
  if ((param_4 | uVar1) >> 0x20 == 0) {
    param_4 = (param_4 & 0xffffffff) % (uVar1 & 0xffffffff);
  }
  else {
    param_4 = param_4 % uVar1;
  }
  param_4 = (param_1 + uVar1) - param_4;
  if ((param_4 | uVar1) >> 0x20 != 0) {
    _ZN18alacritty_terminal5index5Point10grid_clamp17h0af70e6c7939b3f8E
              (param_4 % uVar1,param_2 - iVar3,param_3);
    return;
  }
  _ZN18alacritty_terminal5index5Point10grid_clamp17h0af70e6c7939b3f8E
            ((param_4 & 0xffffffff) % (uVar1 & 0xffffffff),param_2 - iVar3,param_3);
  return;
}