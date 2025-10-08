void _ZN7uu_head32head_backwards_without_seek_file17hd1f6d04c3bb08f89E
               (undefined8 param_1,long *param_2)

{
  code *pcVar1;
  
  if (*param_2 == 1) {
    _ZN7uu_head21read_but_last_n_lines17hca44822cc706d375E
              (param_1,param_2[1],*(undefined *)((long)param_2 + 0x2b));
    return;
  }
  if ((int)*param_2 == 3) {
    _ZN7uu_head21read_but_last_n_bytes17hc9aa98861e356a8aE(param_1,param_2[1]);
    return;
  }
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_001fe820)
            ("internal error: entered unreachable code",0x28,&PTR_s_src_uu_head_src_head_rs_001f7d18
            );
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}