
  int512_t alacritty::display::Preedit::new::hbdf2538428561226(int128_t* arg1, int128_t* arg2, int32_t* arg3, int64_t arg4 @ rax, int64_t arg5 @ r12)

{
    int64_t var_28 = arg5;
    int64_t var_38 = arg4;
    int128_t* r15 = arg3;
    int64_t rcx;
    
    if (*arg3 != 1)
        rcx = 0;
    else
    {
        int64_t r12 = *(r15 + 8);
        int64_t rbp_1 = r15[1];
        char* r13_1 = *(arg2 + 8);
        int64_t rdx = arg2[1];
        void* rax;
        void* rdx_1;
        rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r12, r13_1, rdx);
        
        if (!rax)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r13_1, rdx, r12, rdx);
            /* no return */
        }
        
        arg5 = core::iter::traits::iterator::Iterator::fold::h3d1978069ee83a65(rax);
        void* rax_2;
        void* rdx_4;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbp_1, r13_1, rdx);
        
        if (!rax_2)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r13_1, rdx, rbp_1, rdx);
            /* no return */
        }
        
        arg4 = core::iter::traits::iterator::Iterator::fold::h3d1978069ee83a65(rax_2);
        rcx = 1;
    }
    
    arg1[4] = arg2[1];
    arg1[3] = *arg2;
    int128_t result = *r15;
    *arg1 = result;
    arg1[1] = r15[1];
    *(arg1 + 0x18) = rcx;
    arg1[2] = arg5;
    *(arg1 + 0x28) = arg4;
    return result;
}
