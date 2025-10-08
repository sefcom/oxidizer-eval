
  int64_t bat::printer::InteractivePrinter::print_horizontal_line_term::h3959d9ef5566c6a5(char* arg1, void* arg2, int32_t* arg3, int128_t* arg4)

{
    void var_b8;
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(&var_b8, &data_5a2c43, 
        3, *(arg2 + 0x100));
    char var_78 = arg4[1];
    int128_t var_88 = *arg4;
    int64_t var_a0 = -0x7ffffffffffffffe;
    void* var_f8 = &var_b8;
    uint64_t (* var_f0)(int64_t* arg1, int64_t arg2) = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
    void* const var_e8 = &data_acea80;
    int64_t var_e0 = 2;
    int64_t var_c8 = 0;
    void** var_d8 = &var_f8;
    int64_t var_d0 = 1;
    char var_70;
    bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(&var_70, arg3, &var_e8);
    
    if (var_70 == 0xd)
    {
        int64_t result = core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_b8);
        *arg1 = 0xd;
        return result;
    }
    
    int128_t var_30;
    *(arg1 + 0x40) = var_30;
    int128_t zmm0_1 = var_70;
    int128_t var_40;
    *(arg1 + 0x30) = var_40;
    int128_t var_50;
    *(arg1 + 0x20) = var_50;
    int128_t var_60;
    *(arg1 + 0x10) = var_60;
    *arg1 = zmm0_1;
    return core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_b8);
}
