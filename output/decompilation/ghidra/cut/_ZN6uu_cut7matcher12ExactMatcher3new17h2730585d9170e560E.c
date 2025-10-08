undefined  [16]
_ZN6uu_cut7matcher12ExactMatcher3new17h2730585d9170e560E(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined auVar2 [16];
  
  if (param_2 != 0) {
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = param_1;
    return auVar2;
  }
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_001ffbb8)
            ("assertion failed: !needle.is_empty()",0x24,&PTR_s_src_uu_cut_src_matcher_rs_001f9180);
  pcVar1 = (code *)swi(3);
  auVar2 = (*pcVar1)();
  return auVar2;
}