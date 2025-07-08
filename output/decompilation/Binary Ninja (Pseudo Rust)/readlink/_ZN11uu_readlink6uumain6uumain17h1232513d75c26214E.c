
  fn uu_readlink::uumain::uumain::h1232513d75c26214(arg1: i64) -> *mut i64

{
    let mut var_2f8: i128;
    uu_readlink::uu_app::h387e9546761b38a6(&var_2f8);
    let mut var_388: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h1e41c31790ef42a3(&var_388, 
        &var_2f8, arg1);
    let rax: i64 = var_388;
    let mut result: *mut i64;
    let mut var_380: i64;
    
    if rax != -0x8000000000000000
    {
        let var_358: i64;
        let var_318_1: i64 = var_358;
        let var_368: i128;
        let var_328_1: i128 = var_368;
        let var_378: i128;
        let var_338_1: i128 = var_378;
        let mut var_348: i64 = rax;
        let var_340_1: i64 = var_380;
        let rax_2: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "no-newline) = Zero\x1b[7m", 0xa);
        let rax_3: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "zeroAnsi -- \x1b[8mhelpNoneshimn…", 4);
        let mut r15: *mut i128;
        r15 = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "silentquietverbosecanonicalizeca…", 6) == 0
        {
            r15 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_348, "quietverbosecanonicalizecanonica…", 5);
        }
        
        let rax_6: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "verbosecanonicalizecanonicalize-…", 7);
        let mut var_3dc_1: i8;
        let mut rbp: i64;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "canonicalizecanonicalize-existin…", 0xc) != 0
        {
            var_3dc_1 = 2;
            rbp = 0;
        }
        else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "canonicalize-existingcanonicaliz…", 0x15) != 0
        {
            var_3dc_1 = 2;
            rbp = 0;
        }
        else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "canonicalize-missinga Display im…", 0x14) == 0
        {
            rbp = 1;
            var_3dc_1 = 0;
        }
        else
        {
            var_3dc_1 = 2;
            rbp = 0;
        }
        
        let mut r12_1: i8 = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_348, "canonicalize-existingcanonicaliz…", 0x15) == 0
        {
            r12_1 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_348, "canonicalize-missinga Display im…", 0x14) * 2;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h1d4f4734d0c0ae5a(
            &var_2f8, &var_348, "filesignoring --no-newline with …", 5);
        clap_builder::parser::error::MatchesError::unwrap::heee1dc496edd81bc(&var_388, 
            "filesignoring --no-newline with …", 5, &var_2f8);
        let mut var_3b0: *mut i64;
        let mut var_2e8: *mut *mut i64;
        
        if var_388 == 0
        {
            'label_468fdb:
            var_3b0 = nullptr;
            let var_3a8_1: i64 = 8;
            let var_3a0_1: i64 = 0;
            'label_468ffb:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd2f55730b4265e1d(
                &var_388);
            var_2e8 = var_378;
            var_2f8 = var_388;
            *var_2e8[8] = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::hb33387f1cdb47052(&var_2f8);
        }
        else
        {
            let var_2c8_1: i128 = var_358;
            let mut var_2d8_1: i128 = var_368;
            var_2e8 = var_378;
            var_2f8 = var_388;
            let mut var_3d8: *mut i64;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h18ad71db7dde33d8(&var_3d8, &var_2f8);
            let rax_10: *mut i64 = var_3d8;
            let mut var_3d0: i128;
            let mut var_398: i128 = var_3d0;
            
            if rax_10 == -0x8000000000000000
            {
                goto 'label_468fdb;
            }
            
            let mut var_3a8: i64;
            var_3a8 = var_398;
            var_3b0 = rax_10;
            let var_3a0: i64;
            
            if var_3a0 == 0
            {
                goto 'label_468ffb;
            }
            
            if rax_2 == 0
            {
                goto 'label_469155;
            }
            
            let mut rax_14: i64;
            rax_14 = var_3a0 == 1;
            r15 |= rax_14;
            let cond:1_1: bool = r15 != 0;
            r15 = 0xb;
            
            if !cond:1_1
            {
                let mut rax_15: i64;
                let mut rdx_2: i64;
                rax_15 = uucore::util_name::h60d842bf27b05e82();
                var_388 = rax_15;
                var_380 = rdx_2;
                var_3d8 = &var_388;
                var_3d0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4d4ff57300358a11;
                var_2f8 = &data_517ec0;
                *var_2f8[8] = 2;
                var_2d8_1 = 0;
                var_2e8 = &var_3d8;
                var_2e8 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                var_2f8 = &data_517f38;
                *var_2f8[8] = 1;
                var_2e8 = 8;
                *var_2e8[8] = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_2f8);
                'label_469155:
                r15 = 0xa;
                
                if rax_3 != 0
                {
                    r15 = nullptr;
                }
            }
            
            var_398 = var_3a8;
            *var_398[8] = var_3a8 + var_3a0 * 0x18;
            let rax_17: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4c889e5f4ccc249(&var_398);
            
            if rax_17 == 0
            {
                'label_469356:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1610dcc674efe5b2(&var_3b0);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf3bdd7c49eae813f(&var_348);
                return nullptr;
            }
            
            let mut r14_2: *mut c_void = rax_17;
            
            if rbp == 0
            {
                loop
                {
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_2f8, 
                        *r14_2.byte_offset(8), *r14_2.byte_offset(0x10));
                    var_3d8 = var_2f8;
                    *var_3d0[8] = var_2e8;
                    uucore::features::fs::canonicalize::hdcf8813f1915eb73(&var_388, &var_3d8, 
                        r12_1, var_3dc_1);
                    
                    if var_388 == -0x8000000000000000
                    {
                        break;
                    }
                    
                    var_2f8 = var_388;
                    let rsi_9: *mut *mut i64 = var_378;
                    var_2e8 = rsi_9;
                    let result_2: *mut i64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h375a01d8819329c7(uu_readlink::show::hf8ca6ca696dc2285(*var_2f8[8], 
                        rsi_9, r15));
                    result = result_2;
                    
                    if result_2 != 0
                    {
                        goto 'label_4693fb;
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&var_2f8);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&var_3d8);
                    let rax_23: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4c889e5f4ccc249(&var_398);
                    r14_2 = rax_23;
                    
                    if rax_23 == 0
                    {
                        goto 'label_469356;
                    }
                }
            }
            else
            {
                loop
                {
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_2f8, 
                        *r14_2.byte_offset(8), *r14_2.byte_offset(0x10));
                    var_3d8 = var_2f8;
                    *var_3d0[8] = var_2e8;
                    std::fs::read_link::he43356407758612b(&var_388, &var_3d8);
                    
                    if var_388 == -0x8000000000000000
                    {
                        break;
                    }
                    
                    var_2f8 = var_388;
                    let rsi_6: *mut *mut i64 = var_378;
                    var_2e8 = rsi_6;
                    let result_1: *mut i64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h375a01d8819329c7(uu_readlink::show::hf8ca6ca696dc2285(*var_2f8[8], 
                        rsi_6, r15));
                    result = result_1;
                    
                    if result_1 != 0
                    {
                        'label_4693fb:
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(
                            &var_2f8);
                        goto 'label_469420;
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&var_2f8);
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&var_3d8);
                    let rax_20: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf4c889e5f4ccc249(&var_398);
                    r14_2 = rax_20;
                    
                    if rax_20 == 0
                    {
                        goto 'label_469356;
                    }
                }
            }
            
            if rax_6 == 0
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6923bc10bd1d0617(var_380);
            }
            else
            {
                let mut var_3b8: *mut i128 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hc5adabb7353559e2(var_380, r14_2);
                let mut var_310: i128;
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hc17df59e5abcc7e2(
                    &var_310, &var_3b8);
                *var_2e8[8] = 1;
                var_2f8 = var_310;
                let var_300: *mut *mut i64;
                var_2e8 = var_300;
                result = alloc::boxed::Box$LT$T$GT$::new::hb33387f1cdb47052(&var_2f8);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::hafbe285716c6b2ef(var_3b8);
            }
            
            'label_469420:
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd813e929d379641d(&var_3d8);
        }
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h1610dcc674efe5b2(&var_3b0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf3bdd7c49eae813f(&var_348);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_380);
    }
    result
}
