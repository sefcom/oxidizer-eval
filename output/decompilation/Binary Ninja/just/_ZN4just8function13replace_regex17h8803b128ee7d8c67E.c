
  int64_t* just::function::replace_regex::h8803b128ee7d8c67(int64_t* arg1, int64_t arg2, char* arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7)

{
    int64_t var_58;
    regex::regex::string::Regex::new::h678b3567117d3be5(&var_58, arg5);
    int64_t rax = var_58;
    int128_t var_98;
    uint64_t var_88;
    int128_t var_78;
    int128_t var_50;
    int64_t var_40;
    
    if (!rax)
    {
        int64_t var_68_1 = var_40;
        var_78 = var_50;
        just::function::replace_regex::_$u7b$$u7b$closure$u7d$$u7d$::hfbda715b9a178102(&var_98, 
            &var_78);
        uint64_t var_68_2 = var_88;
        int128_t zmm0_2 = var_98;
        var_78 = zmm0_2;
        arg1[3] = var_88;
        *(arg1 + 8) = zmm0_2;
        *arg1 = 1;
    }
    else
    {
        var_78 = var_50;
        int64_t var_68 = var_40;
        int128_t var_50_1 = var_50;
        int64_t var_40_1 = var_40;
        var_58 = rax;
        regex::regex::string::Regex::replacen::hee1cc50d8db99275(&var_98, &var_58, arg3, arg4, 
            arg6);
        int128_t var_38;
        _$LT$just..module_path..ModulePath$u20$as$u20$core..convert..TryFrom$LT$$RF$$u5b$$RF$str$u5d$$GT$$GT$::try_from::_$u7b$$u7b$closure$u7d$$u7d$::ha7dde365619bc2c0(&var_38, *var_98[8], var_88);
        int64_t var_28;
        arg1[3] = var_28;
        *(arg1 + 8) = var_38;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$just..request..Request$GT$::h16e954a6b6741939(&var_98);
        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::h8a6235b02cb1e98d(&var_58);
    }
    return arg1;
}
