
  int128_t* bat::line_range::LineRanges::all::h09bcc01fc053eff0(int128_t* arg1)

{
    uint64_t s = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x20, 0);
    
    if (!s)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    __builtin_memset(s, 0, 0x18);
    *(s + 0x18) = -1;
    int64_t var_20 = 1;
    uint64_t s_1 = s;
    int64_t var_10 = 1;
    bat::line_range::LineRanges::from::h4ce85643fa8989ac(arg1, &var_20);
    return arg1;
}
