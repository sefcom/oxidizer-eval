
  int64_t alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::next_match_right::h82c3562c445bfed2(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int32_t arg5, char arg6, char arg7, int32_t arg8)

{
    int64_t var_138 = arg4;
    int32_t var_130 = arg5;
    char var_141 = arg6;
    int32_t rax = alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::line_search_left::h51103e5e6ff36c7a(arg2, arg5);
    int64_t var_108 = 0;
    int32_t var_100 = rax;
    int32_t rax_2;
    int64_t rcx_1;
    
    if (!(arg7 & 1))
    {
        int64_t rax_3;
        int32_t rdx_2;
        rax_3 = alacritty_terminal::index::Point::sub::h8b4b7dd5f4447bbc(0, rax, arg2, 2);
        rcx_1 = rax_3;
        rax_2 = rdx_2;
    }
    else
    {
        rax_2 = alacritty_terminal::index::Line::grid_clamp::h7a533a4686eb6d93(rax + arg8, 
            *(arg2 + 0x50), *(arg2 + 0xc0), 2);
        rcx_1 = *(arg2 + 0xb8) - 1;
    }
    
    int64_t var_60 = 0;
    int32_t var_58 = rax;
    int64_t var_50 = rcx_1;
    int32_t var_48 = rax_2;
    int64_t var_40 = arg3;
    void* var_38 = arg2;
    int16_t var_30 = 1;
    char var_68 = 3;
    void var_88;
    int32_t result =
        core::option::Option$LT$T$GT$::get_or_insert_with::he1b39de9d157c638(&var_88, &var_60);
    
    if (var_68 != 2)
    {
        int128_t var_d8;
        _$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5e74ac01ef9f7a4d(&var_d8, &var_88);
        char* var_f8 = &var_141;
        int32_t* var_f0_1 = &var_100;
        int32_t* var_e8_1 = &var_130;
        int64_t* var_e0_1 = &var_138;
        int128_t var_b0;
        _$LT$core..iter..adapters..peekable..Peekable$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hce3baf6709a6d3ca(&var_b0, &var_88, &var_f8);
        char var_90;
        char rax_4 = var_90;
        int128_t var_128_1;
        int128_t var_118_1;
        int32_t result_1;
        int32_t result_4;
        
        if (rax_4 != 2)
        {
            int128_t var_a0;
            var_118_1 = var_a0;
            var_128_1 = var_b0;
            int32_t result_3;
            result_4 = result_3;
            result_1 = result_3;
        }
        else
        {
            var_128_1 = var_d8;
            int128_t var_c8;
            var_118_1 = var_c8;
            char var_b8;
            rax_4 = var_b8;
            int32_t result_2;
            result_4 = result_2;
            result_1 = result_2;
        }
        arg1[1] = var_118_1;
        *arg1 = var_128_1;
        arg1[2] = rax_4;
        result = result_1;
        *(arg1 + 0x21) = result;
        *(arg1 + 0x24) = result_1;
    }
    else
        arg1[2] = 2;
    
    return result;
}
