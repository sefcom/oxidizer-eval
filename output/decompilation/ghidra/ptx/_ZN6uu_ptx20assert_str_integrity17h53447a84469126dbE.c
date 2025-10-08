undefined8
_ZN6uu_ptx20assert_str_integrity17h53447a84469126dbE(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 in_RAX;
  undefined8 uVar2;
  
  if (param_3 < param_2) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_003801f8)
              ("assertion failed: beg <= end",0x1c,&PTR_s_src_uu_ptx_src_ptx_rs_003518f8);
  }
  else if (param_3 <= param_1) {
    return in_RAX;
  }
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_003801f8)
            ("assertion failed: end <= s.len()",0x20,&PTR_s_src_uu_ptx_src_ptx_rs_00351910);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}