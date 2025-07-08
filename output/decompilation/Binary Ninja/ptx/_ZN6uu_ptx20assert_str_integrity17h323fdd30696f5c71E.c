
  void uu_ptx::assert_str_integrity::h323fdd30696f5c71(int64_t arg1, int64_t arg2, int64_t arg3)

{
    if (arg2 > arg3)
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: beg <= endasse…");
        /* no return */
    }
    
    if (arg3 <= arg1)
        return;
    
    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: end <= s.len()…");
    /* no return */
}
