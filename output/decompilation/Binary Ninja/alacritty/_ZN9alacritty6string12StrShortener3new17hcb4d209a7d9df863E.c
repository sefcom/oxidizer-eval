
  void alacritty::string::StrShortener::new::hcb4d209a7d9df863(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int32_t arg5)

{
    uint64_t r14 = 0x2026;
    
    if (!arg3)
        r14 = 0x110000;
    
    if (arg5)
    {
        *arg1 = arg2;
        arg1[1] = arg3 + arg2;
        *(arg1 + 0x10) = {0};
        arg1[4] = arg4;
        *(arg1 + 0x2c) = arg5;
        arg1[5] = r14;
        *(arg1 + 0x2d) = 3;
        return;
    }
    
    int64_t rdx_1 = arg3 + arg2;
    int64_t var_78 = arg2;
    int64_t var_68_1 = 0;
    uint64_t rax_1;
    int32_t i;
    rax_1 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf0ee1104036c3094(&var_78);
    int64_t r13_1;
    int64_t r15_1;
    
    if (i != 0x110000)
    {
        uint64_t rbp_1 = rax_1;
        r13_1 = 0;
        int32_t r12_1 = r14;
        r15_1 = 0;
        
        do
        {
            uint64_t rax_2 = 1;
            
            if (i >= 0xa0)
                rax_2 = unicode_width::tables::lookup_width::hf99baf8c7b02f1d5(i);
            
            r15_1 += rax_2;
            bool c_1 = r15_1 < arg4;
            rax_2 = r15_1 != arg4 && !c_1;
            rax_2 = rax_2 - 0;
            
            if (!rax_2)
            {
                r14 = 0x110000;
                
                if (r12_1 != 0x110000)
                {
                    int128_t var_48 = var_78;
                    int64_t var_38_1 = var_68_1;
                    
                    if (_$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf0ee1104036c3094(&var_48) != 0x110000)
                    {
                        r14 = r12_1;
                        break;
                    }
                }
            }
            else
            {
                r14 = r12_1;
                
                if (rax_2 != 0xff)
                {
                    r14 = r12_1;
                    break;
                }
            }
            
            r13_1 = rbp_1 + 1;
            uint64_t rax_4;
            rax_4 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf0ee1104036c3094(&var_78);
            rbp_1 = rax_4;
            r12_1 = r14;
        } while (i != 0x110000);
    }
    else
    {
        r13_1 = 0;
        r15_1 = 0;
    }
    
    int64_t rax_7;
    int32_t rdx_4;
    rax_7 = core::iter::traits::double_ended::DoubleEndedIterator::rfold::h1ee18d0034f37744(var_78, 
        rdx_1, var_68_1, r14);
    int64_t rax_9 =
        core::option::Option$LT$T$GT$::map_or::h0c0d9c4c1c9ad238(rax_7, rdx_4, r13_1) - r13_1;
    int64_t rdx_5;
    rdx_5 = r14 == 0x110000;
    rdx_5 |= r15_1 < arg4;
    rdx_5 |= 2;
    *arg1 = arg2;
    arg1[1] = rdx_1;
    arg1[2] = rax_9;
    arg1[3] = 0;
    arg1[4] = arg4;
    *(arg1 + 0x2c) = arg5;
    arg1[5] = r14;
    *(arg1 + 0x2d) = rdx_5;
}
