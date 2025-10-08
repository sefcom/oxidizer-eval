void _ZN2fd3fmt21token_from_pattern_id17h335ee60225c838faE(ulong *param_1,int param_2)

{
  code *pcVar1;
  
  if (param_2 - 2U < 5) {
    *param_1 = (ulong)(param_2 - 2U) | 0x8000000000000000;
    return;
  }
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_0053ffc0)
            ("internal error: entered unreachable code",0x28,&PTR_s_src_fmt_mod_rs_005024b8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}