
  fn uu_ptx::assert_str_integrity::h323fdd30696f5c71(arg1: i64, arg2: i64, arg3: i64)

{
    if arg2 > arg3
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: beg <= endasse…");
        /* no return */
    }
    
    if arg3 <= arg1
    {
        return;
    }
    
    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: end <= s.len()…");
    /* no return */
}
