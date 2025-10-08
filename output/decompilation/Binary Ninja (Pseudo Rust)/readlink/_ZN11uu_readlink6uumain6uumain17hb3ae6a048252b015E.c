
  fn uu_readlink::uumain::uumain::hb3ae6a048252b015(arg1: i64) -> u64

{
    let mut var_2f8: *mut c_void;
    uu_readlink::uu_app::h793b492da9e17ae1(&var_2f8);
    let mut var_3d8: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h6eb9ab563aeff691(&var_3d8, 
        &var_2f8, arg1);
    let rax: i64 = var_3d8;
    let mut result: u64;
    let mut var_3d0: *mut i8;
    
    if -(rax) != -0x8000000000000000
    {
        let var_3a8: i64;
        let var_370_1: i64 = var_3a8;
        let var_3b8: i128;
        let var_380_1: i128 = var_3b8;
        let var_3c8: i128;
        let var_390_1: i128 = var_3c8;
        let mut var_3a0: i64 = rax;
        let var_398_1: *mut i8 = var_3d0;
        let rax_2: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3a0, "no-newline", 0xa);
        let rax_3: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3a0, "zeroAnsi -- \x1b[8mhelpNoneshim\x1b…", 4);
        let mut r12_1: i8 = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3a0, "silentquietverbosecanonicalizeca…", 6) == 0
        {
            r12_1 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_3a0, "quietverbosecanonicalizecanonica…", 5);
        }
        
        let rax_6: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3a0, "verbosecanonicalizecanonicalize-…", 7);
        let mut var_410_1: i8;
        let mut r15: i64;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3a0, "canonicalizecanonicalize-existin…", 0xc) != 0
        {
            var_410_1 = 2;
            r15 = 0;
        }
        else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3a0, "canonicalize-existingcanonicaliz…", 0x15) != 0
        {
            var_410_1 = 2;
            r15 = 0;
        }
        else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3a0, "canonicalize-missingfiles/home/3…", 0x14) == 0
        {
            r15 = 1;
            var_410_1 = 0;
        }
        else
        {
            var_410_1 = 2;
            r15 = 0;
        }
        
        let mut r13: u64;
        r13 = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_3a0, "canonicalize-existingcanonicaliz…", 0x15) == 0
        {
            r13 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_3a0, "canonicalize-missingfiles/home/3…", 0x14) * 2;
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h604b84311012769e(
            &var_2f8, &var_3a0);
        let mut var_338: i64;
        clap_builder::parser::error::MatchesError::unwrap::h2f6b63d5014fa269(&var_338, &var_2f8);
        let mut var_3f0: *mut c_void;
        let mut var_2f0: i128;
        
        if var_338 == 0
        {
            'label_454142:
            var_3f0 = nullptr;
            let var_3e8_1: i64 = 8;
            let var_3e0_1: i64 = 0;
            'label_45416e:
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h39064a62ec82a9c9(&var_3d8, "missing operandignoring --no-new…", 0xf);
            *var_2f0[8] = var_3c8;
            var_2f8 = var_3d8;
            let var_2e0_1: i32 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h67f3ec850b622d46(&var_2f8);
        }
        else
        {
            core::iter::traits::iterator::Iterator::collect::h5ce6d2ccbd0f0f51(&var_2f8, &var_338);
            let mut rax_10: *mut c_void = var_2f8;
            var_3d8 = var_2f0;
            
            if rax_10 == -0x8000000000000000
            {
                goto 'label_454142;
            }
            
            let mut var_3e8: *mut c_void;
            var_3e8 = var_3d8;
            var_3f0 = rax_10;
            let var_3e0: i64;
            
            if var_3e0 == 0
            {
                goto 'label_45416e;
            }
            
            if rax_2 == 0
            {
                goto 'label_4542d6;
            }
            
            rax_10 = var_3e0 == 1;
            let cond:1_1: bool = (r12_1 | rax_10) != 0;
            rax_10 = 0xb;
            let mut var_368: *mut i64;
            
            if !cond:1_1
            {
                let mut rax_14: i64;
                let mut rdx_2: *mut i8;
                rax_14 = uucore::util_name::h074417a1e6395129();
                var_3d8 = rax_14;
                var_3d0 = rdx_2;
                var_368 = &var_3d8;
                let var_360_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfbaa8bb8670c7e4b;
                var_2f8 = &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::VAL::hcfe05ba88467085d;
                var_2f0 = 2;
                let var_2d8_1: i64 = 0;
                *var_2f0[8] = &var_368;
                let mut var_2e0: i32;
                var_2e0 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                var_2f8 = &data_4e7260;
                var_2f0 = 1;
                *var_2f0[8] = 8;
                var_2e0 = {0};
                std::io::stdio::_eprint::h57899770eacec2ad(&var_2f8);
                'label_4542d6:
                rax_10 = 0xa;
                
                if rax_3 != 0
                {
                    rax_10 = nullptr;
                }
            }
            
            let mut rbp_2: *mut c_void = var_3e8;
            let rbx_4: i64 = var_3e0 << 3;
            let mut var_408: i128;
            let mut r12_2: *mut i8;
            let mut r15_1: i64;
            
            if r15 == 0
            {
                let mut rbx_1: *mut *mut c_void = rbx_4 * 3;
                let mut var_40c_1: i8;
                var_40c_1 = r13;
                
                loop
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h39064a62ec82a9c9(&var_2f8, *rbp_2.byte_offset(8), *rbp_2.byte_offset(0x10));
                    var_408 = var_2f8;
                    let var_3f8_2: i64 = *var_2f0[8];
                    uucore::features::fs::canonicalize::h72c983376269eb1b(&var_3d8, &var_408, 
                        var_40c_1, var_410_1);
                    r15_1 = var_3d8;
                    
                    if r15_1 == -0x8000000000000000
                    {
                        goto 'label_4544ad;
                    }
                    
                    r12_2 = var_3d0;
                    let result_2: u64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8a9bf85477ee84f6(uu_readlink::show::h5657d7991ffee1bc(r12_2, var_3c8, 
                        rax_10));
                    result = result_2;
                    
                    if result_2 != 0
                    {
                        break;
                    }
                    
                    core::mem::drop::h5ae26ee2c98bdfd3(r15_1, r12_2);
                    core::mem::drop::h5ae26ee2c98bdfd3(var_408, *var_408[8]);
                    rbp_2 += 0x18;
                    let temp1_1: *mut *mut c_void = rbx_1;
                    rbx_1 = &rbx_1[-3];
                    
                    if temp1_1 == 0x18
                    {
                        goto 'label_454491;
                    }
                }
                
                'label_454532:
                core::mem::drop::h5ae26ee2c98bdfd3(r15_1, r12_2);
            }
            else
            {
                let mut r13_1: i64 = rbx_4 * 3;
                
                loop
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h39064a62ec82a9c9(&var_2f8, *rbp_2.byte_offset(8), *rbp_2.byte_offset(0x10));
                    var_408 = var_2f8;
                    let var_3f8_1: i64 = *var_2f0[8];
                    std::fs::read_link::hf03a696a64960bcf(&var_3d8, &var_408);
                    r15_1 = var_3d8;
                    
                    if r15_1 == -0x8000000000000000
                    {
                        'label_4544ad:
                        var_368 = var_3d0;
                        
                        if rax_6 == 0
                        {
                            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5c738eb550163c25(&var_368);
                        }
                        else
                        {
                            *rbp_2.byte_offset(8);
                            *rbp_2.byte_offset(0x10);
                            let rax_20: u64 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hccfff5eaf084ccbb();
                            let mut var_350: i128;
                            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h7cfd439670e1efcc(&var_350, rax_20);
                            let var_2e0_2: i32 = 1;
                            var_2f8 = var_350;
                            let var_340: i64;
                            *var_2f0[8] = var_340;
                            result = alloc::boxed::Box$LT$T$GT$::new::h67f3ec850b622d46(&var_2f8);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h36d5fd9c4619d273(rax_20);
                        }
                        
                        break;
                    }
                    
                    r12_2 = var_3d0;
                    let result_1: u64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8a9bf85477ee84f6(uu_readlink::show::h5657d7991ffee1bc(r12_2, var_3c8, 
                        rax_10));
                    result = result_1;
                    
                    if result_1 != 0
                    {
                        goto 'label_454532;
                    }
                    
                    core::mem::drop::h5ae26ee2c98bdfd3(r15_1, r12_2);
                    core::mem::drop::h5ae26ee2c98bdfd3(var_408, *var_408[8]);
                    rbp_2 += 0x18;
                    let temp2_1: i64 = r13_1;
                    r13_1 -= 0x18;
                    
                    if temp2_1 == 0x18
                    {
                        'label_454491:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h45d700f1615bf2e1(&var_3f0);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he85f69f9b15164d4(&var_3a0);
                        return 0;
                    }
                }
            }
            core::mem::drop::h5ae26ee2c98bdfd3(var_408, *var_408[8]);
        }
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h45d700f1615bf2e1(&var_3f0);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he85f69f9b15164d4(&var_3a0);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_3d0);
    }
    result
}
