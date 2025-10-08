
  uint64_t zoxide::db::stream::Stream::filter_by_keywords::hfa6dd4ec6611dd54(int64_t arg1, int64_t arg2, int64_t arg3, uint32_t arg4[0x4] @ zmm0, char arg5[0x10] @ zmm1, uint128_t arg6 @ zmm2)

{
    int64_t r13;
    
    if (!arg2)
        r13 = 1;
    else
    {
        int64_t r12_1 = arg2 * 3;
        void var_58;
        zoxide::util::to_lowercase::h601373cb57afac0c(&var_58, arg3, arg4, arg5, arg6);
        char* var_50;
        char* r14_1 = var_50;
        int64_t var_48;
        int64_t rbx_1 = var_48;
        char rax_1;
        int64_t rdx_2;
        rax_1 = core::str::_$LT$impl$u20$str$GT$::rfind::h2498f8c77f23dca1(r14_1, rbx_1, 
            arg1 + (r12_1 << 3) - 0x18);
        
        if (!(rax_1 & 1))
        {
            r13 = 0;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_58);
        }
        else
        {
            int64_t r15_1 = rdx_2;
            int64_t r12_3 = *((r12_1 << 3) + arg1 - 8) + rdx_2;
            void* rax_4;
            int64_t rdx_4;
            rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r12_3, r14_1, rbx_1);
            
            if (!rax_4)
            {
                r15_1 = rbx_1;
                label_4915f2:
                core::str::slice_error_fail::h1a2885084e28d077(r14_1, rbx_1, r12_3, r15_1);
                /* no return */
            }
            
            if (!core::str::pattern::Pattern::is_contained_in::h6661695b4151bb2c(rax_4, rdx_4))
            {
                char* rax_7;
                int64_t rdx_6;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_1, r14_1, rbx_1);
                
                if (!rax_7)
                {
                    r12_3 = 0;
                    goto label_4915f2;
                }
                
                int64_t var_40 = arg1;
                void* var_38_1 = arg1 + (r12_1 << 3) - 0x18;
                r12_3 = 0;
                
                while (true)
                {
                    rbx_1 = rdx_6;
                    r14_1 = rax_7;
                    void* rax_8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hfecb16f7008b4458(&var_40);
                    r13 = !rax_8;
                    
                    if (!rax_8)
                        break;
                    
                    char rax_9;
                    int64_t rdx_8;
                    rax_9 = core::str::_$LT$impl$u20$str$GT$::rfind::h2498f8c77f23dca1(r14_1, 
                        rbx_1, rax_8);
                    
                    if (!(rax_9 & 1))
                        break;
                    
                    r15_1 = rdx_8;
                    rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx_8, r14_1, rbx_1);
                    
                    if (!rax_7)
                        goto label_4915f2;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_58);
            }
            else
            {
                r13 = 0;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_58);
            }
        }
    }
    
    return r13;
}
