undefined  [16]
_ZN6uu_cut7matcher12ExactMatcher3new17h393e805b97031375E(undefined8 param_1,long param_2)

{
  undefined auVar1 [16];
  
  if (param_2 != 0) {
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  _ZN4core9panicking5panic17h8c3a660c3523e4a4E
            ("assertion failed: !needle.is_empty()src/uu/cut/src/matcher.rssrc/uu/cut/src/searcher.rs"
             ,0x24,&DAT_00229180);
}