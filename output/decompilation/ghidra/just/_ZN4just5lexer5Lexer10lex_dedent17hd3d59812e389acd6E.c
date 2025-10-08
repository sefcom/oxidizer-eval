void _ZN4just5lexer5Lexer10lex_dedent17hd3d59812e389acd6E(long param_1)

{
  code *pcVar1;
  long local_40 [7];
  
  local_40[0] = *(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0xb8);
  if (local_40[0] == 0) {
    _ZN4just5lexer5Lexer5token17h8b86862a20389d16E(param_1,0x11);
    if (*(long *)(param_1 + 0x10) != 0) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -1;
    }
    *(undefined2 *)(param_1 + 0xc4) = 0;
    return;
  }
  local_40[1] = 0;
  (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_00566218)
            (0,local_40,&DAT_001692d0,local_40 + 1,&PTR_DAT_005304e8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}