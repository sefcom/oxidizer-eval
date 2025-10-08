void _ZN4just5lexer5Lexer7lex_eol17h7f8dde0d41698e62E(byte *param_1,long param_2)

{
  byte local_78;
  undefined7 uStack_77;
  undefined uStack_70;
  undefined7 uStack_6f;
  undefined uStack_68;
  undefined7 uStack_67;
  undefined uStack_60;
  undefined7 uStack_5f;
  undefined uStack_58;
  undefined7 local_57;
  undefined uStack_50;
  undefined7 uStack_4f;
  undefined uStack_48;
  undefined7 local_47;
  undefined uStack_40;
  undefined7 uStack_3f;
  undefined uStack_38;
  undefined7 uStack_37;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  _ZN4just5lexer5Lexer8accepted17h2b4063f26d19f617E(&local_78,param_2,0xd);
  if ((byte)uStack_30 == 0x25) {
    if ((local_78 & 1) == 0) {
      _ZN4just5lexer5Lexer7presume17h784be375f7ec3dadE(&local_78,param_2,10);
      if ((byte)uStack_30 != '%') {
        *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_37,uStack_38);
        *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_2c,uStack_30);
        *(ulong *)(param_1 + 0x30) = CONCAT71(local_47,uStack_48);
        *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_3f,uStack_40);
        *(ulong *)(param_1 + 0x20) = CONCAT71(local_57,uStack_58);
        *(ulong *)(param_1 + 0x28) = CONCAT71(uStack_4f,uStack_50);
        *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_67,uStack_68);
        *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_5f,uStack_60);
        *(ulong *)param_1 = CONCAT71(uStack_77,local_78);
        *(ulong *)(param_1 + 8) = CONCAT71(uStack_6f,uStack_70);
        return;
      }
    }
    else {
      _ZN4just5lexer5Lexer8accepted17h2b4063f26d19f617E();
      if ((byte)uStack_30 != 0x25) goto LAB_00372ab6;
      if ((local_78 & 1) == 0) {
        local_78 = 0x45;
        uStack_77 = 0x80000000000000;
        _ZN4just5lexer5Lexer5error17h92eb8a4dd6b17c78E(param_1,param_2,&local_78);
        return;
      }
    }
    _ZN4just5lexer5Lexer5token17h8b86862a20389d16E
              (param_2,(*(long *)(param_2 + 0x40) != 0) * '\x10' + '\x14');
    param_1[0x48] = 0x25;
    return;
  }
LAB_00372ab6:
  *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_37,uStack_38);
  *(ulong *)(param_1 + 0x31) = CONCAT17(uStack_40,local_47);
  *(ulong *)(param_1 + 0x39) = CONCAT17(uStack_38,uStack_3f);
  *(ulong *)(param_1 + 0x21) = CONCAT17(uStack_50,local_57);
  *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_48,uStack_4f);
  *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_60,uStack_67);
  *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_58,uStack_5f);
  *(ulong *)(param_1 + 1) = CONCAT17(uStack_70,uStack_77);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_68,uStack_6f);
  *(uint *)(param_1 + 0x49) = CONCAT13((undefined)uStack_2c,uStack_30._1_3_);
  *(undefined4 *)(param_1 + 0x4c) = uStack_2c;
  *param_1 = local_78;
  param_1[0x48] = (byte)uStack_30;
  return;
}