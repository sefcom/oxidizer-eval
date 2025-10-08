void _ZN4just5lexer5Lexer8lex_body17h748dd23849ec297dE(undefined8 *param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char cStack_40;
  undefined7 uStack_3f;
  
  do {
    cVar4 = _ZN4just5lexer5Lexer16rest_starts_with17hd2b5246203875c01E(param_2,"{{{{Q",4);
    if (cVar4 == '\0') {
      cVar4 = _ZN4just5lexer5Lexer16rest_starts_with17hd2b5246203875c01E(param_2,&DAT_0016e198,1);
      if (cVar4 != '\0') {
        if (*(long *)(param_2 + 0xa0) != *(long *)(param_2 + 0xb8)) {
          _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x22);
        }
        _ZN4just5lexer5Lexer10lex_single17ha33377f4e645bc1dE(param_1,param_2,0x14);
        return;
      }
      cVar4 = _ZN4just5lexer5Lexer16rest_starts_with17hd2b5246203875c01E(param_2,&DAT_0016e55e,2);
      if (cVar4 != '\0') {
        if (*(long *)(param_2 + 0xa0) != *(long *)(param_2 + 0xb8)) {
          _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x22);
        }
        _ZN4just5lexer5Lexer10lex_double17hb969a7d085e88aceE(param_1,param_2,0x14);
        return;
      }
      cVar4 = _ZN4just5lexer5Lexer16rest_starts_with17hd2b5246203875c01E(param_2,"{{",2);
      if (cVar4 != '\0') {
        if (*(long *)(param_2 + 0xa0) != *(long *)(param_2 + 0xb8)) {
          _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x22);
        }
        _ZN4just5lexer5Lexer10lex_double17hb969a7d085e88aceE(&local_88,param_2,0x1b);
        if (cStack_40 == '%') {
          lVar5 = *(long *)(param_2 + 0x58) + -1;
          if (*(long *)(param_2 + 0x58) == 0) {
            (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00566060)
                      (lVar5,0,&PTR_DAT_005304b8);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(long *)(param_2 + 0x50);
          local_48 = *(undefined8 *)(lVar2 + 0x40 + lVar5 * 0x48);
          puVar1 = (undefined4 *)(lVar2 + lVar5 * 0x48);
          local_88 = *puVar1;
          uStack_84 = puVar1[1];
          uStack_80 = puVar1[2];
          uStack_7c = puVar1[3];
          puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar5 * 0x48);
          local_78 = *puVar1;
          uStack_74 = puVar1[1];
          uStack_70 = puVar1[2];
          uStack_6c = puVar1[3];
          puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar5 * 0x48);
          local_68 = *puVar1;
          uStack_64 = puVar1[1];
          uStack_60 = puVar1[2];
          uStack_5c = puVar1[3];
          puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar5 * 0x48);
          local_58 = *puVar1;
          uStack_54 = puVar1[1];
          uStack_50 = puVar1[2];
          uStack_4c = puVar1[3];
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h613e59c6bb8d58d5E
                    (param_2 + 0x18,&local_88,&PTR_DAT_005304d0);
LAB_00371fd2:
          *(undefined *)(param_1 + 9) = 0x25;
          return;
        }
        goto LAB_00371f82;
      }
      cVar4 = _ZN4just5lexer5Lexer6at_eof17h5321ae9ca03a4d44E(param_2);
      if (cVar4 != '\0') {
        if (*(long *)(param_2 + 0xa0) != *(long *)(param_2 + 0xb8)) {
          _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,0x22);
        }
        goto LAB_00371fd2;
      }
      _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_88,param_2);
    }
    else {
      _ZN4just5lexer5Lexer4skip17h5c5c7013f42a4f08E(&local_88,param_2);
    }
    if (cStack_40 != '%') {
LAB_00371f82:
      param_1[8] = local_48;
      param_1[9] = CONCAT71(uStack_3f,cStack_40);
      param_1[6] = CONCAT44(uStack_54,local_58);
      param_1[7] = CONCAT44(uStack_4c,uStack_50);
      param_1[4] = CONCAT44(uStack_64,local_68);
      param_1[5] = CONCAT44(uStack_5c,uStack_60);
      param_1[2] = CONCAT44(uStack_74,local_78);
      param_1[3] = CONCAT44(uStack_6c,uStack_70);
      *param_1 = CONCAT44(uStack_84,local_88);
      param_1[1] = CONCAT44(uStack_7c,uStack_80);
      return;
    }
  } while( true );
}