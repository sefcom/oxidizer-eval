void _ZN9alacritty8renderer4text5atlas5Atlas11clear_atlas17hef33764e1736b01bE
               (long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + 0xc + lVar1) = 0;
      *(undefined4 *)(param_1 + 0x14 + lVar1) = 0;
      lVar1 = lVar1 + 0x1c;
    } while (param_2 * 0x1c != lVar1);
  }
  *param_3 = 0;
  return;
}