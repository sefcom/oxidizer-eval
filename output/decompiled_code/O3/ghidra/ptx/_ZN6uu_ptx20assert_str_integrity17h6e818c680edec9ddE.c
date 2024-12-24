undefined8 __rustcall uu_ptx::assert_str_integrity(ulong param_1,ulong param_2,ulong param_3)

{
  undefined8 in_RAX;
  
  if (param_3 < param_2) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic(&DAT_0015ed6c,0x1c,&DAT_003ee6d0);
  }
  if (param_3 <= param_1) {
    return in_RAX;
  }
                    /* WARNING: Subroutine does not return */
  core::panicking::panic("assertion failed: end <= s.len()",0x20,&DAT_003ee6e8);
}