void _ZN9alacritty8renderer4text1_16InternalBitFlags3set17h8a9e1986395766d7E
               (byte *param_1,byte param_2,int param_3)

{
  byte bVar1;
  
  bVar1 = ~param_2 & *param_1;
  if (param_3 != 0) {
    bVar1 = *param_1 | param_2;
  }
  *param_1 = bVar1;
  return;
}