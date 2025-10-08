
  fn uu_chcon::parse_command_line::h80e4b743b4687404(arg1: *mut i64) -> i64

{
    let mut var_238: *mut *mut c_void;
    let rdx: i64;
    let rsi: *mut i64;
    clap_builder::builder::command::Command::try_get_matches_from::h74c3fe6b7768e9bb(&var_238, rsi, 
        rdx);
    let rcx: *mut *mut c_void = var_238;
    let result: i64;
    
    if -(rcx) == -0x8000000000000000
    {
        arg1[1] = 0xe;
        arg1[2] = result;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let var_208: i64;
    let var_190_1: i64 = var_208;
    let mut var_218: i128;
    let var_1a0_1: i128 = var_218;
    let mut var_228: i128;
    let var_1b0_1: i128 = var_228;
    let mut var_1c0: *mut *mut c_void = rcx;
    let result_1: i64 = result;
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_1c0, "verbosereferencerangerecursivefo…", 7);
    let mut var_23c_1: i8;
    let mut var_168: *mut *mut [i8; 0xbe];
    let mut var_158: i128;
    let mut r14_1: i8;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_1c0, "recursivefollow-arg-dir-sym-link…", 9) == 0
    {
        r14_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_1c0, "no-dereferencepreserve-root(uuti…", 0xe) ^ 1;
        var_23c_1 = 0;
        'label_45c6d8:
        let rax_7: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_1c0, "preserve-root(uutils coreutils) …", 0xd);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc5f2a3eca716ea62(
            &var_238, &var_1c0);
        clap_builder::parser::error::MatchesError::unwrap::hec60d137fbc4d6ef(&var_168, &var_238);
        let mut var_148: i128;
        let mut var_138: i128;
        let mut var_c8: fn() -> !;
        
        if var_168 == 0
        {
            var_c8 = core::ops::function::FnOnce::call_once::he5068d866819ed9a;
            let var_c0_1: *const i8 = "/home/34r7hm4n/.cargo/registry/s…";
            let var_b8_1: *const i8 = "/home/34r7hm4n/.cargo/registry/s…";
            let var_b0_1: i64 = 0;
            let var_a0_1: i64 = 0;
            let var_90_1: i64 = 0;
        }
        else
        {
            let var_98_1: i128 = var_138;
            let var_a8_1: i128 = var_148;
            let mut var_b8: i64;
            var_b8 = var_158;
            var_c8 = var_168;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0477ef604a8ad906(
            &var_238, &var_1c0, "referencerangerecursivefollow-ar…", 9);
        let rax_8: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h73d1c29dbb6365b1(
            "referencerangerecursivefollow-ar…", 9, &var_238);
        let mut var_188: i128;
        let mut var_178: i64;
        let mut var_160: i64;
        let mut var_128: i128;
        let mut var_118: i128;
        let mut rax_10: *mut *mut [i8; 0xbe];
        
        if rax_8 == 0
        {
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_1c0, "userSomedumb\x1b[5m\x1b[9m <= tr…", 4) != 0
            {
                'label_45c8b4:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0477ef604a8ad906(&var_238, &var_1c0, "userSomedumb\x1b[5m\x1b[9m <= tr…", 4);
                let rax_15: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h73d1c29dbb6365b1(
                    "userSomedumb\x1b[5m\x1b[9m <= tr…", 4, &var_238);
                let mut var_108: i64;
                let mut var_f8: i64;
                
                if rax_15 == 0
                {
                    var_108 = -0x8000000000000000;
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd084c32dadc89fd4(&var_238, *rax_15.byte_offset(8), *rax_15.byte_offset(0x10));
                    var_f8 = var_228;
                    var_108 = var_238;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0477ef604a8ad906(&var_238, &var_1c0, "role) = Zero\x1b[7mBool", 4);
                let rax_21: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h73d1c29dbb6365b1(
                    "role) = Zero\x1b[7mBool", 4, &var_238);
                let mut var_e8: i64;
                let mut var_d8: i64;
                
                if rax_21 == 0
                {
                    var_e8 = -0x8000000000000000;
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd084c32dadc89fd4(&var_238, *rax_21.byte_offset(8), *rax_21.byte_offset(0x10));
                    var_d8 = var_228;
                    var_e8 = var_238;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0477ef604a8ad906(&var_238, &var_1c0, &data_419360, 4);
                let rax_23: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h73d1c29dbb6365b1(
                    &data_419360, 4, &var_238);
                
                if rax_23 == 0
                {
                    var_188 = -0x8000000000000000;
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd084c32dadc89fd4(&var_238, *rax_23.byte_offset(8), *rax_23.byte_offset(0x10));
                    var_178 = var_228;
                    var_188 = var_238;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0477ef604a8ad906(&var_238, &var_1c0, "rangerecursivefollow-arg-dir-sym…", 5);
                let rax_25: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::h73d1c29dbb6365b1(
                    "rangerecursivefollow-arg-dir-sym…", 5, &var_238);
                let mut rcx_2: *mut *mut c_void = -0x8000000000000000;
                let mut var_88: i128;
                
                if rax_25 != 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd084c32dadc89fd4(&var_238, *rax_25.byte_offset(8), *rax_25.byte_offset(0x10));
                    rcx_2 = var_238;
                    var_88 = result;
                }
                
                var_158 = var_f8;
                var_168 = var_108;
                var_158 = var_e8;
                *var_148[8] = var_d8;
                var_138 = var_188;
                var_128 = var_178;
                *var_128[8] = rcx_2;
                var_118 = var_88;
                goto 'label_45cc89;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_1c0, "role) = Zero\x1b[7mBool", 4) != 0
            {
                goto 'label_45c8b4;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_1c0, &data_419360, 4) != 0
            {
                goto 'label_45c8b4;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_1c0, "rangerecursivefollow-arg-dir-sym…", 5) != 0
            {
                goto 'label_45c8b4;
            }
            
            let rax_35: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7a165e3d750885e(&var_c8);
            
            if rax_35 != 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd084c32dadc89fd4(&var_238, *rax_35.byte_offset(8), *rax_35.byte_offset(0x10));
                *var_158[8] = var_228;
                var_160 = var_238;
                rax_10 = -0x8000000000000002;
                goto 'label_45c807;
            }
            
            arg1[1] = 0xa;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd084c32dadc89fd4(&var_238, *rax_8.byte_offset(8), *rax_8.byte_offset(0x10));
            *var_158[8] = var_228;
            var_160 = var_238;
            rax_10 = -0x8000000000000001;
            'label_45c807:
            var_168 = rax_10;
            'label_45cc89:
            core::iter::traits::iterator::Iterator::collect::hc92e52921e991262(&var_188, &var_c8);
            
            if var_178 == 0
            {
                arg1[1] = 0xb;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::hfed6b9b34b8c787e(&var_188);
                core::ptr::drop_in_place$LT$uu_chcon..CommandLineMode$GT$::hb5c779bffb711795(
                    &var_168);
            }
            else
            {
                var_228 = var_168;
                var_228 = var_178;
                let zmm0_9: i128 = var_188;
                var_238 = zmm0_9;
                *arg1 = zmm0_9;
                *arg1.byte_offset(0x20) = var_158;
                *arg1.byte_offset(0x30) = var_208;
                *arg1.byte_offset(0x40) = var_148;
                *arg1.byte_offset(0x50) = var_138;
                *arg1.byte_offset(0x60) = var_128;
                arg1[2] = var_228;
                arg1[3] = *var_228[8];
                arg1[0xe] = *var_118[8];
                arg1[0xf] = rax_1;
                *arg1.byte_offset(0x79) = rax_7;
                *arg1.byte_offset(0x7a) = r14_1;
                *arg1.byte_offset(0x7b) = var_23c_1;
            }
        }
    }
    else
    {
        let mut var_230: i64;
        let mut rax_5: i64;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_1c0, "follow-dir-sym-linksno-follow-sy…", 0x14) == 0
        {
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_1c0, "follow-arg-dir-sym-linkfollow-di…", 0x17) != 0
            {
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(&var_1c0, "no-dereferencepreserve-root(uuti…", 0xe) == 0
                {
                    r14_1 = 1;
                    var_23c_1 = 3;
                    goto 'label_45c6d8;
                }
                
                var_168 = &uu_chcon::options::RECURSIVE::h433a04139793bdf7;
                let var_160_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
                var_158 = &uu_chcon::options::dereference::NO_DEREFERENCE::hc7d4d7bee8a13a98;
                *var_158[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
                var_238 = &data_4ef4f0;
                var_230 = 3;
                var_218 = 0;
                var_228 = &var_168;
                *var_228[8] = 2;
                let mut var_60: i128;
                core::option::Option$LT$T$GT$::map_or_else::hc21cbd6b2ca648ca(&var_60, &var_238);
                *var_238[4] = var_60;
                let var_50: i64;
                rax_5 = var_50;
                goto 'label_45ca86;
            }
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_1c0, "dereferenceno-dereferencepreserv…", 0xb) == 0
            {
                var_23c_1 = 1;
                r14_1 = 0;
                goto 'label_45c6d8;
            }
            
            var_168 = &uu_chcon::options::RECURSIVE::h433a04139793bdf7;
            let var_160_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
            var_158 = &uu_chcon::options::dereference::DEREFERENCE::h91753ff18563b15f;
            *var_158[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
            var_238 = &data_4ef520;
            var_230 = 3;
            var_218 = 0;
            var_228 = &var_168;
            *var_228[8] = 2;
            let mut var_48: i128;
            core::option::Option$LT$T$GT$::map_or_else::hc21cbd6b2ca648ca(&var_48, &var_238);
            *var_238[4] = var_48;
            let var_38: i64;
            rax_5 = var_38;
            goto 'label_45ca86;
        }
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_1c0, "no-dereferencepreserve-root(uuti…", 0xe) == 0
        {
            r14_1 = 1;
            var_23c_1 = 2;
            goto 'label_45c6d8;
        }
        
        var_168 = &uu_chcon::options::RECURSIVE::h433a04139793bdf7;
        let var_160_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
        var_158 = &uu_chcon::options::dereference::NO_DEREFERENCE::hc7d4d7bee8a13a98;
        *var_158[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd8baa6bbb24b7a31;
        var_238 = &data_4ef4f0;
        var_230 = 3;
        var_218 = 0;
        var_228 = &var_168;
        *var_228[8] = 2;
        let mut var_78: i128;
        core::option::Option$LT$T$GT$::map_or_else::hc21cbd6b2ca648ca(&var_78, &var_238);
        *var_238[4] = var_78;
        let var_68: i64;
        rax_5 = var_68;
        'label_45ca86:
        *var_228[4] = rax_5;
        arg1[1] = 0xd;
        *arg1.byte_offset(0xc) = var_238;
        arg1[3] = var_230;
        arg1[4] = *var_228[4];
        *arg1 = -0x8000000000000000;
    }
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h64662adfe54568ce(&var_1c0)
}
