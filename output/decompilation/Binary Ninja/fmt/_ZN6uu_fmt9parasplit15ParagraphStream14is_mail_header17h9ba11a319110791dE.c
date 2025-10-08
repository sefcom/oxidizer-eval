
  int64_t uu_fmt::parasplit::ParagraphStream::is_mail_header::h9ba11a319110791d(void* arg1)

{
    if (!*(arg1 + 0x18))
    {
        char* rbx_1 = *(arg1 + 8);
        int64_t r14_1 = *(arg1 + 0x10);
        
        if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hb830fba2111df73f(rbx_1, 
                r14_1, "From fatal: expected word not to…", 5))
            return 1;
        
        char rax_2;
        int64_t rdx_1;
        rax_2 = core::str::_$LT$impl$u20$str$GT$::find::hdd5d4e14db394534(rbx_1, r14_1);
        
        if ((rdx_1 & rax_2) == 1)
        {
            int64_t rax_3;
            int64_t rdx_3;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx_1, rbx_1, r14_1);
            
            if (!rax_3)
            {
                core::str::slice_error_fail::h1a2885084e28d077(rbx_1, r14_1, 0, rdx_1);
                /* no return */
            }
            
            int64_t var_28 = rax_3;
            int64_t var_20 = rdx_3 + rax_3;
            /* tailcall */
            return _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h11ae78aea6a48c46(core::iter::traits::iterator::Iterator::try_fold::hfc019a86165eac7f(&var_28));
        }
    }
    
    return 0;
}
