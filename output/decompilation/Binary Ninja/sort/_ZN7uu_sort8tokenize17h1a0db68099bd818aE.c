
  int64_t uu_sort::tokenize::h1a0db68099bd818a(int64_t arg1, int64_t arg2, int32_t arg3, int64_t* arg4)

{
    if (arg4[2])
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: token_buffer.i…");
        /* no return */
    }
    
    if (arg3 != 0x110000)
        /* tailcall */
        return uu_sort::tokenize_with_separator::he3a58287ffd73c4e(arg1, arg2, arg3, arg4);
    
    /* tailcall */
    return uu_sort::tokenize_default::h6d5287f081d7f5ed(arg1, arg2, arg4);
}
