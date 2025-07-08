
  int64_t* uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::hb80609d2cbf610fc(int64_t* arg1, int64_t* arg2)

{
    int64_t* result;
    
    while (true)
    {
        int64_t rsi = arg2[2];
        
        if (rsi)
        {
            _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::consume::h5ee28ccd51983a15(arg2, rsi);
            arg2[2] = 0;
        }
        
        uint64_t var_48;
        _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::fill_buf::h6ecd177c436464d2(
            &var_48, arg2);
        uint64_t rbp_1 = var_48;
        uint64_t var_40;
        
        if (rbp_1)
        {
            uint64_t r13_1 = var_40;
            int64_t rax_5;
            int64_t rdx_4;
            
            if (*(arg2 + 0x1c))
            {
                if (!r13_1)
                {
                    rax_5 = uu_wc::utf8::Incomplete::take_buffer::h14a764021c5821f9(&arg2[3]);
                    result = arg1;
                    label_4c2d1e:
                    *result = 1;
                    label_4c2d25:
                    result[1] = rax_5;
                    result[2] = rdx_4;
                    break;
                }
                
                uint64_t rax_1;
                int32_t rdx_2;
                rax_1 = uu_wc::utf8::Incomplete::try_complete_offsets::h9c1fcf79f71d155f(&arg2[3], 
                    rbp_1, r13_1);
                arg2[2] = rax_1;
                
                if (rdx_2 == 2)
                    continue;
                else
                {
                    rbp_1 = rdx_2;
                    rax_5 = uu_wc::utf8::Incomplete::take_buffer::h14a764021c5821f9(&arg2[3]);
                }
                
                goto label_4c2ceb;
            }
            
            if (!r13_1)
            {
                result = arg1;
                *result = 2;
                break;
            }
            
            core::str::converts::from_utf8::ha1effb4cca6d9901(&var_48, rbp_1, r13_1);
            
            if (!var_48)
                rbp_1 = 0;
            else
            {
                char var_38;
                
                if (var_40)
                    r13_1 = var_40;
                else
                {
                    char var_37;
                    
                    if (var_38 & 1)
                        r13_1 = var_37;
                    else
                    {
                        arg2[2] = r13_1;
                        int64_t rax_3 =
                            uu_wc::utf8::Incomplete::new::hcf6109872b689ce7(rbp_1, r13_1);
                        arg2[3] = rax_3;
                        *(arg2 + 0x1c) = rax_3 >> 0x20;
                        continue;
                    }
                }
                rbp_1 = !var_40;
            }
            
            arg2[2] = r13_1;
            _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::fill_buf::h6ecd177c436464d2(&var_48, arg2);
            uint64_t rsi_6 = var_48;
            
            if (rsi_6)
            {
                rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(r13_1, rsi_6, var_40);
                label_4c2ceb:
                result = arg1;
                
                if (rbp_1 & 1)
                    goto label_4c2d1e;
                
                *result = 0;
                goto label_4c2d25;
            }
        }
        
        result = arg1;
        *result = 1;
        result[1] = 0;
        result[2] = var_40;
        break;
    }
    
    return result;
}
