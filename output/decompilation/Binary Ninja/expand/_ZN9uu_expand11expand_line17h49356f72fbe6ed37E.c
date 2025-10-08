
  ssize_t uu_expand::expand_line::h49356f72fbe6ed37(void* arg1, int64_t* arg2, int64_t* arg3, int64_t arg4, void* arg5)

{
    uint64_t rbx;
    uint64_t var_30 = rbx;
    int64_t rcx = *(arg1 + 0x10);
    ssize_t rax_18;
    
    if (rcx)
    {
        char rax_1 = *(arg5 + 0x49);
        char* rax_3 = *(arg1 + 8);
        char rax_4 = *(arg5 + 0x4a);
        char* rdx = *(arg5 + 0x38);
        int64_t var_58_1 = *(arg5 + 0x40);
        uint32_t rax_5;
        rax_5 = *(arg5 + 0x48) ^ 1;
        char var_ab_1 = rax_5;
        rax_5 = 1;
        uint32_t var_9c_1 = rax_5;
        int64_t var_98_1 = 0;
        int64_t r15_1 = 0;
        int64_t var_a8_1 = rcx;
        
        do
        {
            char rsi = rax_3[r15_1];
            int64_t r13_1;
            int32_t var_78;
            int64_t var_70;
            uint64_t var_68;
            uint64_t rax_7;
            int64_t rdx_1;
            char* rdx_5;
            int32_t rbx_2;
            uint64_t rsi_4;
            int64_t rdi_2;
            
            if (!rax_1)
            {
                rdx_1 = rsi != 8;
                rax_7 = 1;
                
                if (rsi != 9)
                {
                    int32_t rbx_1;
                    rbx_1 = rdx_1;
                    rbx_2 = rbx_1 * 2;
                    label_45d594:
                    r13_1 = 1;
                    label_45d59a:
                    
                    if (rbx_2 == 1)
                        goto label_45d627;
                    
                    if (rbx_2 == 2)
                        goto label_45d5a8;
                    
                    int64_t rdx_15 = var_98_1 - 1;
                    
                    if (var_98_1 < 1)
                        rdx_15 = 0;
                    
                    var_98_1 = rdx_15;
                    goto label_45d5b7;
                }
                
                r13_1 = 1;
                label_45d627:
                uint64_t rax_10 =
                    uu_expand::next_tabstop::hf3e7dbb48d26e5ad(arg3, arg4, var_98_1, rax_4);
                var_98_1 += rax_10;
                
                if (!((var_9c_1 | var_ab_1) & 1))
                {
                    int64_t rax_14;
                    uint64_t rdx_11;
                    rax_14 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h04d82ad3fffd2dd8(r15_1, r15_1 + r13_1, rax_3, var_a8_1);
                    rbx = arg2[2];
                    
                    if (rdx_11 >= *arg2 - rbx)
                    {
                        rax_18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hecf72c601b7ca3f8(arg2, rax_14, rdx_11);
                        
                        if (rax_18)
                            return rax_18;
                    }
                    else
                    {
                        memcpy(arg2[1] + rbx, rax_14, rdx_11);
                        arg2[2] = rdx_11 + rbx;
                    }
                    
                    var_9c_1 = 0;
                    rcx = var_a8_1;
                }
                else
                {
                    rcx = var_58_1;
                    
                    if (rax_10 <= rcx)
                    {
                        rdi_2 = 0;
                        rsi_4 = rax_10;
                        rdx_5 = rdx;
                        goto label_45d5d5;
                    }
                    
                    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h6af23d6fde4d821e(&var_78, 
                        rax_10);
                    int64_t rax_11 = var_78;
                    rbx = arg2[2];
                    int64_t rbp_1;
                    
                    if (var_68 >= *arg2 - rbx)
                    {
                        rbp_1 = var_70;
                        ssize_t rax_19 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hecf72c601b7ca3f8(arg2, var_70, var_68);
                        
                        if (rax_19)
                        {
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec05db6bc18b7f0(rax_11, rbp_1);
                            return rax_19;
                        }
                    }
                    else
                    {
                        rbp_1 = var_70;
                        memcpy(arg2[1] + rbx, var_70, var_68);
                        rbx += var_68;
                        arg2[2] = rbx;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec05db6bc18b7f0(
                        rax_11, rbp_1);
                    rcx = var_a8_1;
                }
            }
            else
            {
                int64_t r12_1;
                r12_1 = rsi < 0;
                r13_1 = 1;
                
                if (r12_1 + r15_1 + 1 <= rcx)
                {
                    char* rax_8;
                    int64_t rdx_3;
                    rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h04d82ad3fffd2dd8(r15_1, r12_1 + r15_1 + 1, rax_3, rcx);
                    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_78, rax_8, rdx_3);
                    
                    if (var_78 == 1)
                    {
                        rax_7 = 1;
                        rcx = var_a8_1;
                        goto label_45d5a8;
                    }
                    
                    int64_t var_40 = var_70;
                    int64_t var_38_1 = var_68 + var_70;
                    char rax_16;
                    int32_t rdx_13;
                    rax_16 =
                        core::str::validations::next_code_point::h4b26a3f38a1a709d(&var_40, rbx);
                    
                    if (!(rax_16 & 1))
                        rdx_13 = 0x110000;
                    
                    if (rdx_13 == 8)
                    {
                        rbx_2 = 0;
                        rax_7 = 0;
                        rcx = var_a8_1;
                        r13_1 = r12_1 + 1;
                        goto label_45d59a;
                    }
                    
                    rcx = var_a8_1;
                    
                    if (rdx_13 == 9)
                    {
                        rbx_2 = 1;
                        rax_7 = 0;
                        r13_1 = r12_1 + 1;
                        goto label_45d59a;
                    }
                    
                    rax_7 = 1;
                    rbx_2 = 2;
                    
                    if (rdx_13 == 0x110000)
                        goto label_45d594;
                    
                    if (rdx_13 < 0x7f)
                    {
                        rax_7 = rdx_13 >= 0x20;
                        r13_1 = r12_1 + 1;
                    }
                    else if (rdx_13 < 0xa0)
                    {
                        rax_7 = 0;
                        r13_1 = r12_1 + 1;
                    }
                    else
                    {
                        rcx = var_a8_1;
                        rax_7 = unicode_width::tables::lookup_width::h2b8e7fd08bce4cb3(rdx_13);
                        r13_1 = r12_1 + 1;
                    }
                    
                    goto label_45d59a;
                }
                
                rax_7 = 1;
                label_45d5a8:
                var_98_1 += rax_7;
                label_45d5b7:
                rax_7 = rax_3[r15_1] == 0x20;
                uint32_t rdx_4;
                rdx_4 = var_9c_1 & rax_7;
                var_9c_1 = rdx_4;
                rsi_4 = r15_1 + r13_1;
                rdi_2 = r15_1;
                rdx_5 = rax_3;
                label_45d5d5:
                int64_t rax_9;
                uint64_t rdx_6;
                rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h04d82ad3fffd2dd8(rdi_2, rsi_4, rdx_5, rcx);
                rbx = arg2[2];
                
                if (rdx_6 >= *arg2 - rbx)
                {
                    rax_18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::hecf72c601b7ca3f8(arg2, rax_9, rdx_6);
                    rcx = var_a8_1;
                    
                    if (rax_18)
                        return rax_18;
                }
                else
                {
                    memcpy(arg2[1] + rbx, rax_9, rdx_6);
                    arg2[2] = rdx_6 + rbx;
                    rcx = var_a8_1;
                }
            }
            r15_1 += r13_1;
        } while (r15_1 < rcx);
    }
    
    rax_18 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::habf18e17bcf986f2(arg2);
    
    if (rax_18)
        return rax_18;
    
    *(arg1 + 0x10) = 0;
    return 0;
}
