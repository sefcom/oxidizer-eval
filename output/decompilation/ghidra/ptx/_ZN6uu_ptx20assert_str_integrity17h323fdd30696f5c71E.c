undefined8
_ZN6uu_ptx20assert_str_integrity17h323fdd30696f5c71E(ulong param_1,ulong param_2,ulong param_3)

{
  undefined8 in_RAX;
  
  if (param_3 < param_2) {
                    /* WARNING: Subroutine does not return */
    _ZN4core9panicking5panic17h8c3a660c3523e4a4E
              (&DAT_0015ec5c,0x1c,&PTR_s_src_uu_ptx_src_ptx_rs_003ede08);
  }
  if (param_3 <= param_1) {
    return in_RAX;
  }
                    /* WARNING: Subroutine does not return */
  _ZN4core9panicking5panic17h8c3a660c3523e4a4E
            ("assertion failed: end <= s.len()",0x20,&PTR_s_src_uu_ptx_src_ptx_rs_003ede20);
}