void _ZN4just5lexer5Lexer3new17hfc1c879c99a7882dE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  lStack_40 = param_4 + param_5;
  local_48 = param_4;
  local_38 = param_3;
  uVar2 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_48);
  puVar3 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x10);
  if (puVar3 != (undefined8 *)0x0) {
    uVar4 = 0x110000;
    if ((uVar2 & 1) != 0) {
      uVar4 = extraout_EDX;
    }
    *puVar3 = 1;
    puVar3[1] = 0;
    param_1[0xc] = local_48;
    param_1[0xd] = lStack_40;
    *param_1 = 1;
    param_1[1] = puVar3;
    param_1[2] = 1;
    param_1[3] = 0;
    param_1[4] = 8;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    param_1[7] = 8;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = param_2;
    param_1[0xf] = local_38;
    *(undefined2 *)((long)param_1 + 0xc4) = 0;
    param_1[0x10] = param_4;
    param_1[0x11] = param_5;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[10] = 8;
    param_1[0xb] = 0;
    return;
  }
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00566740)(8,0x10);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}