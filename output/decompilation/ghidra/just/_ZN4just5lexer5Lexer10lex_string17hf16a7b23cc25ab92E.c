void _ZN4just5lexer5Lexer10lex_string17hf16a7b23cc25ab92E(undefined8 *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulong extraout_RDX;
  char *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined auVar11 [16];
  char *local_b8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char cStack_50;
  undefined7 uStack_4f;
  
  auVar11 = _ZN4just5lexer5Lexer4rest17h4f82959a07fe6144E(param_2);
  bVar4 = _ZN4just11string_kind10StringKind16from_token_start17h243afdb46a506377E
                    (auVar11._0_8_,auVar11._8_8_);
  if (bVar4 == 2) {
    _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_98,param_2);
    if (cStack_50 == '%') {
      _ZN4just5lexer5Lexer14internal_error17hc085b50b9a8f6202E(param_1,param_2,&DAT_00171357,0x27);
      return;
    }
  }
  else {
    cVar2 = (char)extraout_RDX;
    if (cVar2 == '\0') {
      iVar6 = (uint)bVar4 * 2 + 1;
      pcVar8 = 
      "```\"\"\"\'\'\'Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `Lexer::lex_string: invalid string start@--@#!internal error: entered unreachable code: Iterator was fused, but returned Some after Nonesrc/list.rssrc/loader.rs:::src/name.rssrc/namepath.rsProcess experienced an unknown failureProcess succeded but `just` was interrupted by signal Error executing process: Process terminated by signal Could not convert process stdout to UTF-8: =+*src/parser.rs`Parser::next()` called after end of token stream`Parser::advance()` advanced past end of token streamPresumed next token would have kind Presumed next token would have lexeme \"\", but found \"Presumed next token would be Parse completed with \x18\x18\x0e\x18!\x18\x18!\x18\x1f\x18\x18\x10\x18\x18\x13\x18\x18\x14\x02\x05Module\x18\x0e\x15\x0e\x0fAliasAssignmentxError getting current directory: unicode decode errorsignal handlerwarning: I/O error reading from signal pipe: src/positional.rssrc/ran.rsRun recipe ``? y===> Running recipe `#### ] evaluated_lines was emptybad shebang line: # ]\n@ &&{{  }}src/recipe_resolver.rsPRELUDEsrc/search.rs.config"
      ;
      pcVar7 = &DAT_0016e541;
    }
    else if (((uint)extraout_RDX & 0xff) == 1) {
      iVar6 = (uint)bVar4 * 2 + 1;
      pcVar8 = 
      "\"\"\"\'\'\'Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `Lexer::lex_string: invalid string start@--@#!internal error: entered unreachable code: Iterator was fused, but returned Some after Nonesrc/list.rssrc/loader.rs:::src/name.rssrc/namepath.rsProcess experienced an unknown failureProcess succeded but `just` was interrupted by signal Error executing process: Process terminated by signal Could not convert process stdout to UTF-8: =+*src/parser.rs`Parser::next()` called after end of token stream`Parser::advance()` advanced past end of token streamPresumed next token would have kind Presumed next token would have lexeme \"\", but found \"Presumed next token would be Parse completed with \x18\x18\x0e\x18!\x18\x18!\x18\x1f\x18\x18\x10\x18\x18\x13\x18\x18\x14\x02\x05Module\x18\x0e\x15\x0e\x0fAliasAssignmentxError getting current directory: unicode decode errorsignal handlerwarning: I/O error reading from signal pipe: src/positional.rssrc/ran.rsRun recipe ``? y===> Running recipe `#### ] evaluated_lines was emptybad shebang line: # ]\n@ &&{{  }}src/recipe_resolver.rsPRELUDEsrc/search.rs.config"
      ;
      pcVar7 = "\"";
    }
    else {
      iVar6 = (uint)bVar4 * 2 + 1;
      pcVar8 = 
      "\'\'\'Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `Lexer::lex_string: invalid string start@--@#!internal error: entered unreachable code: Iterator was fused, but returned Some after Nonesrc/list.rssrc/loader.rs:::src/name.rssrc/namepath.rsProcess experienced an unknown failureProcess succeded but `just` was interrupted by signal Error executing process: Process terminated by signal Could not convert process stdout to UTF-8: =+*src/parser.rs`Parser::next()` called after end of token stream`Parser::advance()` advanced past end of token streamPresumed next token would have kind Presumed next token would have lexeme \"\", but found \"Presumed next token would be Parse completed with \x18\x18\x0e\x18!\x18\x18!\x18\x1f\x18\x18\x10\x18\x18\x13\x18\x18\x14\x02\x05Module\x18\x0e\x15\x0e\x0fAliasAssignmentxError getting current directory: unicode decode errorsignal handlerwarning: I/O error reading from signal pipe: src/positional.rssrc/ran.rsRun recipe ``? y===> Running recipe `#### ] evaluated_lines was emptybad shebang line: # ]\n@ &&{{  }}src/recipe_resolver.rsPRELUDEsrc/search.rs.config"
      ;
      pcVar7 = "\'";
    }
    if ((bVar4 & 1) != 0) {
      pcVar7 = pcVar8;
    }
    _ZN4just5lexer5Lexer11presume_str17hf90f47e4eeb23e64E(&local_98,param_2,pcVar7,iVar6);
    if (cStack_50 == '%') {
      iVar6 = *(int *)(param_2 + 0xc0);
      if (iVar6 != 0x110000) {
        iVar1 = (uint)bVar4 * 2 + 1;
        pcVar7 = "\'";
        bVar10 = (bVar4 & 1) != 0;
        if (bVar10) {
          pcVar7 = 
          "\'\'\'Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `Lexer::lex_string: invalid string start@--@#!internal error: entered unreachable code: Iterator was fused, but returned Some after Nonesrc/list.rssrc/loader.rs:::src/name.rssrc/namepath.rsProcess experienced an unknown failureProcess succeded but `just` was interrupted by signal Error executing process: Process terminated by signal Could not convert process stdout to UTF-8: =+*src/parser.rs`Parser::next()` called after end of token stream`Parser::advance()` advanced past end of token streamPresumed next token would have kind Presumed next token would have lexeme \"\", but found \"Presumed next token would be Parse completed with \x18\x18\x0e\x18!\x18\x18!\x18\x1f\x18\x18\x10\x18\x18\x13\x18\x18\x14\x02\x05Module\x18\x0e\x15\x0e\x0fAliasAssignmentxError getting current directory: unicode decode errorsignal handlerwarning: I/O error reading from signal pipe: src/positional.rssrc/ran.rsRun recipe ``? y===> Running recipe `#### ] evaluated_lines was emptybad shebang line: # ]\n@ &&{{  }}src/recipe_resolver.rsPRELUDEsrc/search.rs.config"
          ;
        }
        local_b8 = &DAT_0016e541;
        if (bVar10) {
          local_b8 = 
          "```\"\"\"\'\'\'Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `Lexer::lex_string: invalid string start@--@#!internal error: entered unreachable code: Iterator was fused, but returned Some after Nonesrc/list.rssrc/loader.rs:::src/name.rssrc/namepath.rsProcess experienced an unknown failureProcess succeded but `just` was interrupted by signal Error executing process: Process terminated by signal Could not convert process stdout to UTF-8: =+*src/parser.rs`Parser::next()` called after end of token stream`Parser::advance()` advanced past end of token streamPresumed next token would have kind Presumed next token would have lexeme \"\", but found \"Presumed next token would be Parse completed with \x18\x18\x0e\x18!\x18\x18!\x18\x1f\x18\x18\x10\x18\x18\x13\x18\x18\x14\x02\x05Module\x18\x0e\x15\x0e\x0fAliasAssignmentxError getting current directory: unicode decode errorsignal handlerwarning: I/O error reading from signal pipe: src/positional.rssrc/ran.rsRun recipe ``? y===> Running recipe `#### ] evaluated_lines was emptybad shebang line: # ]\n@ &&{{  }}src/recipe_resolver.rsPRELUDEsrc/search.rs.config"
          ;
        }
        pcVar8 = "\"";
        if (bVar10) {
          pcVar8 = 
          "\"\"\"\'\'\'Lexer::error: expected string or backtick token start}}Lexer::lex_interpolation found `}}` but was called with empty interpolation stack.Lexer::lex_delimiter called with non-delimiter token: `Lexer::lex_string: invalid string start@--@#!internal error: entered unreachable code: Iterator was fused, but returned Some after Nonesrc/list.rssrc/loader.rs:::src/name.rssrc/namepath.rsProcess experienced an unknown failureProcess succeded but `just` was interrupted by signal Error executing process: Process terminated by signal Could not convert process stdout to UTF-8: =+*src/parser.rs`Parser::next()` called after end of token stream`Parser::advance()` advanced past end of token streamPresumed next token would have kind Presumed next token would have lexeme \"\", but found \"Presumed next token would be Parse completed with \x18\x18\x0e\x18!\x18\x18!\x18\x1f\x18\x18\x10\x18\x18\x13\x18\x18\x14\x02\x05Module\x18\x0e\x15\x0e\x0fAliasAssignmentxError getting current directory: unicode decode errorsignal handlerwarning: I/O error reading from signal pipe: src/positional.rssrc/ran.rsRun recipe ``? y===> Running recipe `#### ] evaluated_lines was emptybad shebang line: # ]\n@ &&{{  }}src/recipe_resolver.rsPRELUDEsrc/search.rs.config"
          ;
        }
        if (cVar2 == '\x01') {
          bVar10 = false;
          do {
            if ((iVar6 != 0x5c) || (bVar3 = true, bVar10)) {
              cVar5 = _ZN4just5lexer5Lexer16rest_starts_with17hd2b5246203875c01E
                                (param_2,pcVar8,iVar1);
              if ((cVar5 != '\0') && (!bVar10)) goto LAB_00372fab;
              bVar3 = false;
            }
            bVar10 = bVar3;
            _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_98,param_2);
            if (cStack_50 != '%') goto LAB_00373069;
            iVar6 = *(int *)(param_2 + 0xc0);
          } while (iVar6 != 0x110000);
        }
        else if ((extraout_RDX & 0xff) == 0) {
          do {
            cVar5 = _ZN4just5lexer5Lexer16rest_starts_with17hd2b5246203875c01E
                              (param_2,local_b8,iVar1);
            if (cVar5 != '\0') goto LAB_00372fab;
            _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_98,param_2);
            if (cStack_50 != '%') goto LAB_00373069;
          } while (*(int *)(param_2 + 0xc0) != 0x110000);
        }
        else {
          do {
            cVar5 = _ZN4just5lexer5Lexer16rest_starts_with17hd2b5246203875c01E(param_2,pcVar7,iVar1)
            ;
            if (cVar5 != '\0') goto LAB_00372fab;
            _ZN4just5lexer5Lexer7advance17hab928493b22c646aE(&local_98,param_2);
            if (cStack_50 != '%') goto LAB_00373069;
          } while (*(int *)(param_2 + 0xc0) != 0x110000);
        }
      }
      local_98 = 0x8000000000000048;
      if (cVar2 == '\0') {
        local_98 = 0x8000000000000046;
      }
      _ZN4just5lexer5Lexer5error17h92eb8a4dd6b17c78E(param_1,param_2,&local_98);
      return;
    }
  }
LAB_00373069:
  param_1[8] = local_58;
  param_1[9] = CONCAT71(uStack_4f,cStack_50);
  param_1[6] = local_68;
  param_1[7] = uStack_60;
  param_1[4] = local_78;
  param_1[5] = uStack_70;
  param_1[2] = local_88;
  param_1[3] = uStack_80;
  *param_1 = local_98;
  param_1[1] = uStack_90;
  return;
LAB_00372fab:
  if ((cVar2 != '\0') && (local_b8 = pcVar8, ((uint)extraout_RDX & 0xff) == 2)) {
    local_b8 = pcVar7;
  }
  _ZN4just5lexer5Lexer11presume_str17hf90f47e4eeb23e64E(&local_98,param_2,local_b8,iVar1);
  if (cStack_50 == '%') {
    uVar9 = 0x21;
    if (cVar2 == '\0') {
      uVar9 = 3;
    }
    _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_2,uVar9);
    *(undefined *)(param_1 + 9) = 0x25;
    return;
  }
  goto LAB_00373069;
}