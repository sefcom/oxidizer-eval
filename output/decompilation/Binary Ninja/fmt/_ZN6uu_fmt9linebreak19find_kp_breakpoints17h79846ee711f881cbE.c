
  int64_t uu_fmt::linebreak::find_kp_breakpoints::h79846ee711f881cb(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    int64_t var_d0;
    core::iter::traits::iterator::Iterator::peekable::h8afc4466af8768bc(&var_d0, arg2, arg3);
    void* s = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x28);
    
    if (!s)
    {
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
        /* no return */
    }
    
    int64_t rcx = arg4[4];
    __builtin_memset(s, 0, 0x18);
    *(s + 0x18) = rcx;
    *(s + 0x20) = 0;
    *(s + 0x24) = 0;
    void var_1a8;
    alloc::slice::hack::into_vec::heda36ef041044304(&var_1a8, s, 1);
    int64_t* rax = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8);
    
    if (!rax)
    {
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
        /* no return */
    }
    
    *rax = 0;
    void var_120;
    alloc::slice::hack::into_vec::h3287efa8d919cd9f(&var_120, rax, 1);
    int64_t var_180 = 0;
    int64_t var_178 = 8;
    int64_t var_170 = 0;
    void* rax_1 = *arg4;
    int64_t rcx_1 = *(rax_1 + 0x30);
    int64_t rdi_3 = *(rax_1 + 0x38);
    int64_t r14_1 = rcx_1 - rdi_3;
    int64_t rax_3 = core::cmp::max_by::h34a806462d46b061(rdi_3, r14_1 + 1) - r14_1;
    int64_t var_168 = 0;
    int64_t var_160 = 8;
    int64_t var_158 = 0;
    char rax_4 = arg4[6];
    int64_t rax_5 = arg4[5];
    bool rbx_1 = false;
    void** const var_150 = &data_526870;
    int64_t var_190 = 0;
    int64_t var_1b0_1;
    int64_t rbx_2;
    int64_t rsi_6;
    
    while (true)
    {
        int64_t* var_c8;
        int64_t* r14_2 = var_c8;
        bool cond:0_1 = var_d0;
        var_d0 = 0;
        void var_c0;
        
        if (!cond:0_1)
            r14_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7b82053f9b8098c(&var_c0);
        
        int64_t var_1a0;
        int64_t var_198;
        int64_t var_118;
        int64_t var_110;
        
        if (!r14_2)
        {
            uu_fmt::linebreak::build_best_path::h4613d5d21e8bb56e(arg1, var_1a0, var_198, var_118, 
                var_110);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_fmt..linebreak..LineBreak$GT$$GT$::hc1a93e97adcb19f9(&var_168);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h8af847b80d99ba2c(
                &var_180);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h8af847b80d99ba2c(
                &var_120);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_fmt..linebreak..LineBreak$GT$$GT$::hc1a93e97adcb19f9(&var_1a8);
        }
        
        void* r15_1 =
            *core::option::Option$LT$T$GT$::get_or_insert_with::hcbe477171ba51fdb(&var_d0, &var_c0);
        uint64_t rax_9;
        rax_9 = 1;
        
        if (r15_1 && !*(r15_1 + 0x38))
        {
            if (!*(r15_1 + 0x3a))
                rax_9 = 0;
            else
                rax_9 = *(r14_2 + 0x39);
        }
        
        int64_t rcx_3 = 0;
        
        if (*(r14_2 + 0x3a) | rax_4)
            rcx_3 = (rbx_1 & 1) + 1;
        
        int64_t var_158_1 = 0;
        int64_t var_170_1 = 0;
        int64_t var_e0 = var_118;
        int64_t var_d8_1 = var_118 + (var_110 << 3);
        int64_t* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6091de4c9f40793f(&var_e0);
        int64_t rax_6;
        
        if (!i)
        {
            var_1b0_1 = 0;
            
            if (var_170_1)
                rax_6 = core::cmp::max_by::h71cc3e7b7be030ce(0x7fffffffffffffff);
            else
            {
                label_4bbfbd:
                rsi_6 = var_198;
                
                if (var_1b0_1 >= rsi_6)
                    break;
                
                int64_t rdx_5 = var_1b0_1 * 5;
                void var_58;
                uu_fmt::linebreak::restart_active_breaks::h2b91feff430673ac(&var_58, rax_1, rax_5, 
                    *(var_1a0 + (rdx_5 << 3) + 0x18), *(var_1a0 + (rdx_5 << 3) + 0x25), var_1b0_1, 
                    r14_2, rcx_3, rax_3);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h287ff18087d76cdb(&var_180, var_198);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf091c64d56a1d8fa(&var_1a8, &var_58);
                rax_6 = 0;
            }
        }
        else
        {
            var_1b0_1 = 0;
            int64_t r13_1 = 0x7fffffffffffffff;
            int64_t var_140_1 = 0x7fffffffffffffff;
            
            do
            {
                rbx_2 = *i;
                rsi_6 = var_198;
                
                if (rbx_2 >= rsi_6)
                    goto label_4bc0bb;
                
                int64_t rcx_6 = r13_1;
                int64_t rbp_1 = rbx_2 * 5;
                r13_1 = *(var_1a0 + (rbp_1 << 3) + 0x10) - var_190;
                int64_t rdx = *(var_1a0 + (rbp_1 << 3) + 0x18);
                *(var_1a0 + (rbp_1 << 3) + 0x10) = r13_1;
                bool cond:2_1 = r13_1 < rcx_6;
                
                if (r13_1 >= rcx_6)
                    r13_1 = rcx_6;
                
                int64_t rax_16 = var_1b0_1;
                
                if (cond:2_1)
                    rax_16 = rbx_2;
                
                var_1b0_1 = rax_16;
                int64_t r14_3 = r14_2[5];
                void* r15_3 = var_1a0 + (rbp_1 << 3);
                int64_t r12_3 = uu_fmt::linebreak::BreakArgs::compute_width::hfc2bd23d7c87d18b(
                    rax_1, r14_2, rdx, *(var_1a0 + (rbp_1 << 3) + 0x25)) + rcx_3 + r14_3
                    + *(r15_3 + 0x18);
                
                if (r12_3 <= rcx_1)
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h287ff18087d76cdb(&var_180, rbx_2);
                    *(r15_3 + 0x25) = 0;
                    *(r15_3 + 0x18) = r12_3;
                    
                    if (r12_3 >= rax_3)
                    {
                        int64_t rax_20;
                        uint32_t zmm0_1[0x4];
                        
                        if (!r15_1)
                        {
                            zmm0_1 = {0};
                            rax_20 = 0;
                        }
                        else
                            zmm0_1 = uu_fmt::linebreak::compute_demerits::he468f5733cc0155b(
                                rdi_3 - r12_3, r14_1, r14_3, *(r15_3 + 0x20));
                        
                        if (rax_20 <= 0x5af3107a3fff)
                        {
                            int64_t rcx_8 = *(r15_3 + 0x10);
                            int64_t r14_4 = rcx_8 + rax_20;
                            
                            if (r14_4 < var_140_1)
                            {
                                bool cond:3_1 = rax_20 < 0;
                                rax_20 = !rax_20;
                                
                                if (rcx_8 >= 0)
                                    rax_20 &= rcx_8;
                                
                                if (rcx_8 < 0 || !(cond:3_1 | rax_20))
                                {
                                    int64_t var_b0 = rbx_2;
                                    int64_t* var_a8_1 = r14_2;
                                    int16_t var_8c_1 = 0x100;
                                    int64_t var_a0_1 = r14_4;
                                    uint32_t var_90_1 = zmm0_1[0];
                                    int64_t var_98_1 = rax_5;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf091c64d56a1d8fa(&var_168, 
                                        &var_b0);
                                    var_140_1 = r14_4;
                                }
                            }
                        }
                    }
                }
                
                i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6091de4c9f40793f(&var_e0);
            } while (i);
            
            if (var_158_1)
            {
                int64_t var_158_2 = var_158_1 - 1;
                int64_t rdx_3 = (var_158_1 - 1) * 5;
                char rax_23 = *(var_160 + (rdx_3 << 3) + 0x25);
                
                if (rax_23 != 2)
                {
                    uint32_t (* rcx_10)[0x4] = var_160 + (rdx_3 << 3);
                    int16_t rdx_4 = *(rcx_10 + 0x26);
                    int64_t var_6b_1 = *(rcx_10 + 0x1d);
                    int128_t var_78_1 = rcx_10[1];
                    uint32_t var_88[0x4] = *rcx_10;
                    char var_63_1 = rax_23;
                    int16_t var_62_1 = rdx_4;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h287ff18087d76cdb(&var_180, var_198);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hf091c64d56a1d8fa(&var_1a8, &var_88);
                }
            }
            
            if (!var_170_1)
                goto label_4bbfbd;
            
            rax_6 = core::cmp::max_by::h71cc3e7b7be030ce(r13_1);
        }
        
        var_190 = rax_6;
        core::intrinsics::typed_swap::h941b9e9a3023958d(&var_120, &var_180);
        rbx_1 = rax_9;
    }
    
    rbx_2 = var_1b0_1;
    var_150 = &data_526858;
    label_4bc0bb:
    core::panicking::panic_bounds_check::h25a5330941572dd1(rbx_2, rsi_6);
    /* no return */
}
