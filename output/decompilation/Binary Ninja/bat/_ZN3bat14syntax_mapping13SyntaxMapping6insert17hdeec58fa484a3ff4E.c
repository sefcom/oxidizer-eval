
  int128_t* bat::syntax_mapping::SyntaxMapping::insert::hdeec58fa484a3ff4(int128_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int128_t* arg5)

{
    int64_t var_90;
    bat::syntax_mapping::make_glob_matcher::hb323052747e788f0(&var_90, arg3);
    int64_t rax = var_90;
    int128_t var_88;
    int128_t var_78;
    int128_t var_68;
    int128_t var_58;
    int128_t var_48;
    
    if (-(rax) != -0x8000000000000000)
    {
        int128_t var_48_1 = var_48;
        int128_t var_58_1 = var_58;
        int128_t var_68_1 = var_68;
        int128_t var_78_1 = var_78;
        int128_t var_88_1 = var_88;
        var_90 = rax;
        int64_t var_38;
        int64_t var_38_1 = var_38;
        int128_t var_30_1 = *arg5;
        int64_t var_20_1 = arg5[1];
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc656419b1ae5f038(arg2, &var_90);
        *arg1 = 0xd;
    }
    else
    {
        arg1[4] = var_48;
        arg1[3] = var_58;
        arg1[2] = var_68;
        arg1[1] = var_78;
        *arg1 = var_88;
    }
    return arg1;
}
