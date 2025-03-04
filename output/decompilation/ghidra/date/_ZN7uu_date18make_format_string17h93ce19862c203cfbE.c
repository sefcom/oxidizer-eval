undefined  [16] _ZN7uu_date18make_format_string17h93ce19862c203cfbE(long param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  switch(*(ulong *)(param_1 + 0x20) ^ 0x8000000000000000) {
  case 0:
    auVar1._0_8_ = &DAT_00153828 + *(int *)(&DAT_00153828 + (ulong)*(byte *)(param_1 + 0x28) * 4);
    auVar1._8_8_ = *(undefined8 *)(&DAT_00153800 + (ulong)*(byte *)(param_1 + 0x28) * 8);
    return auVar1;
  case 1:
    auVar4._8_8_ = 0x12;
    auVar4._0_8_ = "%a, %d %h %Y %T %z%F %T.%f%:z";
    return auVar4;
  case 2:
    auVar3._0_8_ = &DAT_00153858 + *(int *)(&DAT_00153858 + (ulong)*(byte *)(param_1 + 0x28) * 4);
    auVar3._8_8_ = *(undefined8 *)(&DAT_00153840 + (ulong)*(byte *)(param_1 + 0x28) * 8);
    return auVar3;
  default:
    return *(undefined (*) [16])(param_1 + 0x28);
  case 4:
    auVar2._8_8_ = 2;
    auVar2._0_8_ = "%c";
    return auVar2;
  }
}