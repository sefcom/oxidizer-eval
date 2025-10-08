void _ZN4just5lexer5Lexer14internal_error17h78cb678bc55cc920E
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined local_78;
  undefined8 local_70;
  undefined local_68 [96];
  
  local_a8 = *(undefined8 *)(param_2 + 0x80);
  local_b8 = *(undefined8 *)(param_2 + 0x70);
  uStack_b0 = *(undefined8 *)(param_2 + 0x78);
  local_78 = 0x23;
  local_90 = 0;
  local_88 = *(undefined4 *)(param_2 + 0x98);
  uStack_84 = *(undefined4 *)(param_2 + 0x9c);
  uStack_80 = *(undefined4 *)(param_2 + 0xa0);
  uStack_7c = *(undefined4 *)(param_2 + 0xa4);
  local_a0 = *(undefined4 *)(param_2 + 0x88);
  uStack_9c = *(undefined4 *)(param_2 + 0x8c);
  uStack_98 = *(undefined4 *)(param_2 + 0x90);
  uStack_94 = *(undefined4 *)(param_2 + 0x94);
  _ZN4core3ops8function5FnMut8call_mut17hc72515ad55b31cc5E(local_68,param_3);
  local_70 = 0x8000000000000028;
  _ZN4just13compile_error12CompileError3new17hd7f8c5d37ebee6c9E(param_1,&local_b8,&local_70);
  return;
}