void _ZN9alacritty3cli7Options15override_config17h1ba26234fdcab24eE
               (long param_1,undefined8 *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 extraout_EDX;
  byte bVar5;
  undefined uVar6;
  
  uVar3 = 0;
  *(undefined *)((long)param_2 + 0x419) = 1;
  if (*(long *)(param_1 + 0x198) != -0x8000000000000000) {
    uVar3 = _ZN9alacritty3cli20parse_hex_or_decimal17hd382c3b23da3886dE
                      (*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x1a8));
    param_3 = extraout_EDX;
  }
  *(undefined4 *)(param_2 + 0x30) = uVar3;
  *(undefined4 *)((long)param_2 + 0x184) = param_3;
  bVar1 = *(byte *)(param_1 + 0x1e0);
  bVar5 = *(byte *)(param_2 + 1) | bVar1;
  *(byte *)(param_2 + 1) = bVar5;
  cVar2 = *(char *)(param_1 + 0x1e4);
  uVar6 = 3;
  if (cVar2 == '\0') {
    if (bVar1 != 0) goto LAB_00533df4;
    uVar6 = 2;
  }
  else {
    if (cVar2 == '\x01') goto LAB_00533df4;
    if (cVar2 == '\x02') {
      uVar6 = 4;
      goto LAB_00533df4;
    }
    uVar6 = 5;
  }
  if (*(char *)(param_1 + 0x1e3) != '\0') {
    uVar6 = *(char *)(param_1 + 0x1e3) == '\x01';
  }
LAB_00533df4:
  uVar4 = _ZN4core3cmp3Ord3max17h3ddb33a72be94f33E(*param_2,uVar6);
  *param_2 = uVar4;
  *(byte *)((long)param_2 + 0xd) = *(byte *)((long)param_2 + 0xd) | *(byte *)(param_1 + 0x1e1);
  if (bVar5 != 0) {
    uVar4 = _ZN4core3cmp3Ord3max17h3ddb33a72be94f33E(uVar4,3);
    *param_2 = uVar4;
  }
  _ZN9alacritty3cli13ParsedOptions15override_config17hf97b5b294eb97d07E(param_1 + 0x180,param_2);
  return;
}