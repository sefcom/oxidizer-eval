
  uint64_t alacritty::display::hint::regex_match_at::ha47cb28d04853687(int128_t* arg1, void* arg2, int64_t arg3, int32_t arg4, int64_t arg5, char arg6)

{
    int64_t var_100 = arg3;
    int32_t var_f8 = arg4;
    int128_t var_c8;
    alacritty::display::hint::visible_regex_match_iter::h3b713c9c9910fb82(&var_c8, arg2, arg5);
    int128_t var_f0;
    _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h288438aa2b24bb8a(&var_f0, &var_c8);
    char result_1;
    uint64_t result = result_1;
    
    if (result != 2)
    {
        int128_t var_128 = var_f0;
        int32_t var_cf;
        int32_t var_107_1 = var_cf;
        var_107_1 = var_cf;
        int128_t var_e0;
        int128_t zmm0_1;
        
        if (!arg6)
        {
            result = result;
            arg1[2] = result;
            zmm0_1 = var_128;
            arg1[1] = var_e0;
            *arg1 = zmm0_1;
        }
        else
        {
            int64_t var_60_1 = arg5;
            void* var_58_1 = arg2;
            char var_30_1 = 2;
            int64_t var_70_1 = var_e0;
            int32_t var_68_1 = *var_e0[8];
            void var_80;
            alacritty::display::hint::HintPostProcessor$LT$T$GT$::next_processed_match::h1e39a4cf74b51fc6(&var_80, &var_128);
            result = core::iter::traits::iterator::Iterator::try_fold::hcf229d928bc8cb4e(&var_c8, 
                &var_80, &var_100);
            char var_a8;
            
            if (var_a8 == 2)
                arg1[2] = 2;
            else
            {
                result = var_a8;
                arg1[2] = result;
                zmm0_1 = var_c8;
                int128_t var_b8;
                arg1[1] = var_b8;
                *arg1 = zmm0_1;
            }
        }
    }
    else
        arg1[2] = 2;
    
    return result;
}
