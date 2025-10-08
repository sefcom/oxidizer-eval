void _ZN4just5lexer5Lexer11lex_digraph17h7eb8b1388d0dddbeE
               (byte *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined param_5)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  byte local_88;
  undefined7 uStack_87;
  undefined uStack_80;
  undefined7 uStack_7f;
  undefined local_78;
  undefined7 uStack_77;
  undefined uStack_70;
  undefined7 uStack_6f;
  undefined local_68;
  undefined7 uStack_67;
  undefined uStack_60;
  undefined7 uStack_5f;
  undefined local_58;
  undefined7 uStack_57;
  undefined uStack_50;
  undefined7 uStack_4f;
  undefined local_48;
  undefined7 uStack_47;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  _ZN4just5lexer5Lexer7presume17h784be375f7ec3dadE(&local_88);
  if ((byte)uStack_40 == '%') {
    _ZN4just5lexer5Lexer8accepted17h2b4063f26d19f617E(&local_88,param_2,param_4);
    if ((byte)uStack_40 != 0x25) {
      *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_47,local_48);
      *(ulong *)(param_1 + 0x31) = CONCAT17(uStack_50,uStack_57);
      *(ulong *)(param_1 + 0x39) = CONCAT17(local_48,uStack_4f);
      *(ulong *)(param_1 + 0x21) = CONCAT17(uStack_60,uStack_67);
      *(ulong *)(param_1 + 0x29) = CONCAT17(local_58,uStack_5f);
      *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_70,uStack_77);
      *(ulong *)(param_1 + 0x19) = CONCAT17(local_68,uStack_6f);
      *(ulong *)(param_1 + 1) = CONCAT17(uStack_80,uStack_87);
      *(ulong *)(param_1 + 9) = CONCAT17(local_78,uStack_7f);
      *(uint *)(param_1 + 0x49) = CONCAT13((undefined)uStack_3c,uStack_40._1_3_);
      *(undefined4 *)(param_1 + 0x4c) = uStack_3c;
      *param_1 = local_88;
      param_1[0x48] = (byte)uStack_40;
      return;
    }
    if ((local_88 & 1) != 0) {
      _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,param_5);
      param_1[0x48] = 0x25;
      return;
    }
    _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x23);
    cVar2 = _ZN4just5lexer5Lexer6at_eof17h5321ae9ca03a4d44E(param_2);
    if (cVar2 == '\0') {
      _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_88,param_2);
      if ((byte)uStack_40 != '%') goto LAB_003726c8;
      puVar3 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(4,4);
      if (puVar3 == (undefined4 *)0x0) goto LAB_003726fe;
      *puVar3 = param_4;
      local_78 = SUB81(puVar3,0);
      uStack_77 = (undefined7)((ulong)puVar3 >> 8);
      uVar4 = 0x8000000000000035;
    }
    else {
      puVar3 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(4,4);
      if (puVar3 == (undefined4 *)0x0) {
LAB_003726fe:
        (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00566740)(4,4);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *puVar3 = param_4;
      local_78 = SUB81(puVar3,0);
      uStack_77 = (undefined7)((ulong)puVar3 >> 8);
      uVar4 = 0x8000000000000037;
    }
    uStack_6f = 0;
    uStack_70 = 1;
    uStack_7f = 0;
    uStack_80 = 1;
    local_88 = (byte)uVar4;
    uStack_87 = (undefined7)((ulong)uVar4 >> 8);
    _ZN4just5lexer5Lexer5error17h92eb8a4dd6b17c78E(param_1,param_2,&local_88);
  }
  else {
LAB_003726c8:
    *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_47,local_48);
    *(ulong *)(param_1 + 0x48) = CONCAT44(uStack_3c,uStack_40);
    *(ulong *)(param_1 + 0x30) = CONCAT71(uStack_57,local_58);
    *(ulong *)(param_1 + 0x38) = CONCAT71(uStack_4f,uStack_50);
    *(ulong *)(param_1 + 0x20) = CONCAT71(uStack_67,local_68);
    *(ulong *)(param_1 + 0x28) = CONCAT71(uStack_5f,uStack_60);
    *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_77,local_78);
    *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_6f,uStack_70);
    *(ulong *)param_1 = CONCAT71(uStack_87,local_88);
    *(ulong *)(param_1 + 8) = CONCAT71(uStack_7f,uStack_80);
  }
  return;
}