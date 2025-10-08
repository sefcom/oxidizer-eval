void _ZN4just5lexer5Lexer10lex_escape17hfa0aaf6f8bea1e9aE(byte *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  byte local_80;
  undefined7 uStack_7f;
  int iStack_78;
  undefined4 uStack_74;
  undefined local_70;
  undefined7 uStack_6f;
  undefined uStack_68;
  undefined7 uStack_67;
  undefined local_60;
  undefined7 uStack_5f;
  undefined uStack_58;
  undefined7 uStack_57;
  undefined local_50;
  undefined7 uStack_4f;
  undefined uStack_48;
  undefined7 uStack_47;
  undefined local_40;
  undefined7 uStack_3f;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  _ZN4just5lexer5Lexer7presume17h784be375f7ec3dadE(&local_80,param_2,0x5c);
  if ((byte)uStack_38 != '%') {
LAB_0037297e:
    *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_3f,local_40);
    *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_34,uStack_38);
    *(ulong *)(param_1 + 0x30) = CONCAT71(uStack_4f,local_50);
    *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_47,uStack_48);
    *(ulong *)(param_1 + 0x20) = CONCAT71(uStack_5f,local_60);
    *(ulong *)(param_1 + 0x28) = CONCAT71(uStack_57,uStack_58);
    *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_6f,local_70);
    *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_67,uStack_68);
    *(ulong *)param_1 = CONCAT71(uStack_7f,local_80);
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_74,iStack_78);
    return;
  }
  _ZN4just5lexer5Lexer8accepted17h2b4063f26d19f617E(&local_80,param_2,10);
  if ((byte)uStack_38 != 0x25) {
LAB_003729ac:
    *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_3f,local_40);
    *(ulong *)(param_1 + 0x31) = CONCAT17(uStack_48,uStack_4f);
    *(ulong *)(param_1 + 0x39) = CONCAT17(local_40,uStack_47);
    *(ulong *)(param_1 + 0x21) = CONCAT17(uStack_58,uStack_5f);
    *(ulong *)(param_1 + 0x29) = CONCAT17(local_50,uStack_57);
    *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_68,uStack_6f);
    *(ulong *)(param_1 + 0x19) = CONCAT17(local_60,uStack_67);
    *(ulong *)(param_1 + 1) = CONCAT17((undefined)iStack_78,uStack_7f);
    *(ulong *)(param_1 + 9) = CONCAT17(local_70,CONCAT43(uStack_74,iStack_78._1_3_));
    *(uint *)(param_1 + 0x49) = CONCAT13((undefined)uStack_34,uStack_38._1_3_);
    *(undefined4 *)(param_1 + 0x4c) = uStack_34;
    *param_1 = local_80;
    param_1[0x48] = (byte)uStack_38;
    return;
  }
  if ((local_80 & 1) == 0) {
    _ZN4just5lexer5Lexer8accepted17h2b4063f26d19f617E(&local_80,param_2,0xd);
    if ((byte)uStack_38 != 0x25) goto LAB_003729ac;
    if ((local_80 & 1) == 0) {
      iStack_78 = *(int *)(param_2 + 0xc0);
      if (iStack_78 != 0x110000) {
        uVar2 = 0x800000000000002a;
LAB_00372a26:
        local_80 = (byte)uVar2;
        uStack_7f = (undefined7)((ulong)uVar2 >> 8);
        _ZN4just5lexer5Lexer5error17h92eb8a4dd6b17c78E(param_1,param_2,&local_80);
        return;
      }
      goto LAB_003728e3;
    }
    _ZN4just5lexer5Lexer8accepted17h2b4063f26d19f617E(&local_80,param_2,10);
    if ((byte)uStack_38 != 0x25) goto LAB_003729ac;
    if ((local_80 & 1) == 0) {
      uVar2 = 0x8000000000000045;
      goto LAB_00372a26;
    }
    cVar1 = _ZN4just5lexer5Lexer18next_is_whitespace17h1ab180af553eaaf1E
                      (*(undefined4 *)(param_2 + 0xc0));
    if (cVar1 != '\0') {
      do {
        _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_80,param_2);
        if ((byte)uStack_38 != '%') goto LAB_0037297e;
        cVar1 = _ZN4just5lexer5Lexer18next_is_whitespace17h1ab180af553eaaf1E
                          (*(undefined4 *)(param_2 + 0xc0));
      } while (cVar1 != '\0');
    }
  }
  else {
    cVar1 = _ZN4just5lexer5Lexer18next_is_whitespace17h1ab180af553eaaf1E
                      (*(undefined4 *)(param_2 + 0xc0));
    if (cVar1 != '\0') {
      do {
        _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_80,param_2);
        if ((byte)uStack_38 != '%') goto LAB_0037297e;
        cVar1 = _ZN4just5lexer5Lexer18next_is_whitespace17h1ab180af553eaaf1E
                          (*(undefined4 *)(param_2 + 0xc0));
      } while (cVar1 != '\0');
    }
  }
  _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x24);
LAB_003728e3:
  param_1[0x48] = 0x25;
  return;
}