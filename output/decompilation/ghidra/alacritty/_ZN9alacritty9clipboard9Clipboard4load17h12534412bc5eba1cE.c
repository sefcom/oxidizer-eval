void _ZN9alacritty9clipboard9Clipboard4load17h12534412bc5eba1cE
               (undefined8 *param_1,long param_2,byte param_3)

{
  long lVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  param_3 = *(long *)(param_2 + 0x10) != 0 & param_3;
  lVar1 = param_2 + 0x10;
  if (param_3 == 0) {
    lVar1 = param_2;
  }
  (**(code **)(*(long *)(lVar1 + 8) + 0x18))
            (&local_88,*(undefined8 *)(param_2 + (ulong)param_3 * 0x10));
  param_1[2] = uStack_78;
  *param_1 = local_88;
  param_1[1] = uStack_80;
  return;
}