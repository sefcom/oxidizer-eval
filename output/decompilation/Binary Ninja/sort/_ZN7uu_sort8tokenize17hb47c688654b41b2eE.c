
  int64_t uu_sort::tokenize::hb47c688654b41b2e(int64_t arg1, int64_t arg2, int32_t arg3, int64_t* arg4)

{
    if (arg4[2])
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: token_buffer.i…");
        /* no return */
    }
    
    if (arg3 != 0x110000)
        /* tailcall */
        return uu_sort::tokenize_with_separator::hde6e77d93de0c763(arg1, arg2, arg3, arg4);
    
    /* tailcall */
    return uu_sort::tokenize_default::hbd8e160b62a3efd1(arg1, arg2, arg4);
}
