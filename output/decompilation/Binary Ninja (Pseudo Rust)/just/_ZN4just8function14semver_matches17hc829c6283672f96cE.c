
  fn just::function::semver_matches::hc829c6283672f96c(arg1: *mut i64, arg2: i64, arg3: *mut i8, arg4: i64, arg5: i64, arg6: i64) -> *mut i64

{
    let mut var_100: i64;
    let rdx_1: u64 = semver::parse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$semver..VersionReq$GT$::from_str::h84fbbf7c0ccc06c0(&var_100, arg5, arg6);
    let var_f8: i64;
    let mut var_d8: i128;
    let mut var_88: i128;
    
    if !(0 + -(var_100))
    {
        let zmm0: i128 = var_100;
        var_88 = zmm0;
        let var_f0: i64;
        let var_78_1: i64 = var_f0;
        let mut var_a8: i128 = zmm0;
        let var_98_1: i64 = var_f0;
        let rdx_3: u64 = semver::parse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$semver..Version$GT$::from_str::hea2b01e263d9c4dd(&var_100, arg3, arg4);
        let rax_2: i64 = var_100;
        let mut rdi_6: *mut i128;
        
        if rax_2 == 0
        {
            let mut var_50: i128;
            just::function::semver_matches::_$u7b$$u7b$closure$u7d$$u7d$::hb0a3fd84aa074353(
                &var_50, var_f8, rdx_3);
            let zmm0_4: i128 = var_50;
            let var_68_2: i128 = zmm0_4;
            let var_40: i64;
            let var_58_2: i64 = var_40;
            arg1[3] = var_40;
            *arg1.byte_offset(8) = zmm0_4;
            *arg1 = 1;
            rdi_6 = &var_88;
        }
        else
        {
            let var_e8: i64;
            let var_28_1: i64 = var_e8;
            let zmm0_2: i128 = var_f8;
            let var_68_1: i128 = zmm0_2;
            let var_58_1: i64 = var_e8;
            var_d8 = zmm0_2;
            let var_c0_1: i64 = var_e8;
            var_d8 = rax_2;
            let var_e0: i64;
            let var_b8_1: i64 = var_e0;
            let rax_3: i8 = semver::VersionReq::matches::hb49ac1d1a2d3d7a6(&var_a8, &var_d8);
            let mut rsi_4: *const i8 = "false[{,:]capacity overflow/home…";
            
            if rax_3 != 0
            {
                rsi_4 = "truePATH ... => M";
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_100, rsi_4, rax_3 ^ 5);
            arg1[3] = var_f0;
            *arg1.byte_offset(8) = var_100;
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
        let var_c8: i64;
        let var_78: i64 = var_c8;
        let zmm0_1: i128 = var_d8;
        var_88 = zmm0_1;
        arg1[3] = var_c8;
        *arg1.byte_offset(8) = zmm0_1;
        *arg1 = 1;
    }
    arg1
}
