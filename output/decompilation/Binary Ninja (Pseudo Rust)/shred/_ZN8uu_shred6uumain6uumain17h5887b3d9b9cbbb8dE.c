
  fn uu_shred::uumain::uumain::h5887b3d9b9cbbb8d(arg1: i64) -> u64

{
    let mut var_2f8: i128;
    uu_shred::uu_app::hd2dcc3f31ff24fbd(&var_2f8);
    let mut var_3e0: *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::hb2603a8aac55f96b(&var_3e0, 
        &var_2f8, arg1);
    let rax: *mut c_void = var_3e0;
    let var_3d8: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3d8);
    }
    
    let var_3b0: i64;
    let var_360_1: i64 = var_3b0;
    let mut var_3c0: i128;
    let var_370_1: i128 = var_3c0;
    let mut var_3d0: i128;
    let var_380_1: i128 = var_3d0;
    let mut var_390: *mut c_void = rax;
    let var_388_1: i64 = var_3d8;
    let mut result: u64;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        &var_390, "filesizei128 as dyn ERANGEEDEADL…", 4) == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf24d55a9f5c3adef(&var_3e0, "missing file operandinvalid numb…", 0x14);
        let var_2e8_3: i64 = var_3d0;
        var_2f8 = var_3e0;
        let var_2e0_2: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h0cbabd4dbd3f10dd(&var_2f8);
    }
    else
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h092ce364be16c0e0(
            &var_2f8, &var_390, "iterationsuremoveforceexactverbo…", 0xa);
        let rax_3: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hd0a37637593e9037(
            "iterationsuremoveforceexactverbo…", 0xa, &var_2f8);
        
        if rax_3 == 0
        {
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
        
        let mut r14_1: *mut i8 = *rax_3.byte_offset(8);
        let r15_1: i64 = *rax_3.byte_offset(0x10);
        let mut var_3a0: i8;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_3a0, r14_1, 
            r15_1);
        let mut var_348: *mut i64;
        let mut var_2e0: i32;
        
        if var_3a0 == 0
        {
            let mut r12_1: i8 = 3;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_390, "uremoveforceexactverboseError fl…", 1) == 0
            {
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(&var_390, "removeforceexactverboseError flu…", 6) == 0
                {
                    r12_1 = 0;
                }
                else
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h092ce364be16c0e0(&var_2f8, &var_390, "removeforceexactverboseError flu…", 6);
                    let rax_11: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::hd0a37637593e9037(
                        "removeforceexactverboseError flu…", 6, &var_2f8);
                    
                    if rax_11 == 0
                    {
                        'label_45d68a:
                        var_2f8 = &data_4f9130;
                        *var_2f8[8] = 1;
                        let mut var_3f8: ();
                        let var_2e8_4: *mut c_void = &var_3f8;
                        var_2e0 = {0};
                        core::panicking::panic_fmt::h96f341d36638c225(&var_2f8);
                        /* no return */
                    }
                    
                    let rbx_1: i64 = *rax_11.byte_offset(8);
                    let r15_2: u64 = *rax_11.byte_offset(0x10);
                    r12_1 = 1;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0fae521c240e2ca1(rbx_1, r15_2, "unlinkinternal error: entered un…", 6) == 0
                    {
                        r12_1 = 2;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0fae521c240e2ca1(rbx_1, r15_2, "wi", 4) == 0
                        {
                            r12_1 = 3;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h0fae521c240e2ca1(rbx_1, r15_2, "wipesync", 8) == 0
                            {
                                goto 'label_45d68a;
                            }
                        }
                    }
                }
            }
            
            let rax_15: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_390, "forceexactverboseError flushing …", 5);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h092ce364be16c0e0(
                &var_2f8, &var_390, "sizei128 as dyn ERANGEEDEADLKENA…", 4);
            let rax_16: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hd0a37637593e9037(
                "sizei128 as dyn ERANGEEDEADLKENA…", 4, &var_2f8);
            let mut var_328: i128;
            let mut rax_17: i64;
            
            if rax_16 == 0
            {
                rax_17 = -0x8000000000000000;
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_2f8, rax_16);
                rax_17 = var_2f8;
                var_328 = var_2f8;
            }
            
            var_2f8 = rax_17;
            var_2f8 = var_328;
            let mut rax_18: i64;
            let mut rdx_6: i64;
            rax_18 = uu_shred::get_size::hc596c7d8cb6dc047(&var_2f8);
            let rax_19: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_390, "exactverboseError flushing stdou…", 5);
            r14_1 = rax_18 == 1;
            let rax_20: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_390, "zeroAnsi -- \x1b[8mhelpNoneshim\x1b…", 4);
            let rax_21: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_390, "verboseError flushing stdout: ", 7);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h8bd62655a1af8d38(
                &var_2f8, &var_390);
            clap_builder::parser::error::MatchesError::unwrap::h33ee07f20d67fd13(&var_3e0, 
                &var_2f8);
            
            if var_3e0 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let var_2c8_1: i128 = var_3b0;
            let mut var_2d8: i64;
            var_2d8 = var_3c0;
            let mut var_2e8: i64;
            var_2e8 = var_3d0;
            var_2f8 = var_3e0;
            
            loop
            {
                let rax_23: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::heca40172de734678(&var_2f8);
                
                if rax_23 == 0
                {
                    break;
                }
                
                let var_398: i64;
                let mut rax_24: u64;
                let mut rdx_8: *mut i64;
                rax_24 = uu_shred::wipe_file::h03ce7ff5299acd49(*rax_23.byte_offset(8), 
                    *rax_23.byte_offset(0x10), var_398, r12_1, rax_18, rdx_6, rax_19 | r14_1, 
                    rax_20, rax_21, rax_15);
                
                if rax_24 == 0
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h18201937fcef5433(0, rdx_8);
                }
                else
                {
                    let mut var_3f0: u64 = rax_24;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdx_8[0xb](rax_24));
                    let mut rax_26: i64;
                    let mut rdx_9: i64;
                    rax_26 = uucore::util_name::h074417a1e6395129();
                    var_3a0 = rax_26;
                    let var_398_1: i64 = rdx_9;
                    var_348 = &var_3a0;
                    let var_340_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h70866de6320419bf;
                    let var_338_1: *mut u64 = &var_3f0;
                    let var_330_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8d46ecfbc1450336;
                    var_3e0 = &data_4f9140;
                    let var_3d8_2: i64 = 3;
                    var_3c0 = 0;
                    var_3d0 = &var_348;
                    *var_3d0[8] = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_3e0);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h2f42d0ed9674364b(var_3f0, rdx_8);
                }
            }
            
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h5e7a0c77e1447be5(&var_390);
            return 0;
        }
        
        var_3e0 = nullptr;
        let var_3d8_1: *mut i8 = r14_1;
        var_3d0 = r15_1;
        *var_3d0[8] = 1;
        var_348 = &var_3e0;
        let var_340_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_2f8 = &data_4f9120;
        *var_2f8[8] = 1;
        let var_2d8_1: i64 = 0;
        let var_2e8_1: *mut *mut i64 = &var_348;
        var_2e0 = 1;
        let mut var_310: i128;
        core::option::Option$LT$T$GT$::map_or_else::h8c2fdc05c5d844dc(&var_310, &var_2f8);
        let var_2e0_1: i32 = 1;
        var_2f8 = var_310;
        let var_300: i64;
        let var_2e8_2: i64 = var_300;
        result = alloc::boxed::Box$LT$T$GT$::new::h0cbabd4dbd3f10dd(&var_2f8);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h5e7a0c77e1447be5(&var_390);
    result
}
