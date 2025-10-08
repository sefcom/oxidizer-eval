
  fn uu_sort::tokenize::h1a0db68099bd818a(arg1: i64, arg2: i64, arg3: i32, arg4: *mut i64) -> i64

{
    if arg4[2] != 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: token_buffer.i…");
        /* no return */
    }
    
    if arg3 != 0x110000
    {
        /* tailcall */
        return uu_sort::tokenize_with_separator::he3a58287ffd73c4e(arg1, arg2, arg3, arg4);
    }
    
    /* tailcall */
    uu_sort::tokenize_default::h6d5287f081d7f5ed(arg1, arg2, arg4)
}
