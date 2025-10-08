
  fn uu_runcon::parse_command_line::hf9e79084b7f1ba94(arg1: *mut i64) -> u64

{
    let mut r14: fn() -> ! = -0x8000000000000000;
    let mut var_2b8: fn() -> !;
    let rdx: i64;
    let rsi: *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::he4febe2e2d11f7c9(&var_2b8, rsi, 
        rdx);
    let rax: fn() -> ! = var_2b8;
    let var_2b0: i64;
    
    if -(rax) == -0x8000000000000000
    {
        let result: u64 = alloc::boxed::Box$LT$T$GT$::new::h5fa986a47c88d19f(var_2b0, 0x7d);
        arg1[1] = result;
        arg1[2] = &data_4eace8;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let mut var_2a4: i128;
    let var_1ec_1: i128 = var_2a4;
    let mut var_294: i128;
    let var_1dc_1: i128 = var_294;
    let var_284: i32;
    let var_1cc_1: i32 = var_284;
    let mut var_200: fn() -> ! = rax;
    let var_1f8_1: i64 = var_2b0;
    let mut var_2a8: i32;
    let var_1f0_1: i32 = var_2a8;
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_200, "computeARGrange: \nTry ' --help'…", 7);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h2f0dacb574fc0bce(
        &var_2b8, &var_200);
    let mut rsi_2: *mut i64 = &var_2b8;
    let mut var_1c8: fn() -> !;
    clap_builder::parser::error::MatchesError::unwrap::hcb369db439fca05c(&var_1c8, rsi_2);
    let mut rax_2: fn() -> ! = var_1c8;
    let mut var_1c0: *mut i8;
    let mut var_1b8: u128;
    let mut var_198: *mut i64;
    let mut rcx_3: *const i8;
    let mut rdx_2: i64;
    let mut zmm0_2: i128;
    let mut zmm1_1: u128;
    
    if rax_2 == 0
    {
        zmm0_2 = {0};
        zmm1_1 = "/home/34r7hm4n/.cargo/registry/s…";
        rcx_3 = "/home/34r7hm4n/.cargo/registry/s…";
        rax_2 = core::ops::function::FnOnce::call_once::h0ea9a3512eb1b7d0;
        rdx_2 = 0;
    }
    else
    {
        rcx_3 = var_1c0;
        zmm1_1 = var_1b8;
        let var_1a8: i128;
        zmm0_2 = var_1a8;
        rsi_2 = var_198;
        let var_190: i64;
        rdx_2 = var_190;
    }
    
    let mut var_148: fn() -> ! = rax_2;
    let var_140_1: *const i8 = rcx_3;
    let var_110_1: i64 = rdx_2;
    
    if rax_1 != 0
    {
        'label_45ac71:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h52cfe8bfb9aec29d(
            &var_2b8, &var_200, "userSomedumb\x1b[5m\x1b[9m <= tr…", 4);
        let rax_7: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hcc8530cdd3113d91(
            "userSomedumb\x1b[5m\x1b[9m <= tr…", 4, &var_2b8);
        let mut var_108: i64;
        let mut var_f8: i64;
        
        if rax_7 == 0
        {
            var_108 = -0x8000000000000000;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *rax_7.byte_offset(8), *rax_7.byte_offset(0x10));
            var_f8 = var_2a8;
            var_108 = var_2b8;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h52cfe8bfb9aec29d(
            &var_2b8, &var_200, "role) = Zero\x1b[7mBool", 4);
        let rax_9: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hcc8530cdd3113d91(
            "role) = Zero\x1b[7mBool", 4, &var_2b8);
        let mut var_218: i64;
        let mut var_208: i64;
        
        if rax_9 == 0
        {
            var_218 = -0x8000000000000000;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *rax_9.byte_offset(8), *rax_9.byte_offset(0x10));
            var_208 = var_2a8;
            var_218 = var_2b8;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h52cfe8bfb9aec29d(
            &var_2b8, &var_200, &data_418cd0, 4);
        let rax_11: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hcc8530cdd3113d91(&data_418cd0, 4, 
            &var_2b8);
        let mut var_2d8: i64;
        let mut var_2c8: i64;
        
        if rax_11 == 0
        {
            var_2d8 = -0x8000000000000000;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *rax_11.byte_offset(8), *rax_11.byte_offset(0x10));
            var_2c8 = var_2a8;
            var_2d8 = var_2b8;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h52cfe8bfb9aec29d(
            &var_2b8, &var_200, "range: \nTry ' --help' for more …", 5);
        let rax_13: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hcc8530cdd3113d91(
            "range: \nTry ' --help' for more …", 5, &var_2b8);
        
        if rax_13 == 0
        {
            var_1c8 = -0x8000000000000000;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *rax_13.byte_offset(8), *rax_13.byte_offset(0x10));
            var_1b8 = var_2a8;
            var_1c8 = var_2b8;
        }
        
        let rax_15: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h17cec20ae7398b16(&var_148);
        let mut var_28: i128;
        
        if rax_15 != 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *rax_15.byte_offset(8), *rax_15.byte_offset(0x10));
            r14 = var_2b8;
            var_28 = var_2b0;
        }
        
        let var_d0_1: i128 = var_218;
        let var_c0_1: i64 = var_208;
        let zmm0_7: i128 = var_1c8;
        let var_170_1: i64 = var_1b8;
        let var_180_1: i64 = zmm0_7;
        var_198 = var_2d8;
        var_1c8 = var_108;
        let var_150_1: i8 = rax_1;
        let mut var_14f_1: i32 = var_218;
        var_14f_1 = *var_218[3];
        core::iter::traits::iterator::Iterator::collect::hdb4a413cd924f414(&var_2d8, &var_148);
        let var_230_1: i128 = var_28;
        let var_240_1: i128 = r14;
        let var_250_1: i128 = *zmm0_7[8];
        let var_260_1: i128 = var_2c8;
        let var_270_1: i128 = var_198;
        let var_280_1: i128 = var_d0_1;
        var_294 = var_f8;
        var_2a4 = var_1c8;
        var_2b8 = var_2d8;
        var_2a8 = var_2c8;
        memcpy(arg1, &var_2b8, 0x98);
    }
    else
    {
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            &var_200, "userSomedumb\x1b[5m\x1b[9m <= tr…", 4) != 0
        {
            goto 'label_45ac71;
        }
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            &var_200, "role) = Zero\x1b[7mBool", 4) != 0
        {
            goto 'label_45ac71;
        }
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            &var_200, &data_418cd0, 4) != 0
        {
            goto 'label_45ac71;
        }
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            &var_200, "range: \nTry ' --help' for more …", 5) != 0
        {
            goto 'label_45ac71;
        }
        
        let rax_26: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h17cec20ae7398b16(&var_148);
        let mut var_2f8: i64;
        
        if rax_26 == 0
        {
            var_2f8 = -0x8000000000000000;
            'label_45b14d:
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..ffi..os_str..OsString$GT$$GT$::ha987e9ec2f8e9af9(&var_2f8);
            *arg1 = 0;
            arg1[1] = 8;
            arg1[2] = 0;
            arg1[3] = -0x7fffffffffffffff;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *rax_26.byte_offset(8), *rax_26.byte_offset(0x10));
            let rax_27: i64 = var_2a8;
            var_2f8 = var_2b8;
            
            if var_2f8 == -0x8000000000000000
            {
                goto 'label_45b14d;
            }
            
            let rax_28: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h17cec20ae7398b16(&var_148);
            let mut rax_29: fn() -> !;
            
            if rax_28 != 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3d18e39686a308b6(&var_2b8, *rax_28.byte_offset(8), *rax_28.byte_offset(0x10));
                rax_29 = var_2b8;
            }
            
            let mut var_88: i128;
            
            if rax_28 != 0 && rax_29 != -0x8000000000000000
            {
                let var_78_2: i64 = rax_27;
                var_88 = var_2f8;
                let var_70_2: i128 = var_148;
                let var_60_2: u128 = zmm1_1;
                let var_50_2: i128 = zmm0_2;
                let var_40_2: i128 = rsi_2;
                var_1c8 = rax_29;
                var_1c0 = var_2b0;
                uu_runcon::parse_command_line::_$u7b$$u7b$closure$u7d$$u7d$::h9385ddf6434ad80a(
                    &var_2b8, &var_88, &var_1c8);
                memcpy(arg1, &var_2b8, 0x98);
            }
            else
            {
                var_2b8 = 0xa;
                let rax_30: u64 = alloc::boxed::Box$LT$T$GT$::new::h1127e89508eb0964(&var_2b8);
                var_88 = var_2f8;
                let var_78_1: i64 = rax_27;
                let var_70_1: i128 = var_148;
                let var_60_1: u128 = zmm1_1;
                let var_50_1: i128 = zmm0_2;
                let var_40_1: i128 = rsi_2;
                arg1[1] = rax_30;
                arg1[2] = &data_4eac60;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$uu_runcon..parse_command_line$LT$core..iter..adapters..cloned..Cloned$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::hdf29c886f5faa993(&var_88);
            }
        }
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hebcc24dacbba70cf(&var_200)
}
