
  int64_t uu_wc::word_count_from_reader_specialized::h07fe350717685ff4(int128_t* arg1)

{
    int128_t s;
    __builtin_memset(&s, 0, 0x28);
    void var_68;
    int32_t rsi;
    _$LT$std..fs..File$u20$as$u20$uu_wc..countable..WordCountable$GT$::buffered::h156913b3d4e5571d(
        &var_68, rsi);
    int64_t var_38 = 0;
    int32_t var_30 = 0;
    char var_2c = 0;
    int64_t var_88 = 0;
    
    while (true)
    {
        int64_t var_80;
        uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h5ded0a3c9701df78(&var_80, 
            &var_68);
        int64_t rax_1 = var_80;
        
        if (rax_1 == 2)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$$RF$str$C$uu_wc..utf8..read..BufReadDecoderError$GT$$GT$$GT$::h357e32c7c7fdd2c1(&var_80);
            int128_t s_2 = s;
            __builtin_memset(&arg1[1], 0, 0x18);
            *arg1 = s_2;
            *(arg1 + 0x28) = 0;
            break;
        }
        
        int64_t var_78;
        int64_t var_70;
        
        if (!(rax_1 & 1))
            uu_wc::process_chunk::h2070651cf626c54e(&s, var_78, var_70, &var_88);
        else
        {
            if (var_78)
                s += var_70;
            else if (var_70)
            {
                int128_t s_1 = s;
                __builtin_memset(&arg1[1], 0, 0x18);
                *arg1 = s_1;
                *(arg1 + 0x28) = var_70;
                break;
            }
            
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hc0c7b6ba243748cb(0);
        }
    }
    
    return core::ptr::drop_in_place$LT$uu_wc..utf8..read..BufReadDecoder$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$$GT$::h3c7461e138f950be(&var_68);
}
