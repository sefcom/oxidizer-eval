void _ZN18alacritty_terminal4term1_16InternalBitFlags3set17hd6f96cdfac5820c3E
               (uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *param_1 | param_2;
  if (param_3 == 0) {
    uVar1 = ~param_2 & *param_1;
  }
  *param_1 = uVar1;
  return;
}