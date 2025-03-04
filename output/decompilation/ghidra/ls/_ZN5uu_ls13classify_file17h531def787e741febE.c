undefined8 _ZN5uu_ls13classify_file17h531def787e741febE(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = (uint *)_ZN5uu_ls8PathData9file_type17h128ed7d98b354477E();
  uVar3 = 0x110000;
  if (puVar2 != (uint *)0x0) {
    switch((*puVar2 & 0xf000) - 0x1000 >> 0xc) {
    case 0:
      uVar3 = 0x7c;
      break;
    case 3:
      uVar3 = 0x2f;
      break;
    case 7:
      lVar4 = _ZN5uu_ls8PathData12get_metadata17hc7a96a0547653f90E(param_1,param_2);
      if ((lVar4 != 0) &&
         (cVar1 = _ZN4core3ops8function6FnOnce9call_once17h37c933d7708fabb0E
                            (*(undefined4 *)(lVar4 + 0x38)), cVar1 != '\0')) {
        return 0x2a;
      }
    default:
      uVar3 = 0x110000;
      break;
    case 9:
      uVar3 = 0x40;
      break;
    case 0xb:
      uVar3 = 0x3d;
    }
  }
  return uVar3;
}