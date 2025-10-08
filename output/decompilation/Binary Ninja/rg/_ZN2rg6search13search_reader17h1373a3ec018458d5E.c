
  int64_t rg::search::search_reader::h1373a3ec018458d5(void*** arg1, int64_t arg2, int32_t* arg3, int64_t* arg4, int64_t arg5)

{
    int64_t var_1d0 = arg2;
    int64_t rdx = *arg4;
    int64_t rax = 0;
    
    if (rdx >= 1)
        rax = rdx - 1;
    
    void var_150;
    int128_t var_a8;
    int128_t var_88;
    int64_t var_78;
    
    if (!rax)
    {
        grep_printer::standard::Standard$LT$W$GT$::sink_with_path::h8152d58051ad7157(&var_150, 
            arg4, &var_1d0, arg5);
        void** rax_2;
        int32_t rdx_7;
        rax_2 = grep_searcher::searcher::Searcher::search_reader::ha689e981d947947a(arg3, &var_1d0, 
            &arg_8, &var_150);
        
        if (!rax_2)
        {
            int128_t var_1c8;
            int128_t var_1b8;
            int128_t var_1a8;
            int64_t var_198;
            int32_t var_70;
            
            if (var_70 != 0x3b9aca00)
            {
                var_198 = var_78;
                var_1a8 = var_88;
                int128_t var_98;
                var_1b8 = var_98;
                var_1c8 = var_a8;
                int32_t var_6c;
                rdx_7 = var_6c;
            }
            
            arg1[6] = var_198;
            *(arg1 + 0x20) = var_1a8;
            *(arg1 + 0x10) = var_1b8;
            *arg1 = var_1c8;
            arg1[7] = var_70;
            *(arg1 + 0x3c) = rdx_7;
            int64_t var_30;
            arg1[8] = var_30;
        }
        else
        {
            *arg1 = rax_2;
            arg1[7] = 0x3b9aca01;
        }
        
        return core::ptr::drop_in_place$LT$grep_printer..standard..StandardSink$LT$$RF$$RF$grep_regex..matcher..RegexMatcher$C$termcolor..Buffer$GT$$GT$::hbaea639639eab715(&var_150);
    }
    
    int64_t* rdi = &var_150;
    int64_t* rdx_2 = &var_1d0;
    int128_t var_d8;
    int128_t var_c8;
    int128_t var_b8;
    
    if (rax != 1)
    {
        grep_printer::json::JSON$LT$W$GT$::sink_with_path::hb29925006a44c88f(rdi, &arg4[1], rdx_2, 
            arg5);
        void** rax_3 = grep_searcher::searcher::Searcher::search_reader::hee1d89112413402e(arg3, 
            &var_1d0, &arg_8, &var_150);
        
        if (!rax_3)
        {
            *(arg1 + 0x30) = var_a8;
            *(arg1 + 0x20) = var_b8;
            *(arg1 + 0x10) = var_c8;
            *arg1 = var_d8;
            arg1[8] = var_78;
        }
        else
        {
            *arg1 = rax_3;
            arg1[7] = 0x3b9aca01;
        }
        
        return core::ptr::drop_in_place$LT$grep_printer..json..JSONSink$LT$$RF$$RF$grep_regex..matcher..RegexMatcher$C$termcolor..Buffer$GT$$GT$::hb4dc6679c7e10724(&var_150);
    }
    
    grep_printer::summary::Summary$LT$W$GT$::sink_with_path::hfb849d1c20c4f3d2(rdi, &arg4[1], 
        rdx_2, arg5);
    void** rax_1;
    int32_t rdx_4;
    rax_1 = grep_searcher::searcher::Searcher::search_reader::h70421e5c5e1d7301(arg3, &var_1d0, 
        &arg_8, &var_150);
    
    if (!rax_1)
    {
        uint32_t rax_5 = *(var_b8 + 0x72);
        int128_t var_188;
        int128_t var_178;
        int128_t var_168;
        int64_t var_158;
        int32_t rcx_6;
        
        if (rax_5 == 3 || rax_5 == 5)
        {
            rax_5 = !var_88;
            rcx_6 = var_c8;
            
            if (rcx_6 != 0x3b9aca00)
            {
                label_658737:
                var_158 = *var_d8[8];
                int128_t var_e0;
                var_168 = var_e0;
                int128_t var_f0;
                var_178 = var_f0;
                int128_t var_100;
                var_188 = var_100;
                rdx_4 = *var_c8[4];
            }
        }
        else
        {
            rax_5 = var_88;
            rcx_6 = var_c8;
            
            if (rcx_6 != 0x3b9aca00)
                goto label_658737;
        }
        
        arg1[6] = var_158;
        *(arg1 + 0x20) = var_168;
        *(arg1 + 0x10) = var_178;
        *arg1 = var_188;
        arg1[7] = rcx_6;
        *(arg1 + 0x3c) = rdx_4;
        arg1[8] = rax_5;
    }
    else
    {
        *arg1 = rax_1;
        arg1[7] = 0x3b9aca01;
    }
    
    return core::ptr::drop_in_place$LT$grep_printer..summary..SummarySink$LT$$RF$$RF$grep_regex..matcher..RegexMatcher$C$termcolor..Buffer$GT$$GT$::h43ababb217c3d4a6(&var_150);
}
