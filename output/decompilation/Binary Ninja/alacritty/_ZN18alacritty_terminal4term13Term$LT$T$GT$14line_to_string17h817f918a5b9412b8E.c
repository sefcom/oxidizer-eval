
  int64_t alacritty_terminal::term::Term$LT$T$GT$::line_to_string::h817f918a5b9412b8(int128_t* arg1, void* arg2, int32_t arg3, int64_t arg4, int64_t arg5, char arg6)

{
    int64_t r15 = arg4;
    int64_t var_a0 = 0;
    int64_t var_98 = 1;
    int64_t result = 0;
    void* rax_1 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2 + 0x28, arg3);
    int64_t rax_3 = core::cmp::Ord::min::hffab314b5e6491b1(
        _$LT$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$u20$as$u20$alacritty_terminal..term..cell..LineLength$GT$::line_length::h2c5104173d85403b(rax_1), 
        arg5 + 1);
    int64_t rsi_2 = *(rax_1 + 0x10);
    
    if (r15 >= rsi_2)
        void** const var_b0 = &data_c776e0;
    else
    {
        r15 += *(*(rax_1 + 8) + r15 * 0x18 + 0x14) << 9 >> 0xf;
        int64_t r13_1 = 0;
        var_b0 = &data_c77770;
        
        while (true)
        {
            int64_t* rbx_2;
            
            if (!(r13_1 & 1))
            {
                if (r15 >= rax_3)
                {
                    label_76f402:
                    int64_t rbx_5 = *(arg2 + 0xb8);
                    
                    if (arg5 < rbx_5 - 1)
                        goto label_76f46a;
                    
                    if (!rax_3)
                    {
                        label_76f45e:
                        alloc::string::String::push::h0ede46164189e411(&var_a0, 0xa);
                        label_76f46a:
                        int64_t rax_17;
                        rax_17 = rax_3 == rbx_5;
                        int64_t rcx_4;
                        rcx_4 = rax_3 >= 2;
                        
                        if (!(rcx_4 & rax_17))
                            goto label_76f4e5;
                        
                        rsi_2 = *(rax_1 + 0x10);
                        r15 = rax_3 - 1;
                        
                        if (rax_3 - 1 >= rsi_2)
                            var_b0 = &data_c77728;
                        else
                        {
                            if (!arg6 || !(*(*(rax_1 + 8) + r15 * 0x18 + 0x14) & 0x400))
                                goto label_76f4e5;
                            
                            void* rax_24 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2 + 0x28, arg3 - 1);
                            
                            if (*(rax_24 + 0x10))
                            {
                                alloc::string::String::push::h0ede46164189e411(&var_a0, 
                                    *(*(rax_24 + 8) + 0x10));
                                label_76f4e5:
                                arg1[1] = result;
                                *arg1 = var_a0;
                                return result;
                            }
                            
                            var_b0 = &data_c77758;
                            r15 = 0;
                            rsi_2 = 0;
                        }
                    }
                    else
                    {
                        void* rax_18 = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2 + 0x28, arg3);
                        r15 = rax_3 - 1;
                        rsi_2 = *(rax_18 + 0x10);
                        
                        if (r15 < rsi_2)
                        {
                            if (*(*(rax_18 + 8) + r15 * 0x18 + 0x14) & 0x10)
                                goto label_76f46a;
                            
                            goto label_76f45e;
                        }
                        
                        var_b0 = &data_c77710;
                    }
                    
                    break;
                }
                
                rsi_2 = *(rax_1 + 0x10);
                
                if (r15 >= rsi_2)
                    break;
                
                int64_t rbx_3 = r15 * 3;
                r15 += 1;
                rbx_2 = (rbx_3 << 3) + *(rax_1 + 8);
            }
            else
            {
                int64_t rax_11 = r15 * 0x18;
                
                while (true)
                {
                    if (r15 >= rax_3)
                        goto label_76f402;
                    
                    int64_t r13_2 = r15;
                    rsi_2 = *(rax_1 + 0x10);
                    
                    if (r15 >= rsi_2)
                    {
                        r15 = r13_2;
                        goto label_76f50e;
                    }
                    
                    int64_t r14_1 = rax_11;
                    void* rbx_1 = *(rax_1 + 8);
                    
                    if (!*_$LT$alacritty_terminal..term..TabStops$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Column$GT$$GT$::index::ha0d73bf41ca8aa9b(arg2 + 0x188, r13_2))
                    {
                        rax_11 = r14_1 + 0x18;
                        r15 = r13_2 + 1;
                        
                        if (*(rbx_1 + r14_1 + 0x10) == 0x20)
                            continue;
                    }
                    
                    rbx_2 = rbx_1 + r14_1;
                    r15 = r13_2 + 1;
                    break;
                }
            }
            
            int32_t rsi_4 = rbx_2[2];
            r13_1 = rsi_4 == 9;
            
            if (!(*(rbx_2 + 0x14) & 0x440))
            {
                alloc::string::String::push::h0ede46164189e411(&var_a0, rsi_4);
                void* rax_14 = *rbx_2;
                int64_t rcx_1;
                
                if (!rax_14)
                    rcx_1 = 0;
                else
                {
                    rcx_1 = *(rax_14 + 0x18);
                    rax_14 = *(rax_14 + 0x20);
                }
                
                int64_t var_68 = 1;
                int64_t var_60_1 = rcx_1;
                void* var_58_1 = rax_14;
                int64_t var_50_1 = 0;
                int64_t var_40_1 = 0;
                
                while (true)
                {
                    int32_t* rax_15 = _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4ec7567faf38ffb(&var_68);
                    
                    if (!rax_15)
                        break;
                    
                    alloc::string::String::push::h0ede46164189e411(&var_a0, *rax_15);
                }
            }
        }
    }
    
    label_76f50e:
    core::panicking::panic_bounds_check::h025cadc56a971af7(r15, rsi_2);
    /* no return */
}
