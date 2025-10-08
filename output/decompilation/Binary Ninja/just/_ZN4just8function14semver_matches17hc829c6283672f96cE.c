
  int64_t* just::function::semver_matches::hc829c6283672f96c(int64_t* arg1, int64_t arg2, char* arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    int64_t var_100;
    uint64_t rdx_1 = semver::parse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$semver..VersionReq$GT$::from_str::h84fbbf7c0ccc06c0(&var_100, arg5, arg6);
    int64_t var_f8;
    int128_t var_d8;
    int128_t var_88;
    
    if (!(0 + -(var_100)))
    {
        int128_t zmm0 = var_100;
        var_88 = zmm0;
        int64_t var_f0;
        int64_t var_78_1 = var_f0;
        int128_t var_a8 = zmm0;
        int64_t var_98_1 = var_f0;
        uint64_t rdx_3 = semver::parse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$semver..Version$GT$::from_str::hea2b01e263d9c4dd(&var_100, arg3, arg4);
        int64_t rax_2 = var_100;
        int128_t* rdi_6;
        
        if (!rax_2)
        {
            int128_t var_50;
            just::function::semver_matches::_$u7b$$u7b$closure$u7d$$u7d$::hb0a3fd84aa074353(
                &var_50, var_f8, rdx_3);
            int128_t zmm0_4 = var_50;
            int128_t var_68_2 = zmm0_4;
            int64_t var_40;
            int64_t var_58_2 = var_40;
            arg1[3] = var_40;
            *(arg1 + 8) = zmm0_4;
            *arg1 = 1;
            rdi_6 = &var_88;
        }
        else
        {
            int64_t var_e8;
            int64_t var_28_1 = var_e8;
            int128_t zmm0_2 = var_f8;
            int128_t var_68_1 = zmm0_2;
            int64_t var_58_1 = var_e8;
            var_d8 = zmm0_2;
            int64_t var_c0_1 = var_e8;
            var_d8 = rax_2;
            int64_t var_e0;
            int64_t var_b8_1 = var_e0;
            char rax_3 = semver::VersionReq::matches::hb49ac1d1a2d3d7a6(&var_a8, &var_d8);
            char const* const rsi_4 = "false[{,:]capacity overflow/home…";
            
            if (rax_3)
                rsi_4 = "truePATH ... => M";
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_100, rsi_4, rax_3 ^ 5);
            arg1[3] = var_f0;
            *(arg1 + 8) = var_100;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$semver..Version$GT$::h81119a53d22e768a(&var_d8);
            rdi_6 = &var_a8;
        }
        
        core::ptr::drop_in_place$LT$semver..VersionReq$GT$::h1e215c3c00761ef0(rdi_6);
    }
    else
    {
        just::function::semver_matches::_$u7b$$u7b$closure$u7d$$u7d$::h39d57c8ffd16e780(&var_d8, 
            var_f8, rdx_1);
        int64_t var_c8;
        int64_t var_78 = var_c8;
        int128_t zmm0_1 = var_d8;
        var_88 = zmm0_1;
        arg1[3] = var_c8;
        *(arg1 + 8) = zmm0_1;
        *arg1 = 1;
    }
    return arg1;
}
