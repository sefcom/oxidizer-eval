
  int64_t* uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h5ded0a3c9701df78(int64_t* arg1, int64_t* arg2)

{
    int64_t* result;
    
    while (true)
    {
        int64_t rsi = arg2[6];
        
        if (rsi)
        {
            _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..BufRead$GT$::consume::ha95fa77ba2de7100(arg2, rsi);
            arg2[6] = 0;
        }
        
        char* var_48;
        _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..BufRead$GT$::fill_buf::h3e97b555acf3b590(&var_48, arg2);
        char* rbp_1 = var_48;
        int64_t* result_1;
        
        if (rbp_1)
        {
            int64_t* result_2 = result_1;
            int64_t rdx_4;
            
            if (!*(arg2 + 0x3c))
            {
                if (!result_2)
                {
                    result = arg1;
                    *result = 2;
                    break;
                }
                
                core::str::converts::from_utf8::h8a6dc80f786921e0(&var_48, rbp_1, result_2);
                
                if (var_48 != 1)
                    rbp_1 = nullptr;
                else
                {
                    char var_38;
                    
                    if (result_1)
                        result_2 = result_1;
                    else
                    {
                        char result_3;
                        
                        if (var_38 & 1)
                            result_2 = result_3;
                        else
                        {
                            arg2[6] = result_2;
                            int64_t rax_3 =
                                uu_wc::utf8::Incomplete::new::hec8ef2d4187e9f87(rbp_1, result_2);
                            arg2[7] = rax_3;
                            *(arg2 + 0x3c) = rax_3 >> 0x20;
                            continue;
                        }
                    }
                    rbp_1 = !result_1;
                }
                
                arg2[6] = result_2;
                _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..BufRead$GT$::fill_buf::h3e97b555acf3b590(&var_48, arg2);
                char* rdx_5 = var_48;
                
                if (rdx_5)
                {
                    result = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7028662c39c50e0f(0, result_2, rdx_5, result_1);
                    
                    if (!(rbp_1 & 1))
                        goto label_464962;
                    
                    goto label_4649ce;
                }
            }
            else
            {
                int64_t* rcx_2;
                
                if (!result_2)
                {
                    result = uu_wc::utf8::Incomplete::take_buffer::h1aa814b698a895ee(&arg2[7]);
                    label_4649ce:
                    rcx_2 = arg1;
                    *rcx_2 = 1;
                    label_4649da:
                    rcx_2[1] = result;
                    rcx_2[2] = rdx_4;
                    break;
                }
                
                uint64_t rax_1;
                char rdx_2;
                rax_1 = uu_wc::utf8::Incomplete::try_complete_offsets::h473bfdae9ee1fad0(&arg2[7], 
                    rbp_1, result_2);
                arg2[6] = rax_1;
                
                if (rdx_2 == 2)
                    continue;
                
                result = uu_wc::utf8::Incomplete::take_buffer::h1aa814b698a895ee(&arg2[7]);
                
                if (rdx_2 & 1)
                    goto label_4649ce;
                
                label_464962:
                rcx_2 = arg1;
                *rcx_2 = 0;
                goto label_4649da;
            }
        }
        
        result = result_1;
        *arg1 = 1;
        arg1[1] = 0;
        arg1[2] = result;
        break;
    }
    
    return result;
}
