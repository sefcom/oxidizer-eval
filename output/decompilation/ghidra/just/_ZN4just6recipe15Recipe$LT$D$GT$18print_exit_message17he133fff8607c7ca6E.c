ulong _ZN4just6recipe15Recipe_LT_D_GT_18print_exit_message17he133fff8607c7ca6E
                (long param_1,uint param_2)

{
  char cVar1;
  ulong uVar2;
  
  cVar1 = _ZN4just13attribute_set12AttributeSet8contains17hc7aae4e0e93c2d03E(param_1 + 0xd8,3);
  uVar2 = 1;
  if (cVar1 == '\0') {
    if ((param_2 & 1) == 0) {
      uVar2 = _ZN4just13attribute_set12AttributeSet8contains17hc7aae4e0e93c2d03E(param_1 + 0xd8,10);
      return uVar2 ^ 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}