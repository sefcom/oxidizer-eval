
  int64_t uu_stat::print_str::h6ec1c07eb7d5dc3a(char* arg1, int64_t arg2, bool arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    int64_t rbx = arg2;
    char* r14 = arg1;
    
    if ((arg6 < arg2 & arg5 == 2) == 1)
    {
        char* rax_1;
        int64_t rdx_1;
        rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg6, r14, rbx);
        
        if (!rax_1)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r14, rbx, 0, arg6);
            /* no return */
        }
        
        rbx = rdx_1;
        r14 = rax_1;
    }
    
    /* tailcall */
    return uu_stat::pad_and_print::h4c659c1797f3ded6(r14, rbx, arg3, arg4, 1);
}
