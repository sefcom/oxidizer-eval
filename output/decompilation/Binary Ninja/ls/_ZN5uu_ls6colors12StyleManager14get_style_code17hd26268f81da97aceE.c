
  int64_t uu_ls::colors::StyleManager::get_style_code::hd26268f81da97ace(int128_t* arg1, void* arg2, int128_t* arg3)

{
    *(arg2 + 0x15) = *(arg3 + 0xd);
    *(arg2 + 8) = *arg3;
    int64_t var_79;
    lscolors::style::Style::to_nu_ansi_term_style::hd77bc2e0e4b76e0d(&var_79, arg3);
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
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::heb2b5c73285ab811(&var_68, 
        &var_50);
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hb01d64a9827d3561(&var_50);
    int64_t result;
    alloc::string::String::truncate::h4c9243e558c5f483(&var_68, result - 4);
    arg1[1] = result;
    *arg1 = var_68;
    return result;
}
