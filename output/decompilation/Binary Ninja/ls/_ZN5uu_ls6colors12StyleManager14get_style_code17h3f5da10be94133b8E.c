
  int64_t uu_ls::colors::StyleManager::get_style_code::h3f5da10be94133b8(int128_t* arg1, void* arg2, int128_t* arg3)

{
    int64_t rax = *(arg3 + 0xd);
    *(arg2 + 0x15) = rax;
    *(arg2 + 8) = *arg3;
    int64_t var_79;
    uint64_t r12;
    lscolors::style::Style::to_nu_ansi_term_style::hd70be39300867c91(&var_79, arg3, rax, r12);
    char var_71 = 0;
    char var_69;
    char var_10 = var_69;
    int64_t var_20 = var_79;
    char var_18 = 0;
    int32_t var_70;
    int32_t var_17 = var_70;
    int16_t var_6c;
    int16_t var_13 = var_6c;
    char var_6a;
    char var_11 = var_6a;
    int64_t var_50 = -0x8000000000000000;
    int64_t var_48 = 1;
    int64_t var_40 = 0;
    int64_t var_38 = -0x7ffffffffffffffe;
    int128_t var_68;
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hce018959f2b6d404(&var_68, &var_50);
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::h9e949c0413661d2a(&var_50);
    int64_t result;
    alloc::string::String::truncate::hafe089c60c3201e9(&var_68, result - 4);
    arg1[1] = result;
    *arg1 = var_68;
    return result;
}
