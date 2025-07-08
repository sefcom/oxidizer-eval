
  int64_t uu_wc::word_count_from_reader_specialized::h17007ed8b4818a2a(int128_t* arg1, int64_t arg2, int32_t arg3)

{
    int128_t s;
    __builtin_memset(&s, 0, 0x28);
    int32_t* rax;
    char rdx;
    rax = _$LT$std..io..stdio..StdinLock$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hb512afc42aa1d06a(arg2, arg3);
    int32_t* var_98 = rax;
    int64_t var_88 = 0;
    int32_t var_80 = 0;
    char var_7c = 0;
    char var_99 = 0;
    int64_t var_50 = 0;
    
    while (true)
    {
        int64_t var_48;
        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::hb80609d2cbf610fc(&var_48, 
            &var_98);
        int64_t rax_1 = var_48;
        
        if (rax_1 == 2)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$$RF$str$C$uu_wc..utf8..read..BufReadDecoderError$GT$$GT$$GT$::h5c5930e1896f3564(&var_48);
            int128_t s_2 = s;
            __builtin_memset(&arg1[1], 0, 0x18);
            *arg1 = s_2;
            *(arg1 + 0x28) = 0;
            break;
        }
        
        int64_t var_40;
        int64_t var_38;
        
        if (!rax_1)
            uu_wc::process_chunk::h5a18b758b2ccb002(&s, var_40, var_38, &var_50, &var_99);
        else if (!var_40)
        {
            if (var_38)
            {
                int128_t s_1 = s;
                __builtin_memset(&arg1[1], 0, 0x18);
                *arg1 = s_1;
                *(arg1 + 0x28) = var_38;
                break;
            }
        }
        else
            s += var_38;
    }
    
    return core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..stdio..StdinLock$GT$$GT$::he866ed42fb199a6f(var_98, rdx & 1);
}
