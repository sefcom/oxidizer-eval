
  int64_t uu_wc::word_count_from_reader_specialized::hd3a171cb03b8bcb0(int128_t* arg1)

{
    int128_t s;
    __builtin_memset(&s, 0, 0x28);
    void var_68;
    int32_t rsi;
    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::h59317c57c6f57ac1(
        &var_68, rsi);
    int64_t var_38 = 0;
    int32_t var_30 = 0;
    char var_2c = 0;
    int64_t var_88 = 0;
    
    while (true)
    {
        int64_t var_80;
        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h89bdfec0735647a2(&var_80, 
            &var_68);
        int64_t rax_1 = var_80;
        
        if (rax_1 == 2)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$$RF$str$C$uu_wc..utf8..read..BufReadDecoderError$GT$$GT$$GT$::h5c5930e1896f3564(&var_80);
            int128_t s_2 = s;
            __builtin_memset(&arg1[1], 0, 0x18);
            *arg1 = s_2;
            *(arg1 + 0x28) = 0;
            break;
        }
        
        int64_t var_78;
        int64_t var_70;
        
        if (!rax_1)
            uu_wc::process_chunk::h4b4640f516259e48(&s, var_78, var_70, &var_88);
        else if (!var_78)
        {
            if (var_70)
            {
                int128_t s_1 = s;
                __builtin_memset(&arg1[1], 0, 0x18);
                *arg1 = s_1;
                *(arg1 + 0x28) = var_70;
                break;
            }
        }
        else
            s += var_70;
    }
    
    return core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::hcb0d0ffcfcbb6cb6(&var_68);
}
