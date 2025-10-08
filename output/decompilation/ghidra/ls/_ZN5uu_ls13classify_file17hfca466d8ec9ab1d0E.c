undefined8 _ZN5uu_ls13classify_file17hfca466d8ec9ab1d0E(undefined8 param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = (uint *)_ZN5uu_ls8PathData9file_type17h413d2014e9fb015bE();
  uVar2 = 0x110000;
  if (puVar1 != (uint *)0x0) {
    switch((*puVar1 & 0xf000) - 0x1000 >> 0xc) {
    case 0:
      uVar2 = 0x7c;
      break;
    default:
      return 0x110000;
    case 3:
      return 0x2f;
    case 7:
      lVar3 = _ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(param_1,param_2);
      if (lVar3 == 0) {
        return 0x110000;
      }
      uVar2 = 0x2a;
      if ((*(byte *)(lVar3 + 0x38) & 0x49) == 0) {
        return 0x110000;
      }
      break;
    case 9:
      return 0x40;
    case 0xb:
      return 0x3d;
    }
  }
  return uVar2;
}