undefined8
_ZN9alacritty6config8bindings16Binding_LT_T_GT_14triggers_match17h2347c39c3a6d0800E
          (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  
  cVar3 = _ZN4core3cmp9PartialEq2ne17hd559d557ff0b2ec9E
                    (*(undefined4 *)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x32),
                     *(undefined4 *)(param_2 + 0x30),*(undefined2 *)(param_2 + 0x32));
  if ((cVar3 == '\0') && (*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34))) {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    uVar2 = uVar1;
    if ((byte)uVar1 == 0) {
      uVar2 = 0x7f;
    }
    bVar4 = (byte)*(undefined4 *)(param_2 + 0x38);
    bVar5 = bVar4;
    if (bVar4 == 0) {
      bVar5 = 0x7f;
    }
    if ((((bVar5 & (byte)uVar2) != 0) && ((*(byte *)(param_2 + 0x39) & (byte)uVar1) == 0)) &&
       ((*(byte *)(param_1 + 0x39) & bVar4) == 0)) {
      return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
  return 0;
}