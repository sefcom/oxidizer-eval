
  int64_t* uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h89bdfec0735647a2(int64_t* arg1, int64_t* arg2)

{
    while (true)
    {
        int64_t rsi = arg2[6];
        
        if (rsi)
        {
            _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..BufRead$GT$::consume::hd0093dd6f47d0a06(arg2, rsi);
            arg2[6] = 0;
        }
        
        char* var_48;
        _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..BufRead$GT$::fill_buf::hc0fd5a0d31ccb5ff(&var_48, arg2);
        char* rbp_1 = var_48;
        uint64_t var_40;
        
        if (rbp_1)
        {
            uint64_t r13_1 = var_40;
            int64_t rax_5;
            int64_t rdx_4;
            
            if (!*(arg2 + 0x3c))
            {
                if (!r13_1)
                {
                    *arg1 = 2;
                    break;
                }
                
                core::str::converts::from_utf8::ha1effb4cca6d9901(&var_48, rbp_1, r13_1);
                
                if (!var_48)
                    rbp_1 = nullptr;
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
                            arg2[6] = r13_1;
                            int64_t rax_3 =
                                uu_wc::utf8::Incomplete::new::hcf6109872b689ce7(rbp_1, r13_1);
                            arg2[7] = rax_3;
                            *(arg2 + 0x3c) = rax_3 >> 0x20;
                            continue;
                        }
                    }
                    rbp_1 = !var_40;
                }
                
                arg2[6] = r13_1;
                _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..BufRead$GT$::fill_buf::hc0fd5a0d31ccb5ff(&var_48, arg2);
                char* rsi_6 = var_48;
                
                if (rsi_6)
                {
                    rax_5 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(r13_1, rsi_6, var_40);
                    
                    if (rbp_1 & 1)
                        goto label_4c2b06;
                    
                    *arg1 = 0;
                    goto label_4c2b60;
                }
            }
            else
            {
                if (!r13_1)
                {
                    rax_5 = uu_wc::utf8::Incomplete::take_buffer::h14a764021c5821f9(&arg2[7]);
                    label_4c2b06:
                    *arg1 = 1;
                    label_4c2b60:
                    arg1[1] = rax_5;
                    arg1[2] = rdx_4;
                    break;
                }
                
                uint64_t rax_1;
                char rdx_2;
                rax_1 = uu_wc::utf8::Incomplete::try_complete_offsets::h9c1fcf79f71d155f(&arg2[7], 
                    rbp_1, r13_1);
                arg2[6] = rax_1;
                
                if (rdx_2 == 2)
                    continue;
                
                rax_5 = uu_wc::utf8::Incomplete::take_buffer::h14a764021c5821f9(&arg2[7]);
                
                if (rdx_2 & 1)
                    goto label_4c2b06;
                
                *arg1 = 0;
                goto label_4c2b60;
            }
        }
        
        *arg1 = 1;
        arg1[1] = 0;
        arg1[2] = var_40;
        break;
    }
    
    return arg1;
}
