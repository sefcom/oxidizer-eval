
  uint64_t alacritty::display::hint::HintPostProcessor$LT$T$GT$::next_processed_match::h1e39a4cf74b51fc6(int64_t* arg1, int64_t* arg2)

{
    void* r14 = arg1[5];
    int128_t var_80;
    alacritty::display::hint::HintPostProcessor$LT$T$GT$::hint_post_processing::h91382b8c2efba66c(
        &var_80, r14, arg2);
    char i;
    uint64_t result;
    
    if (i == 2)
    {
        int64_t rax_1 = arg1[2];
        int32_t rax_2 = arg1[3];
        int64_t rax_3 = arg1[4];
        
        do
        {
            int64_t rax_4;
            int32_t rdx_2;
            rax_4 =
                alacritty_terminal::index::Point::add::h870632f29f948f48(*arg2, arg2[1], r14, 1, 1);
            *arg1 = rax_4;
            arg1[1] = rdx_2;
            result = _$LT$alacritty_terminal..index..Point$LT$L$C$C$GT$$u20$as$u20$core..cmp..Ord$GT$::cmp::h2b413278cc536aee(rax_4, rdx_2, rax_1, rax_2);
            
            if (result > 0)
                return result;
            
            int32_t var_a8_1 = rax_2;
            int128_t var_58;
            result = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search_right::hdca176f2ea14268c(&var_58, r14, rax_3, rax_4, rdx_2, rax_1);
            char var_38;
            
            if (var_38 == 2)
                return result;
            
            arg2[4] = var_38;
            int128_t zmm0 = var_58;
            int128_t var_48;
            *(arg2 + 0x10) = var_48;
            *arg2 = zmm0;
            alacritty::display::hint::HintPostProcessor$LT$T$GT$::hint_post_processing::h91382b8c2efba66c(&var_80, r14, arg2);
        } while (i == 2);
    }
    
    int64_t var_70;
    int32_t var_68;
    int64_t rax_7;
    int32_t rdx_7;
    rax_7 = alacritty_terminal::index::Point::add::h870632f29f948f48(var_70, var_68, r14, 1, 1);
    *arg1 = rax_7;
    arg1[1] = rdx_7;
    *(arg1 + 0x30) = var_80;
    *(arg1 + 0x40) = var_70;
    result = i;
    arg1[0xa] = result;
    return result;
}
