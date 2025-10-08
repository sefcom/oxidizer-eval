void _ZN9alacritty6config8bindings1_16InternalBitFlags3set17h14601641b5933c70E
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