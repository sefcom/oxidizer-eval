
  fn uu_sort::tokenize::hb47c688654b41b2e(arg1: i64, arg2: i64, arg3: i32, arg4: *mut i64) -> i64

{
    if arg4[2] != 0
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: token_buffer.i…");
        /* no return */
    }
    
    if arg3 != 0x110000
    {
        /* tailcall */
        return uu_sort::tokenize_with_separator::hde6e77d93de0c763(arg1, arg2, arg3, arg4);
    }
    
    /* tailcall */
    uu_sort::tokenize_default::hbd8e160b62a3efd1(arg1, arg2, arg4)
}
