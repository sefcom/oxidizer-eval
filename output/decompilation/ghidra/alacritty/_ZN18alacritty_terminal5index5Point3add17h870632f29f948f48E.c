void _ZN18alacritty_terminal5index5Point3add17h870632f29f948f48E
               (long param_1,int param_2,long param_3,undefined param_4,long param_5)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_3 + 0xb8);
  if (uVar1 == 0) {
    (*(code *)
      PTR__ZN4core9panicking11panic_const23panic_const_div_by_zero17hc7d962fcb87948a3E_009de5b0)
              (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977c40);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = param_5 + param_1;
  if ((uVar3 | uVar1) >> 0x20 != 0) {
    _ZN18alacritty_terminal5index5Point10grid_clamp17hd0d1827dd0c9d684E
              (uVar3 % uVar1,param_2 + (int)(uVar3 / uVar1),param_3,param_4);
    return;
  }
  _ZN18alacritty_terminal5index5Point10grid_clamp17hd0d1827dd0c9d684E
            ((uVar3 & 0xffffffff) % (uVar1 & 0xffffffff),
             param_2 + (int)((uVar3 & 0xffffffff) / (uVar1 & 0xffffffff)),param_3,param_4);
  return;
}