
  int64_t uu_nice::is_prefix_of::h0ed73fde36564671(int64_t arg1, int64_t arg2, char* arg3, int64_t arg4, int64_t arg5)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t rbx = arg2;
    rax = arg2 < arg5;
    arg2 = arg2 > arg4;
    arg2 |= rax;
    
    if (arg2)
        return 0;
    
    char* rax_2;
    uint64_t rdx_1;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbx, arg3, arg4);
    
    if (rax_2)
        /* tailcall */
        return _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h33b9bdfe3107c6fa(rax_2, rdx_1, arg1, rbx);
    
    core::str::slice_error_fail::h1a2885084e28d077(arg3, arg4, 0, rbx);
    /* no return */
}
