
  uint64_t linera_summary::github::GithubRepository::from_env::hd99f4e9b5b48b078(int128_t* arg1, int32_t arg2)

{
    char var_88;
    std::env::var::h3e0bd6d3c4a94666(&var_88, "GITHUB_REPOSITORYlinera-summary/…");
    char rax = var_88;
    int64_t var_f8;
    int64_t var_f0;
    int64_t var_e8;
    int64_t var_80;
    int64_t var_78;
    int64_t var_70;
    
    if (!arg2)
    {
        if (rax & 1)
        {
            uint64_t result = linera_summary::github::GithubRepository::from_env::_$u7b$$u7b$closure$u7d$$u7d$::h7a72685267245493(var_80, var_78);
            *(arg1 + 8) = result;
            *arg1 = -0x8000000000000000;
            return result;
        }
        
        var_f8 = var_80;
        var_f0 = var_78;
        var_e8 = var_70;
    }
    else if (!(rax & 1))
    {
        var_e8 = var_70;
        var_f8 = var_80;
    }
    else
        linera_summary::github::GithubRepository::from_env::_$u7b$$u7b$closure$u7d$$u7d$::hd49ff3a820f2757e(&var_f8, var_80, var_78);
    int64_t var_c8;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_c8, 
        0x2f, var_f0, var_e8);
    int64_t var_d8 = 0;
    int64_t var_d0_1 = var_e8;
    int16_t var_98_1 = 1;
    int64_t var_68;
    core::iter::traits::iterator::Iterator::collect::hb471293643a10684(&var_68, &var_d8);
    int64_t var_58;
    int64_t var_50 = var_58;
    
    if (var_58 != 2)
    {
        var_d8 = 0;
        core::panicking::assert_failed::h449f2a7fe5426575(0, &var_50, &data_533f38, &var_d8);
        /* no return */
    }
    
    int64_t* var_60;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h81302a4b01e720c3(&var_d8, *var_60, var_60[1]);
    int64_t rax_3 = var_c8;
    int128_t zmm0_2 = var_d8;
    int128_t var_30;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h81302a4b01e720c3(&var_30, var_60[2], var_60[3]);
    int128_t var_c0_1 = var_30;
    var_c8 = rax_3;
    var_d8 = zmm0_2;
    arg1[2] = *var_c0_1[8];
    int64_t var_20;
    *(arg1 + 0x28) = var_20;
    arg1[1] = var_c8;
    *(arg1 + 0x18) = var_c0_1;
    *arg1 = zmm0_2;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h10f420a45b15fff5(var_68, 
        var_60);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h86bfd364a743e9ca(&var_f8);
}
