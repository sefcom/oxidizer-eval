
  void** uu_tac::buffer_tac_regex::ha3032000df62e130(int64_t arg1, int64_t arg2, void* arg3, void* arg4, char arg5)

{
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_58 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t var_90;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hffa1ef8784ad0549(&var_90, 
        0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_58));
    void** result;
    int64_t var_88;
    int64_t var_80;
    int64_t r13_1;
    
    if (!arg2)
    {
        r13_1 = 0;
        label_59faab:
        int64_t rax_5;
        uint64_t rdx_7;
        rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, r13_1, arg1, arg2);
        
        if (rdx_7 < var_90 - var_80)
        {
            memcpy(var_88 + var_80, rax_5, rdx_7);
            int64_t var_80_1 = rdx_7 + var_80;
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&var_90);
            return nullptr;
        }
        
        void** result_2 =
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(
            &var_90, rax_5, rdx_7);
        result = result_2;
        
        if (!result_2)
        {
            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&var_90);
            return nullptr;
        }
    }
    else
    {
        int64_t var_50;
        
        if (!arg5)
        {
            int64_t rbp_2 = arg2;
            int64_t r15_3 = arg2;
            int64_t rbx_2 = arg2;
            
            while (true)
            {
                rbx_2 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(rbx_2);
                int64_t rax_8;
                int64_t rdx_9;
                rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, rbp_2, arg1, arg2);
                regex::regex::bytes::Regex::find_at::h97f889983824a43e(&var_50, arg3, arg4, rax_8, 
                    rdx_9, rbx_2);
                
                if (!var_50)
                    r13_1 = r15_3;
                else
                {
                    int64_t var_40;
                    int64_t var_38;
                    r13_1 = var_38 - var_40 + rbx_2;
                    int64_t rax_9;
                    uint64_t rdx_12;
                    rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(r13_1, r15_3, arg1, arg2);
                    
                    if (rdx_12 >= var_90 - var_80)
                    {
                        void** result_3 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&var_90, rax_9, rdx_12);
                        result = result_3;
                        rbp_2 = rbx_2;
                        
                        if (result_3)
                            break;
                    }
                    else
                    {
                        memcpy(var_88 + var_80, rax_9, rdx_12);
                        var_80 += rdx_12;
                        rbp_2 = rbx_2;
                    }
                }
                
                r15_3 = r13_1;
                
                if (!rbx_2)
                    goto label_59faab;
            }
        }
        else
        {
            int64_t r15_1 = arg2;
            r13_1 = arg2;
            int64_t rbp_1 = arg2;
            
            while (true)
            {
                rbp_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::backward_unchecked::hafc0b4d583767e83(rbp_1);
                int64_t rax_3;
                int64_t rdx_2;
                rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, r15_1, arg1, arg2);
                regex::regex::bytes::Regex::find_at::h97f889983824a43e(&var_50, arg3, arg4, rax_3, 
                    rdx_2, rbp_1);
                
                if (var_50)
                {
                    int64_t rax_4;
                    uint64_t rdx_5;
                    rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(rbp_1, r13_1, arg1, arg2);
                    
                    if (rdx_5 < var_90 - var_80)
                    {
                        memcpy(var_88 + var_80, rax_4, rdx_5);
                        var_80 += rdx_5;
                        r13_1 = rbp_1;
                        r15_1 = rbp_1;
                    }
                    else
                    {
                        void** result_1 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&var_90, rax_4, rdx_5);
                        result = result_1;
                        r13_1 = rbp_1;
                        r15_1 = rbp_1;
                        
                        if (result_1)
                            break;
                    }
                }
                
                if (!rbp_1)
                    goto label_59faab;
            }
        }
    }
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&var_90);
    return result;
}
