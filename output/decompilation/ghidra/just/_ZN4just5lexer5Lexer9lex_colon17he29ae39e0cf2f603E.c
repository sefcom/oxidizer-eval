void _ZN4just5lexer5Lexer9lex_colon17he29ae39e0cf2f603E(byte *param_1,long param_2)

{
  undefined8 uVar1;
  byte local_60;
  undefined7 uStack_5f;
  undefined uStack_58;
  undefined7 uStack_57;
  undefined uStack_50;
  undefined7 uStack_4f;
  undefined uStack_48;
  undefined7 uStack_47;
  undefined uStack_40;
  undefined7 local_3f;
  undefined uStack_38;
  undefined7 uStack_37;
  undefined uStack_30;
  undefined7 local_2f;
  undefined uStack_28;
  undefined7 uStack_27;
  undefined uStack_20;
  undefined7 uStack_1f;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _ZN4just5lexer5Lexer7presume17h784be375f7ec3dadE(&local_60,param_2,0x3a);
  if ((byte)uStack_18 != '%') {
    *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_1f,uStack_20);
    *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_14,uStack_18);
    *(ulong *)(param_1 + 0x30) = CONCAT71(local_2f,uStack_30);
    *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_27,uStack_28);
    *(ulong *)(param_1 + 0x20) = CONCAT71(local_3f,uStack_40);
    *(ulong *)(param_1 + 0x28) = CONCAT71(uStack_37,uStack_38);
    *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_4f,uStack_50);
    *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_47,uStack_48);
    *(ulong *)param_1 = CONCAT71(uStack_5f,local_60);
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_57,uStack_58);
    return;
  }
  _ZN4just5lexer5Lexer8accepted17h2b4063f26d19f617E(&local_60,param_2,0x3d);
  if ((byte)uStack_18 != 0x25) {
LAB_003727d8:
    *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_1f,uStack_20);
    *(ulong *)(param_1 + 0x31) = CONCAT17(uStack_28,local_2f);
    *(ulong *)(param_1 + 0x39) = CONCAT17(uStack_20,uStack_27);
    *(ulong *)(param_1 + 0x21) = CONCAT17(uStack_38,local_3f);
    *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_30,uStack_37);
    *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_48,uStack_4f);
    *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_40,uStack_47);
    *(ulong *)(param_1 + 1) = CONCAT17(uStack_58,uStack_5f);
    *(ulong *)(param_1 + 9) = CONCAT17(uStack_50,uStack_57);
    *(uint *)(param_1 + 0x49) = CONCAT13((undefined)uStack_14,uStack_18._1_3_);
    *(undefined4 *)(param_1 + 0x4c) = uStack_14;
    *param_1 = local_60;
    param_1[0x48] = (byte)uStack_18;
    return;
  }
  if ((local_60 & 1) == 0) {
    _ZN4just5lexer5Lexer8accepted17h2b4063f26d19f617E(&local_60,param_2,0x3a);
    if ((byte)uStack_18 != 0x25) goto LAB_003727d8;
    if ((local_60 & 1) == 0) {
      _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0xc);
      *(undefined *)(param_2 + 0xc5) = 1;
      goto LAB_00372769;
    }
    uVar1 = 0xd;
  }
  else {
    uVar1 = 0xe;
  }
  _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,uVar1);
LAB_00372769:
  param_1[0x48] = 0x25;
  return;
}