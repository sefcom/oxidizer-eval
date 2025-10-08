void _ZN4just12output_error11OutputError23result_from_exit_status17hf1fa63d3fe1b5ea4E
               (uint *param_1,uint param_2)

{
  uint uVar1;
  undefined uVar2;
  
  uVar1 = param_2 & 0x7f;
  if (uVar1 == 0) {
    uVar2 = 2;
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 0) {
      *(undefined *)(param_1 + 2) = 7;
      return;
    }
  }
  else {
    uVar2 = 5;
    if ((char)((char)uVar1 + '\x01') < '\x02') {
      *(undefined *)(param_1 + 2) = 6;
      return;
    }
  }
  *param_1 = uVar1;
  *(undefined *)(param_1 + 2) = uVar2;
  return;
}