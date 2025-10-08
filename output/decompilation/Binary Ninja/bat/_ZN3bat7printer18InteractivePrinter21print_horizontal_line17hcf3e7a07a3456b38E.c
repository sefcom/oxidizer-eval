
  int64_t bat::printer::InteractivePrinter::print_horizontal_line::hcf3e7a07a3456b38(char* arg1, void* arg2, int32_t* arg3, int32_t arg4)

{
    int32_t var_144 = arg4;
    uint64_t rbp = *(arg2 + 0x210);
    int64_t result;
    char var_140;
    int64_t var_130;
    int128_t var_110;
    int128_t var_100;
    
    if (!rbp)
    {
        result = bat::printer::InteractivePrinter::print_horizontal_line_term::h3959d9ef5566c6a5(
            &var_140, *(arg2 + 0x200), arg3, arg2 + 0x220);
        
        if (var_140 != 0xd)
        {
            *(arg1 + 0x40) = var_100;
            int128_t zmm0_4 = var_140;
            *(arg1 + 0x30) = var_110;
            int64_t var_120;
            *(arg1 + 0x20) = var_120;
            *(arg1 + 0x10) = var_130;
            *arg1 = zmm0_4;
        }
        else
            *arg1 = 0xd;
    }
    else
    {
        void var_60;
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(&var_60, 
            &data_5a2c43, 3, ~rbp + *(*(arg2 + 0x200) + 0x100));
        uint64_t rdx = alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(
            &var_140, &data_5a2c43, 3, rbp);
        int64_t var_d8_1 = var_130;
        int128_t var_e8 = var_140;
        var_140 = &var_e8;
        int64_t (* var_138_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        int32_t* var_130_1 = &var_144;
        int64_t (* var_128_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        void* var_120_1 = &var_60;
        int64_t (* var_118_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        char const* const var_b8 = &data_5a2cd0;
        int64_t var_b0_1 = 3;
        int64_t var_98_1 = 0;
        char* var_a8_1 = &var_140;
        int64_t var_a0_1 = 3;
        int128_t var_48;
        core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_48, 0, rdx, &var_b8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_e8);
        char var_78_1 = *(arg2 + 0x230);
        int128_t var_88_1 = *(arg2 + 0x220);
        var_b8 = var_48;
        int64_t var_38;
        int64_t var_a8_2 = var_38;
        int64_t var_a0_2 = -0x7ffffffffffffffe;
        char const* const* var_70 = &var_b8;
        uint64_t (* var_68_1)(int64_t* arg1, int64_t arg2) = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
        var_e8 = &data_acea80;
        *var_e8[8] = 2;
        int64_t var_c8_1 = 0;
        char const* const** var_d8_2 = &var_70;
        int64_t var_d0_1 = 1;
        bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(&var_140, arg3, &var_e8);
        
        if (var_140 != 0xd)
        {
            *(arg1 + 0x40) = var_100;
            int128_t zmm0_3 = var_140;
            *(arg1 + 0x30) = var_110;
            *(arg1 + 0x20) = var_120_1;
            *(arg1 + 0x10) = var_130_1;
            *arg1 = zmm0_3;
            core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_b8);
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(
                &var_60);
        }
        
        core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_b8);
        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_60);
        *arg1 = 0xd;
    }
    return result;
}
