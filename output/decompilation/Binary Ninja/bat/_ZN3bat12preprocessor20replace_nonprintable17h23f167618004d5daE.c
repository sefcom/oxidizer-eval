
  int64_t bat::preprocessor::replace_nonprintable::h23f167618004d5da(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t var_c0 = 0;
    int64_t result = 1;
    int64_t var_b0 = 0;
    int64_t rax = 4;
    
    if (arg4)
        rax = arg4;
    
    if (arg3)
    {
        uint64_t rax_1 = arg5;
        char const* const rdx = "^J\n\x";
        
        if (rax_1)
            rdx = &data_480d0c;
        
        int64_t r15_1 = 0;
        int64_t r13_1 = 0;
        
        do
        {
            char* rbp_1 = arg2 + r15_1;
            int32_t rax_5;
            int64_t rdx_1;
            rax_5 = bat::preprocessor::try_parse_utf8_char::h1bda9850eb158fe9(rbp_1, arg3 - r15_1);
            int64_t r12_1;
            char* var_a8;
            uint64_t (* var_a0)(char* arg1, int64_t* arg2);
            char const (** const var_88)[0x3];
            int64_t var_80;
            char** var_78;
            
            if (rax_5 != 0x110000)
            {
                r12_1 = rdx_1;
                
                if (rax_5 == 9)
                {
                    int32_t rsi_6;
                    int64_t rbx_4;
                    
                    if (!((r13_1 | rax) >> 0x20))
                    {
                        rbx_4 = rax - COMBINE(0, r13_1) % rax;
                        rsi_6 = 0x21b9;
                        
                        if (rbx_4 != 1)
                        {
                            label_83e1a9:
                            alloc::string::String::push::h0ede46164189e411(&var_c0, 0x251c);
                            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(
                                &var_88, &data_5a2c43, 3, rbx_4 - 2);
                            char** var_98_1 = var_78;
                            var_a8 = var_88;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_c0, var_a0, var_78 + var_a0);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_a8);
                            rsi_6 = 0x2524;
                        }
                    }
                    else
                    {
                        rbx_4 = rax - COMBINE(0, r13_1) % rax;
                        rsi_6 = 0x21b9;
                        
                        if (rbx_4 != 1)
                            goto label_83e1a9;
                    }
                    alloc::string::String::push::h0ede46164189e411(&var_c0, rsi_6);
                    r13_1 = 0;
                }
                else if (rax_5 == 0xa)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_c0, rdx, &rdx[rax_1 + 3]);
                    r13_1 = 0;
                }
                else
                {
                    r13_1 += 1;
                    
                    if (rax_5 == 0x20)
                        alloc::string::String::push::h0ede46164189e411(&var_c0, 0xb7);
                    else if (rax_5 >= 0x20)
                    {
                        if (rax_5 == 0x7f)
                        {
                            if (arg5)
                                alloc::string::String::push::h0ede46164189e411(&var_c0, 0x2421);
                            else
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_c0, "^?^J\n\x", "^J\n\x");
                        }
                        else if (rax_5 - 0x30 < 0xa || (rax_5 & 0xffffffdf) - 0x41 < 0x1a)
                            alloc::string::String::push::h0ede46164189e411(&var_c0, rax_5);
                        else
                        {
                            int32_t rcx_2;
                            rcx_2 = rax_5 - 0x21 < 0x5e;
                            rcx_2 |= core::char::methods::_$LT$impl$u20$char$GT$::is_ascii_punctuation::h348b82be49b67f60(rax_5);
                            
                            if (rcx_2)
                                alloc::string::String::push::h0ede46164189e411(&var_c0, rax_5);
                            else
                            {
                                core::escape::escape_unicode::h2f19778bfba7c65a(&var_88, rax_5);
                                var_a0 = var_80;
                                var_a8 = var_88;
                                core::iter::traits::iterator::Iterator::collect::h8a30b08ce65e21f9(
                                    &var_88, &var_a8);
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h30747c9efb6a6381(&var_c0, var_80, var_78 + var_80);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_88);
                            }
                        }
                    }
                    else if (arg5)
                        alloc::string::String::push::h0ede46164189e411(&var_c0, rax_5 | 0x2400);
                    else
                    {
                        int32_t var_8c = rax_5 | 0x40;
                        var_a8 = &var_8c;
                        var_a0 =
                            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                        var_88 = &data_ace970;
                        var_80 = 1;
                        int64_t var_68_2 = 0;
                        var_78 = &var_a8;
                        int64_t var_70_2 = 1;
                        _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hc61af94ec255152a(&var_c0, &var_88);
                    }
                }
            }
            else
            {
                var_a8 = rbp_1;
                var_a0 = core::fmt::num::_$LT$impl$u20$core..fmt..UpperHex$u20$for$u20$i8$GT$::fmt::hc03941a1f9bbbf93;
                var_88 = &data_ace980;
                var_80 = 1;
                void* const var_68_1 = &data_5a2c50;
                int64_t var_60_1 = 1;
                var_78 = &var_a8;
                int64_t var_70_1 = 1;
                _$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::hc61af94ec255152a(&var_c0, &var_88);
                r12_1 = 1;
            }
            r15_1 += r12_1;
        } while (r15_1 < arg3);
    }
    
    arg1[2] = var_b0;
    *arg1 = var_c0;
    arg1[1] = result;
    return result;
}
