
  int64_t fd::output::print_trailing_slash::h43af0d27fcc999ec(int64_t arg1, int64_t* arg2, int64_t arg3, int64_t arg4, uint64_t arg5)

{
    uint32_t rax;
    int32_t rdx;
    rax = fd::dir_entry::DirEntry::file_type::ha8777f9a24494ad2(arg2);
    
    if (((rdx & 0xf000) == 0x4000 & rax) != 1)
        return 0;
    
    int64_t var_a8;
    char var_a0;
    int64_t var_9f;
    char rax_1;
    int64_t zmm0_1;
    int64_t zmm1_1;
    
    if (!arg5)
    {
        zmm0_1 = *data_470da0;
        zmm1_1 = {0};
        rax_1 = 0;
    }
    else
    {
        lscolors::style::Style::to_nu_ansi_term_style::h4f37f75a73819d26(&var_a8, arg5, rax, arg5);
        zmm1_1 = var_a8;
        rax_1 = var_a0;
        zmm0_1 = var_9f;
    }
    
    int64_t var_78_1 = zmm1_1;
    char var_70_1 = rax_1;
    int64_t var_6f_1 = zmm0_1;
    var_a8 = -0x8000000000000000;
    var_a0 = arg3;
    var_9f = arg4;
    int64_t var_90_1 = -0x7ffffffffffffffe;
    int64_t* var_60 = &var_a8;
    uint64_t (* var_58_1)(int64_t* arg1, int64_t arg2) = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
    char const* const var_50 = &data_470810;
    int64_t var_48_1 = 1;
    int64_t var_30_1 = 0;
    int64_t** var_40_1 = &var_60;
    int64_t var_38_1 = 1;
    int64_t result = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_50);
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hed8dd3841b2e91c8(&var_a8);
    return result;
}
