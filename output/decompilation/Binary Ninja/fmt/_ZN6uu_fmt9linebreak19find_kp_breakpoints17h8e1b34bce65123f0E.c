
  int64_t uu_fmt::linebreak::find_kp_breakpoints::h8e1b34bce65123f0(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    uint64_t rbp;
    uint64_t var_8 = rbp;
    char var_d0;
    core::iter::traits::iterator::Iterator::peekable::h5f288455ab1c5fee(&var_d0, arg2, arg3);
    uint64_t s = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x28);
    
    if (!s)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    int64_t rax = arg4[4];
    __builtin_memset(s, 0, 0x18);
    *(s + 0x18) = rax;
    *(s + 0x20) = 0;
    *(s + 0x24) = 0;
    int64_t var_180 = 1;
    int64_t var_170 = 1;
    uint64_t rax_1 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 8);
    
    if (!rax_1)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *rax_1 = 0;
    int64_t var_130 = 1;
    int64_t var_120 = 1;
    int64_t var_168 = 0;
    int64_t var_160 = 8;
    int64_t var_158 = 0;
    void* rax_2 = *arg4;
    int64_t rdi_1 = *(rax_2 + 0x38);
    int64_t r14_2 = *(rax_2 + 0x30) - rdi_1;
    int64_t rax_4 = core::cmp::Ord::max::hec69546a31dcf558(rdi_1, r14_2 + 1) - r14_2;
    int64_t var_148 = 0;
    int64_t var_140 = 8;
    int64_t var_138 = 0;
    char rax_5 = arg4[6];
    int64_t rax_6 = arg4[5];
    int64_t var_150 = 0;
    void** const var_118 = &data_4f03b0;
    char rbx_1 = 0;
    int64_t var_198_1;
    int64_t rbx_2;
    
    while (true)
    {
        int32_t* var_c8;
        int32_t* r15_1 = var_c8;
        var_d0 = 0;
        void var_c0;
        
        if (!(var_d0 & 1))
            r15_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h686fc6b9d9a31eab(&var_c0);
        
        if (!r15_1)
        {
            uu_fmt::linebreak::build_best_path::h2478ba822abd2f37(arg1, s, var_170, rax_1, var_120);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_fmt..linebreak..LineBreak$GT$$GT$::h01ccd16f2d847b8d(var_148, var_140);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hd6f642ba435ff10e(
                var_168, var_160);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::hd6f642ba435ff10e(
                var_130, rax_1);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_fmt..linebreak..LineBreak$GT$$GT$::h01ccd16f2d847b8d(var_180, s);
        }
        
        void* rsi_3 =
            *core::option::Option$LT$T$GT$::get_or_insert_with::h63c7918c86c6958e(&var_d0, &var_c0);
        rbp = 1;
        
        if (rsi_3 && *(rsi_3 + 0x38) != 1)
        {
            if (*(rsi_3 + 0x3a) != 1)
                rbp = 0;
            else
                rbp = *(r15_1 + 0x39);
        }
        
        int64_t rdx_4 = 0;
        
        if (rax_5 & 1)
            rdx_4 = (rbx_1 & 1) + 1;
        
        if (rax_5 != *(r15_1 + 0x3a))
            rdx_4 = (rbx_1 & 1) + 1;
        
        int64_t var_138_1 = 0;
        int64_t var_158_1 = 0;
        int64_t r12_1 = 0x7fffffffffffffff;
        rbx_2 = 0;
        
        if (var_120)
        {
            int32_t var_1a4_1 = rbp;
            var_198_1 = var_170;
            int64_t i = 0;
            int64_t var_108_1 = 0x7fffffffffffffff;
            int64_t var_190_1 = 0;
            
            do
            {
                rbx_2 = *(rax_1 + i);
                
                if (rbx_2 >= var_198_1)
                    goto label_462226;
                
                int64_t rax_17 = r12_1;
                int64_t r15_3 = rbx_2 * 5;
                r12_1 = *(s + (r15_3 << 3) + 0x10) - var_150;
                int64_t rdx_5 = *(s + (r15_3 << 3) + 0x18);
                *(s + (r15_3 << 3) + 0x10) = r12_1;
                int64_t rcx_4 = var_190_1;
                
                if (r12_1 < rax_17)
                    rcx_4 = rbx_2;
                
                var_190_1 = rcx_4;
                
                if (r12_1 >= rax_17)
                    r12_1 = rax_17;
                
                int64_t r15_4 = s + (r15_3 << 3);
                int64_t rbp_4 = *(r15_1 + 0x28) + rdx_4 +
                    uu_fmt::linebreak::BreakArgs::compute_width::h78d96ea40f73ab18(rax_2, r15_1, 
                    rdx_5, *(s + (r15_3 << 3) + 0x25)) + *(r15_4 + 0x18);
                
                if (rbp_4 <= *(rax_2 + 0x30))
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h45fd097459a66f62(&var_168, rbx_2);
                    *(r15_4 + 0x25) = 0;
                    *(r15_4 + 0x18) = rbp_4;
                    
                    if (rbp_4 >= rax_4)
                    {
                        int64_t rax_22;
                        uint32_t zmm0_1[0x4];
                        
                        if (!rsi_3)
                        {
                            zmm0_1 = {0};
                            rax_22 = 0;
                            label_46200b:
                            int64_t rcx_6 = *(r15_4 + 0x10);
                            int64_t r15_5 = rcx_6 + rax_22;
                            
                            if (r15_5 < var_108_1)
                            {
                                bool cond:5_1 = rcx_6 > 0;
                                rcx_6 = rcx_6 < 0;
                                bool rdx_7 = cond:5_1 - rcx_6;
                                bool cond:6_1 = rax_22 > 0;
                                rax_22 = rax_22 < 0;
                                rcx_6 = cond:6_1;
                                rcx_6 -= rax_22;
                                
                                if (rdx_7 <= rcx_6)
                                {
                                    int64_t var_b0 = rbx_2;
                                    int32_t* var_a8_1 = r15_1;
                                    int16_t var_8c_1 = 0x100;
                                    int64_t var_a0_1 = r15_5;
                                    uint32_t var_90_1 = zmm0_1[0];
                                    int64_t var_98_1 = rax_6;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hd06750a8c7e97312(&var_148, 
                                        &var_b0);
                                    var_108_1 = r15_5;
                                }
                            }
                        }
                        else
                        {
                            zmm0_1 = uu_fmt::linebreak::compute_demerits::hbbee1174f2c8e20d(
                                *(rax_2 + 0x38) - rbp_4, r14_2, *(r15_1 + 0x28), *(r15_4 + 0x20));
                            
                            if (rax_22 <= 0x5af3107a3fff)
                                goto label_46200b;
                        }
                    }
                }
                
                i += 8;
            } while (var_120 << 3 != i);
            
            if (!var_138_1)
            {
                rbp = var_1a4_1;
                rbx_2 = var_190_1;
            }
            else
            {
                int64_t var_138_2 = var_138_1 - 1;
                int64_t rdx_10 = (var_138_1 - 1) * 5;
                char rax_27 = *(var_140 + (rdx_10 << 3) + 0x25);
                rbp = var_1a4_1;
                rbx_2 = var_190_1;
                
                if (rax_27 != 2)
                {
                    uint32_t (* rcx_8)[0x4] = var_140 + (rdx_10 << 3);
                    int16_t rdx_11 = *(rcx_8 + 0x26);
                    int64_t var_6b_1 = *(rcx_8 + 0x1d);
                    int128_t var_78_1 = rcx_8[1];
                    uint32_t var_88[0x4] = *rcx_8;
                    char var_63_1 = rax_27;
                    int16_t var_62_1 = rdx_11;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h45fd097459a66f62(&var_168, var_170);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hd06750a8c7e97312(&var_180, &var_88);
                }
            }
        }
        
        if (!var_158_1)
        {
            var_198_1 = var_170;
            
            if (rbx_2 >= var_170)
                break;
            
            int64_t rdx = rbx_2 * 5;
            void var_58;
            uu_fmt::linebreak::restart_active_breaks::h7c37ac9084c76f9e(&var_58, rax_2, rax_6, 
                *(s + (rdx << 3) + 0x18), *(s + (rdx << 3) + 0x25), rbx_2, r15_1, rdx_4, rax_4);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h45fd097459a66f62(&var_168, var_198_1);
            alloc::vec::Vec$LT$T$C$A$GT$::push::hd06750a8c7e97312(&var_180, &var_58);
            var_150 = 0;
        }
        else
            var_150 = core::cmp::Ord::max::hb4e4eb600e630cd2(r12_1);
        
        core::intrinsics::typed_swap_nonoverlapping::h77cfee96c4607c98(&var_130, &var_168);
        rbx_1 = rbp;
    }
    
    var_118 = &data_4f0368;
    label_462226:
    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx_2, var_198_1);
    /* no return */
}
