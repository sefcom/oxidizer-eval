
  void uu_ptx::assert_str_integrity::h53447a84469126db(int64_t arg1, int64_t arg2, int64_t arg3)

{
    if (arg2 > arg3)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: beg <= endasse…");
        /* no return */
    }
    
    if (arg3 <= arg1)
        return;
    
    core::panicking::panic::h85d6dd562679980c("assertion failed: end <= s.len()");
    /* no return */
}
