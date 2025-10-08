void _ZN4just5lexer5Lexer5error17h92eb8a4dd6b17c78E(undefined8 param_1,long param_2,long *param_3)

{
  byte bVar1;
  long extraout_RDX;
  undefined auVar2 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  long local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined local_20;
  
  if ((*param_3 == -0x7fffffffffffffba) || (*param_3 == -0x7fffffffffffffb8)) {
                    /* try { // try from 00370d13 to 00370d59 has its CatchHandler @ 00370dbb */
    auVar2 = _ZN4just5lexer5Lexer6lexeme17h6f4e5a895dbfd937E(param_2);
    bVar1 = _ZN4just11string_kind10StringKind16from_token_start17h243afdb46a506377E
                      (auVar2._0_8_,auVar2._8_8_);
    if (bVar1 == 2) {
      _ZN4just5lexer5Lexer14internal_error17hc085b50b9a8f6202E(param_1,param_2,&DAT_00171297,0x35);
      _ZN4core3ptr63drop_in_place_LT_just__compile_error_kind__CompileErrorKind_GT_17he0bfeab3ddccc897E
                (param_3);
      return;
    }
    local_38 = (ulong)bVar1 * 2 + 1;
  }
  else {
    _ZN4just5lexer5Lexer6lexeme17h6f4e5a895dbfd937E(param_2);
    local_38 = extraout_RDX;
  }
  local_60 = *(undefined4 *)(param_2 + 0x70);
  uStack_5c = *(undefined4 *)(param_2 + 0x74);
  uStack_58 = *(undefined4 *)(param_2 + 0x78);
  uStack_54 = *(undefined4 *)(param_2 + 0x7c);
  local_50 = *(undefined4 *)(param_2 + 0x80);
  uStack_4c = *(undefined4 *)(param_2 + 0x84);
  uStack_48 = *(undefined4 *)(param_2 + 0x88);
  uStack_44 = *(undefined4 *)(param_2 + 0x8c);
  local_40 = *(undefined8 *)(param_2 + 0xa8);
  local_20 = 0x23;
  local_30 = *(undefined4 *)(param_2 + 0xb0);
  uStack_2c = *(undefined4 *)(param_2 + 0xb4);
  uStack_28 = *(undefined4 *)(param_2 + 0xb8);
  uStack_24 = *(undefined4 *)(param_2 + 0xbc);
  _ZN4just13compile_error12CompileError3new17hd7f8c5d37ebee6c9E(param_1,&local_60,param_3);
  return;
}