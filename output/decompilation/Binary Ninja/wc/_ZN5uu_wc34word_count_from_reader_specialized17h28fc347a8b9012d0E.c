
  int64_t uu_wc::word_count_from_reader_specialized::h28fc347a8b9012d0(int128_t* arg1, int64_t arg2, int32_t arg3)

{
    int128_t s;
    __builtin_memset(&s, 0, 0x28);
    int32_t* rax;
    char rdx;
    rax = _$LT$std..io..stdio..StdinLock$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::hb512afc42aa1d06a(arg2, arg3);
    int32_t* var_88 = rax;
    int64_t var_78 = 0;
    int32_t var_70 = 0;
    char var_6c = 0;
    char var_89 = 0;
    
    while (true)
    {
        int64_t var_40;
        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::hb80609d2cbf610fc(&var_40, 
            &var_88);
        int64_t rax_1 = var_40;
        
        if (rax_1 == 2)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$$RF$str$C$uu_wc..utf8..read..BufReadDecoderError$GT$$GT$$GT$::h5c5930e1896f3564(&var_40);
            int128_t s_2 = s;
            __builtin_memset(&arg1[1], 0, 0x18);
            *arg1 = s_2;
            *(arg1 + 0x28) = 0;
            break;
        }
        
        int64_t var_38;
        int64_t var_30;
        
        if (!rax_1)
            uu_wc::process_chunk::h2333cf1075a5b14e(&s, var_38, var_30, &var_89);
        else if (!var_38)
        {
            if (var_30)
            {
                int128_t s_1 = s;
                __builtin_memset(&arg1[1], 0, 0x18);
                *arg1 = s_1;
                *(arg1 + 0x28) = var_30;
                break;
            }
        }
        else
            s += var_30;
    }
    
    return core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..stdio..StdinLock$GT$$GT$::he866ed42fb199a6f(var_88, rdx & 1);
}
