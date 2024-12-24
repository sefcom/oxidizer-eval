undefined  [16] __rustcall uu_cut::matcher::ExactMatcher::new(undefined8 param_1,long param_2)

{
  undefined auVar1 [16];
  
  if (param_2 != 0) {
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("assertion failed: !needle.is_empty()src/uu/cut/src/matcher.rssrc/uu/cut/src/searcher.rs"
             ,0x24,&DAT_0022a1d0);
}