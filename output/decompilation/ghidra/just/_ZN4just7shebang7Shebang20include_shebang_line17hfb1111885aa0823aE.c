ulong _ZN4just7shebang7Shebang20include_shebang_line17hfb1111885aa0823aE(void)

{
  char cVar1;
  ulong uVar2;
  undefined auVar3 [16];
  
  auVar3 = _ZN4just7shebang7Shebang20interpreter_filename17h587a19c89909ae82E();
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                    (auVar3._0_8_,auVar3._8_8_,"cmd",3);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hac1dd5ce3093f205E
                    (auVar3._0_8_,auVar3._8_8_,"cmd.exe",7);
  return uVar2 ^ 1;
}