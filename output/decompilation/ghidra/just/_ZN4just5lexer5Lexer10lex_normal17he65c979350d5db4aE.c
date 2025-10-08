void _ZN4just5lexer5Lexer10lex_normal17he65c979350d5db4aE
               (undefined8 *param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined8 local_80;
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char cStack_38;
  undefined7 uStack_37;
  
  switch(param_3) {
  case 9:
  case 0x20:
    _ZN4just5lexer5Lexer14lex_whitespace17h8e907693bc02b7bbE();
    return;
  case 10:
  case 0xd:
    _ZN4just5lexer5Lexer7lex_eol17h7f8dde0d41698e62E();
    return;
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x25:
  case 0x2d:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x3c:
  case 0x3e:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5e:
  case 0x5f:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    goto switchD_00371a21_caseD_b;
  case 0x21:
    auVar6 = _ZN4just5lexer5Lexer4rest17h4f82959a07fe6144E(param_2);
    cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h8590487e544a86f3E
                      (auVar6._0_8_,auVar6._8_8_,"!includeS",8);
    if (cVar1 == '\0') {
      pcVar2 = "=";
      uVar3 = 0x21;
      uVar4 = 0x25;
      goto LAB_00371c2f;
    }
    local_80 = 0x8000000000000026;
    goto LAB_00371c10;
  case 0x22:
  case 0x27:
  case 0x60:
    _ZN4just5lexer5Lexer10lex_string17hf16a7b23cc25ab92E();
    return;
  case 0x23:
    _ZN4just5lexer5Lexer11lex_comment17h56d1597af2c2fc00E();
    return;
  case 0x24:
    uVar3 = 0x12;
    break;
  case 0x26:
    uVar4 = 0x26;
    uVar3 = 0x26;
    uVar5 = 0;
    goto LAB_00371ac0;
  case 0x28:
    uVar3 = 0x1c;
    goto LAB_00371ba2;
  case 0x29:
    uVar3 = 0x1d;
    goto LAB_00371ba2;
  case 0x2a:
    uVar3 = 1;
    break;
  case 0x2b:
    uVar3 = 0x1e;
    break;
  case 0x2c:
    uVar3 = 0xf;
    break;
  case 0x2f:
    uVar3 = 0x20;
    break;
  case 0x3a:
    _ZN4just5lexer5Lexer9lex_colon17he29ae39e0cf2f603E();
    return;
  case 0x3d:
    pcVar2 = "=";
    uVar3 = 0x3d;
    uVar4 = 0x15;
LAB_00371c2f:
    _ZN4just5lexer5Lexer11lex_choices17h87db0effb4b54026E(param_1,param_2,uVar3,pcVar2,uVar4);
    return;
  case 0x3f:
    uVar3 = 0x1f;
    break;
  case 0x40:
    uVar3 = 2;
    break;
  case 0x5b:
    uVar3 = 9;
    goto LAB_00371ba2;
  case 0x5c:
    _ZN4just5lexer5Lexer10lex_escape17hfa0aaf6f8bea1e9aE();
    return;
  case 0x5d:
    uVar3 = 10;
    goto LAB_00371ba2;
  case 0x7b:
    uVar3 = 7;
    goto LAB_00371ba2;
  case 0x7c:
    uVar4 = 0x7c;
    uVar3 = 0x7c;
    uVar5 = 6;
LAB_00371ac0:
    _ZN4just5lexer5Lexer11lex_digraph17h7eb8b1388d0dddbeE(param_1,param_2,uVar4,uVar3,uVar5);
    return;
  case 0x7d:
    uVar3 = 8;
LAB_00371ba2:
    _ZN4just5lexer5Lexer13lex_delimiter17h2949cd4fddbf158bE(param_1,param_2,uVar3);
    return;
  default:
    if (param_3 == 0xfeff) {
      uVar3 = 0xb;
      break;
    }
    goto switchD_00371a21_caseD_b;
  }
  _ZN4just5lexer5Lexer10lex_single17ha33377f4e645bc1dE(param_1,param_2,uVar3);
  return;
switchD_00371a21_caseD_b:
  if ((param_3 - 0x61 < 0x1a) || ((0x40 < param_3 && (param_3 == 0x5f || param_3 < 0x5b)))) {
    _ZN4just5lexer5Lexer14lex_identifier17hf1dac9d9d56230f3E();
    return;
  }
  _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_80);
  if (cStack_38 == '%') {
    local_80 = 0x8000000000000044;
    uStack_78 = param_3;
LAB_00371c10:
    _ZN4just5lexer5Lexer5error17h92eb8a4dd6b17c78E(param_1,param_2,&local_80);
  }
  else {
    param_1[8] = local_40;
    param_1[9] = CONCAT71(uStack_37,cStack_38);
    param_1[6] = local_50;
    param_1[7] = uStack_48;
    param_1[4] = local_60;
    param_1[5] = uStack_58;
    param_1[2] = local_70;
    param_1[3] = uStack_68;
    *param_1 = local_80;
    param_1[1] = CONCAT44(uStack_74,uStack_78);
  }
  return;
}