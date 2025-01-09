undefined8 __rustcall uu_ptx::assert_str_integrity(ulong param_1,ulong param_2,ulong param_3)

{
  undefined8 in_RAX;
  
  if (param_3 < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0015ec5c,0x1c,&PTR_s_src_uu_ptx_src_ptx_rs_003ede08);
  }
  if (param_3 <= param_1) {
    return in_RAX;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic
            ("assertion failed: end <= s.len()",0x20,&PTR_s_src_uu_ptx_src_ptx_rs_003ede20);
}