
  fn uu_ptx::assert_str_integrity::h53447a84469126db(arg1: i64, arg2: i64, arg3: i64)

{
    if arg2 > arg3
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: beg <= endasse…");
        /* no return */
    }
    
    if arg3 <= arg1
    {
        return;
    }
    
    core::panicking::panic::h85d6dd562679980c("assertion failed: end <= s.len()");
    /* no return */
}
