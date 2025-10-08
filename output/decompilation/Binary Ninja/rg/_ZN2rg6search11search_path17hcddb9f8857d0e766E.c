
  int64_t rg::search::search_path::hcddb9f8857d0e766(void*** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4, int64_t arg5, int64_t arg6)

{
    int64_t var_1e0 = arg2;
    int64_t rdx = *arg4;
    int64_t rax = 0;
    
    if (rdx >= 1)
        rax = rdx - 1;
    
    void var_160;
    int128_t var_b8;
    int128_t var_98;
    int64_t var_88;
    
    if (!rax)
    {
        grep_printer::standard::Standard$LT$W$GT$::sink_with_path::h5d522d78077ff9a9(&var_160, 
            arg4, &var_1e0, arg5);
        void** rax_2;
        int32_t rdx_7;
        rax_2 = grep_searcher::searcher::Searcher::search_path::ha6aa29b536717390(arg3, &var_1e0, 
            arg5, arg6, &var_160);
        
        if (!rax_2)
        {
            int128_t var_1d8;
            int128_t var_1c8;
            int128_t var_1b8;
            int64_t var_1a8;
            int32_t var_80;
            
            if (var_80 != 0x3b9aca00)
            {
                var_1a8 = var_88;
                var_1b8 = var_98;
                int128_t var_a8;
                var_1c8 = var_a8;
                var_1d8 = var_b8;
                int32_t var_7c;
                rdx_7 = var_7c;
            }
            
            arg1[6] = var_1a8;
            *(arg1 + 0x20) = var_1b8;
            *(arg1 + 0x10) = var_1c8;
            *arg1 = var_1d8;
            arg1[7] = var_80;
            *(arg1 + 0x3c) = rdx_7;
            int64_t var_40;
            arg1[8] = var_40;
        }
        else
        {
            *arg1 = rax_2;
            arg1[7] = 0x3b9aca01;
        }
        
        return core::ptr::drop_in_place$LT$grep_printer..standard..StandardSink$LT$$RF$$RF$grep_regex..matcher..RegexMatcher$C$termcolor..Buffer$GT$$GT$::hbaea639639eab715(&var_160);
    }
    
    int64_t* rdi = &var_160;
    int64_t* rdx_2 = &var_1e0;
    int128_t var_e8;
    int128_t var_d8;
    int128_t var_c8;
    
    if (rax != 1)
    {
        grep_printer::json::JSON$LT$W$GT$::sink_with_path::ha46c69d78c81d5a3(rdi, &arg4[1], rdx_2, 
            arg5);
        void** rax_3 = grep_searcher::searcher::Searcher::search_path::h2befddfdef6aaf11(arg3, 
            &var_1e0, arg5, arg6, &var_160);
        
        if (!rax_3)
        {
            *(arg1 + 0x30) = var_b8;
            *(arg1 + 0x20) = var_c8;
            *(arg1 + 0x10) = var_d8;
            *arg1 = var_e8;
            arg1[8] = var_88;
        }
        else
        {
            *arg1 = rax_3;
            arg1[7] = 0x3b9aca01;
        }
        
        return core::ptr::drop_in_place$LT$grep_printer..json..JSONSink$LT$$RF$$RF$grep_regex..matcher..RegexMatcher$C$termcolor..Buffer$GT$$GT$::hb4dc6679c7e10724(&var_160);
    }
    
    grep_printer::summary::Summary$LT$W$GT$::sink_with_path::he035225173f768fe(rdi, &arg4[1], 
        rdx_2, arg5);
    void** rax_1;
    int32_t rdx_4;
    rax_1 = grep_searcher::searcher::Searcher::search_path::hdcdeda6dd20cf06b(arg3, &var_1e0, arg5, 
        arg6, &var_160);
    
    if (!rax_1)
    {
        uint32_t rax_5 = *(var_c8 + 0x72);
        int128_t var_198;
        int128_t var_188;
        int128_t var_178;
        int64_t var_168;
        int32_t rcx_6;
        
        if (rax_5 == 3 || rax_5 == 5)
        {
            rax_5 = !var_98;
            rcx_6 = var_d8;
            
            if (rcx_6 != 0x3b9aca00)
            {
                label_658116:
                var_168 = *var_e8[8];
                int128_t var_f0;
                var_178 = var_f0;
                int128_t var_100;
                var_188 = var_100;
                int128_t var_110;
                var_198 = var_110;
                rdx_4 = *var_d8[4];
            }
        }
        else
        {
            rax_5 = var_98;
            rcx_6 = var_d8;
            
            if (rcx_6 != 0x3b9aca00)
                goto label_658116;
        }
        
        arg1[6] = var_168;
        *(arg1 + 0x20) = var_178;
        *(arg1 + 0x10) = var_188;
        *arg1 = var_198;
        arg1[7] = rcx_6;
        *(arg1 + 0x3c) = rdx_4;
        arg1[8] = rax_5;
    }
    else
    {
        *arg1 = rax_1;
        arg1[7] = 0x3b9aca01;
    }
    
    return core::ptr::drop_in_place$LT$grep_printer..summary..SummarySink$LT$$RF$$RF$grep_regex..matcher..RegexMatcher$C$termcolor..Buffer$GT$$GT$::h43ababb217c3d4a6(&var_160);
}
