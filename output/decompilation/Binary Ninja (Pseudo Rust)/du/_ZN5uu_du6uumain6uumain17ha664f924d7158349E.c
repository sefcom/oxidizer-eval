
  fn uu_du::uumain::uumain::ha664f924d7158349(arg1: i64) -> *mut i64

{
    let mut result_7: *mut *mut [i8; 0xec];
    uu_du::uu_app::h2f2ed9ce6c921f55(&result_7);
    let mut result_12: *mut *mut [i8; 0xec];
    clap_builder::builder::command::Command::try_get_matches_from::h1d731ee65d6f07e1(&result_12, 
        &result_7, arg1);
    let result_21: *mut *mut [i8; 0xec] = result_12;
    let mut result: *mut i64;
    let mut result_6: *mut i128;
    
    if result_21 != -0x8000000000000000
    {
        let var_608: i64;
        let var_6f0_1: i64 = var_608;
        let var_618: [i8; 0x10];
        let var_700_1: [i8; 0x10] = var_618;
        let mut var_628: i128;
        let var_710_1: i128 = var_628;
        let mut result_23: *mut *mut [i8; 0xec] = result_21;
        let result_11: *mut i128 = result_6;
        let rax_1: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &result_23, "s-hsibkmallSone-file-systemderef…", 1);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h054e7a0d8829c39a(
            &result_7, &result_23, "dfiles0-from", 1);
        let mut rdx_1: *mut i64 = &result_7;
        let rax_2: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h4a878dbdec5af33f("dfiles0-from", 1, 
            rdx_1);
        let mut rsi_3: *mut i8;
        
        if rax_2 == 0
        {
            rsi_3 = nullptr;
        }
        else
        {
            rsi_3 = *rax_2.byte_offset(8);
            rdx_1 = *rax_2.byte_offset(0x10);
        }
        
        uu_du::parse_depth::h0681c409b9251d40(&result_7, rsi_3, rdx_1, rax_1, rax_2);
        let result_1: *mut i64;
        result = result_1;
        
        if result_7 == 0
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h054e7a0d8829c39a(
                &result_7, &result_23, "files0-from", 0xb);
            let rax_3: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h4a878dbdec5af33f("files0-from", 
                0xb, &result_7);
            let mut result_2: *mut i128;
            let mut result_19: *mut *mut [i8; 0xec];
            let mut var_4d8: *mut i64;
            let var_408: *mut *mut c_void;
            let mut result_16: *mut *mut [i8; 0xec];
            
            if rax_3 == 0
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h054e7a0d8829c39a(&result_7, &result_23, "FILEcharWORDJuly ->  to \x1b[2mA…", 4);
                
                if clap_builder::parser::error::MatchesError::unwrap::h4a878dbdec5af33f(
                    "FILEcharWORDJuly ->  to \x1b[2mA…", 4, &result_7) == 0
                {
                    let rax_9: *mut i128 =
                        alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
                    
                    if rax_9 == 0
                    {
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                        /* no return */
                    }
                    
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&result_7, 
                        ".block-size%Y-%m-%d %H:%Mthresho…", 1);
                    var_628 = var_408;
                    let zmm0_4: i128 = result_7;
                    result_12 = zmm0_4;
                    rax_9[1] = var_408;
                    *rax_9 = zmm0_4;
                    alloc::slice::hack::into_vec::hf1728c9a4db047f5(&result_19, rax_9, 1);
                    goto 'label_4906f1;
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h86e016984092ad1b(&result_7, &result_23, "FILEcharWORDJuly ->  to \x1b[2mA…", 4);
                clap_builder::parser::error::MatchesError::unwrap::h687c3865e1f98265(&result_12, 
                    "FILEcharWORDJuly ->  to \x1b[2mA…", 4, &result_7);
                
                if result_12 == 0
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                let var_48_1: i128 = var_608;
                let var_58_1: [i8; 0x10] = var_618;
                let var_68_1: i128 = var_628;
                let mut var_78: i128 = result_12;
                _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h29bb53967d410aec(&result_19, &var_78);
                'label_4906f1:
                result_16 = 1;
                let var_730_1: i8 = result_16;
                let mut var_728_1: i8 = 3;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(&result_23, "timecodetip:\x1b[3mu128for<keysK…", 4) != 0
                {
                    var_728_1 =
                        uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h55f74bd9e13c9c95(
                        &result_23);
                }
                
                let mut rbx_2: i64 = 1;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "hsibkmallSone-file-systemderefer…", 1) != 0
                {
                    goto 'label_490874;
                }
                
                let mut result_3: *mut i64;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "sibkmallSone-file-systemderefere…", 2) == 0
                {
                    result_3 = 1;
                    rbx_2 = 2;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "bkmallSone-file-systemdereferenc…", 1) != 0
                    {
                        goto 'label_490874;
                    }
                    
                    result_3 = 0x400;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "kmallSone-file-systemdereference…", 1) != 0
                    {
                        goto 'label_490874;
                    }
                    
                    result_3 = 0x100000;
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "mallSone-file-systemdereferencel…", 1) != 0
                    {
                        goto 'label_490874;
                    }
                    
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h054e7a0d8829c39a(&result_7, &result_23, "block-size%Y-%m-%d %H:%Mthreshol…", 0xa);
                    let mut rdx_7: u64 = &result_7;
                    let rax_18: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h4a878dbdec5af33f(
                        "block-size%Y-%m-%d %H:%Mthreshol…", 0xa, rdx_7);
                    let mut rsi_17: *mut c_void;
                    
                    if rax_18 == 0
                    {
                        rsi_17 = nullptr;
                    }
                    else
                    {
                        *rax_18.byte_offset(0x10);
                        let mut rax_19: *mut c_void;
                        rax_19 = core::ops::function::FnOnce::call_once::h6d3abf6d65498710(
                            *rax_18.byte_offset(8));
                        rsi_17 = rax_19;
                    }
                    
                    uu_du::read_block_size::h76babfb70e66ee44(&result_7, rsi_17, rdx_7);
                    result_2 = result_7;
                    
                    if result_2 == 0
                    {
                        result_3 = result_1;
                        goto 'label_490874;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h7016e6caa84af12f(&result_19);
                }
                else
                {
                    rbx_2 = 0;
                    'label_490874:
                    let rax_20: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "allSone-file-systemdereferencelv…", 3);
                    let rax_21: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "Sone-file-systemdereferencelverb…", 1);
                    let rax_22: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "one-file-systemdereferencelverbo…", 0xf);
                    
                    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "dereferencelverbosetime-stylecin…", 0xb) == 0
                    {
                        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "dereference-argsConnection reset…", 0x10) == 0
                        {
                            result_12 = -0x8000000000000002;
                        }
                        else
                        {
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h762e0872a0a798d1(&result_7, &result_19);
                            var_628 = var_408;
                            result_12 = result_7;
                        }
                    }
                    else
                    {
                        result_12 = -0x8000000000000000;
                    }
                    
                    let rax_27: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "lverbosetime-stylecinodesapparen…", 1);
                    let rax_28: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "verbosetime-stylecinodesapparent…", 7);
                    uu_du::build_exclude_patterns::h0244be58956798cb(&result_7, &result_23);
                    let result_17: *mut *mut [i8; 0xec] = result_7;
                    result_2 = result_1;
                    let mut r12_1: *mut i64 = var_408;
                    
                    if result_17 != -0x8000000000000000
                    {
                        let var_660_1: i8 = rax_20;
                        let var_65f_1: i8 = rax_21;
                        let var_65e_1: i8 = rax_22;
                        let var_678_1: i128 = result_12;
                        let var_668_1: i64 = var_628;
                        let var_65d_1: i8 = rax_27;
                        let mut result_20: *mut *mut [i8; 0xec] = result_17;
                        let result_5: *mut i128 = result_2;
                        let var_680_1: *mut i64 = r12_1;
                        let mut rbx_3: i8;
                        
                        if var_728_1 != 3
                        {
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h054e7a0d8829c39a(&result_7, &result_23, "time-stylecinodesapparent-size0f…", 0xa);
                            let mut rdx_8: u64 = &result_7;
                            let rax_29: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h4a878dbdec5af33f("time-stylecinodesapparent-size0f…", 0xa, 
                                rdx_8);
                            let mut rsi_21: i64;
                            
                            if rax_29 == 0
                            {
                                rsi_21 = 0;
                            }
                            else
                            {
                                rsi_21 = *rax_29.byte_offset(8);
                                rdx_8 = *rax_29.byte_offset(0x10);
                            }
                            
                            uu_du::parse_time_style::h4c003b6524a78ee2(&result_7, rsi_21, rdx_8);
                            result_2 = result_1;
                            r12_1 = var_408;
                            
                            if result_7 == 0
                            {
                                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hc7e9e3888145a534(&result_7, result_2, r12_1);
                                goto 'label_490b12;
                            }
                            
                            rbx_3 = 0;
                            let mut rax_30: i32;
                            rax_30 = 1;
                            let var_730_2: i32 = rax_30;
                        }
                        else
                        {
                            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hc7e9e3888145a534(&result_7, "%Y-%m-%d %H:%Mthreshold: warning…", 0xe);
                            'label_490b12:
                            let mut var_658: i128 = result_7;
                            let rax_32: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "cinodesapparent-size0failed to s…", 1);
                            let rax_33: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "inodesapparent-size0failed to sp…", 6);
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h054e7a0d8829c39a(&result_7, &result_23, "threshold: warning: options --ap…", 9);
                            let rax_34: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h4a878dbdec5af33f("threshold: warning: options --ap…", 9, 
                                &result_7);
                            
                            if rax_34 == 0
                            {
                                result_2 = 2;
                                'label_490bfa:
                                rbx_3 = 1;
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "apparent-size0failed to spawn th…", 0xd) == 0
                                {
                                    rbx_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "bkmallSone-file-systemdereferenc…", 1);
                                }
                                
                                let mut var_408_2: *mut *mut *mut c_void = var_408;
                                result_7 = var_658;
                                let mut rax_40: i8 = 0xa;
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "0failed to spawn thread/rustc/8b…", 1) != 0
                                {
                                    rax_40 = 0;
                                }
                                
                                let var_548_1: i8 = rax_32;
                                let var_547_1: i8 = rax_33;
                                let var_588_1: *mut *mut c_void = var_408;
                                let var_578_1: *mut i64 = r12_1;
                                let var_546_1: i8 = rbx_3;
                                let result_13: *mut i64 = result_3;
                                let var_544_1: i8 = var_728_1;
                                let zmm0_9: i128 = result_7;
                                let var_550_1: *mut *mut *mut c_void = var_408_2;
                                let var_543_1: i8 = rax_40;
                                let var_545_1: i8 = rax_1;
                                let mut var_4d0: fn(arg1: *mut i64, arg2: i64) -> i64;
                                let mut var_3f8: i64;
                                
                                if rax_33 != 0
                                {
                                    let rax_42: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, 
                                        "apparent-size0failed to spawn th…", 0xd);
                                    let mut rax_43: i8;
                                    
                                    if rax_42 == 0
                                    {
                                        rax_43 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&result_23, "bkmallSone-file-systemdereferenc…", 
                                            1);
                                    }
                                    
                                    if rax_42 != 0 || rax_43 != 0
                                    {
                                        let mut result_22: *mut *mut [i8; 0xec];
                                        let mut result_18: *mut i128;
                                        result_22 = uucore::util_name::h60d842bf27b05e82();
                                        result_12 = result_22;
                                        result_6 = result_18;
                                        var_4d8 = &result_12;
                                        var_4d0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h66ba19a1edff4d20;
                                        result_7 = &data_580840;
                                        let var_410_1: i64 = 2;
                                        var_3f8 = 0;
                                        let var_408_3: *mut *mut i64 = &var_4d8;
                                        let mut var_400_2: i64 = 1;
                                        std::io::stdio::_eprint::hcdfeec148c7134f7(&result_7);
                                        result_7 = &data_580860;
                                        let var_410_2: i64 = 1;
                                        var_408_2 = 8;
                                        var_400_2 = {0};
                                        std::io::stdio::_eprint::hcdfeec148c7134f7(&result_7);
                                    }
                                }
                                
                                std::sync::mpmc::channel::hf50762970a707a66(&result_7);
                                let zmm1_3: i128 = var_408_2;
                                let mut var_6b8: i128 = result_7;
                                let var_3d8_1: i128 = var_550_1;
                                let var_3e8_1: i128 = zmm0_9;
                                var_3f8 = rbx_2;
                                var_408_2 = result_2;
                                result_7 = result;
                                let var_3c8_1: i128 = zmm1_3;
                                var_628 = -0x8000000000000000;
                                result_12 = nullptr;
                                std::thread::Builder::spawn_unchecked::h9138afae89b58c43(&var_4d8, 
                                    &result_12);
                                let mut var_4f0: i128;
                                core::result::Result$LT$T$C$E$GT$::expect::hb14475a3d0f2055b(
                                    &var_4f0, &var_4d8);
                                let mut var_148: ();
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h37f14d06f57da7b6(&var_148, &result_19);
                                let mut var_540: i64;
                                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf74d03b5de3eceed(&var_540, &var_148);
                                
                                if var_540 != -0x8000000000000000
                                {
                                    loop
                                    {
                                        let mut var_6d8: i128 = var_540;
                                        let var_530: size_t;
                                        let mut result_14: *mut i128;
                                        let mut var_520: *mut c_void;
                                        let var_4c8: i64;
                                        let mut var_128: *mut *mut c_void;
                                        let mut var_120: fn(arg1: *mut c_void, arg2: *mut c_void)
                                            -> i64;
                                        
                                        if var_680_1 == 0
                                        {
                                            'label_491191:
                                            uu_du::Stat::new::h9e91ef33e1f296e6(&var_128, 
                                                *var_6d8[8], var_530, nullptr, &result_20);
                                            let r15: *mut *mut c_void = var_128;
                                            let mut var_6e0_1: i8;
                                            var_6e0_1 = var_120;
                                            let mut var_4c0: i8;
                                            
                                            if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_128, 
                                                *data_40ef80)) != 0xffff
                                            {
                                                var_728_1 = r15;
                                                memcpy(&var_4d8, &var_128, 0x90);
                                                _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h7a2691408c015360(&result_7);
                                                let var_508_1: i128 = var_3f8;
                                                let var_518_1: i128 = var_408_2;
                                                result_14 = result_7;
                                                
                                                if (var_4d8 | var_4d0) != 0
                                                {
                                                    r12_1 = 1;
                                                    let var_4b8: i64;
                                                    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h6f65539fc9a3e1b3(&result_14, var_4c8, var_4c0, var_4b8);
                                                }
                                                
                                                memcpy(&result_7, &var_4d8, 0x90);
                                                uu_du::du::ha667a9e24cfc9f10(&result_12, &result_7, 
                                                    &result_20, 0, &result_14, &var_6b8);
                                                let rdi_88: *mut *mut *mut c_void = var_628;
                                                
                                                if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(
                                                    result_12, *data_40ef80)) == 0xffff
                                                {
                                                    result_2 = uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h63df98f491ef9f64(rdi_88);
                                                    'label_4915d1:
                                                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uu_du..FileInfo$GT$$GT$::he0624b804eba8864(&result_14);
                                                    
                                                    if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(
                                                        var_128, *data_40ef80)) != 0xffff
                                                    {
                                                        goto 'label_491631;
                                                    }
                                                    
                                                    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_du..Stat$C$std..io..error..Error$GT$$GT$::hbacf2d5ca1b5111b(&var_128);
                                                    goto 'label_491631;
                                                }
                                                
                                                let var_5b8: [i8; 0x10];
                                                let var_398_1: [i8; 0x10] = var_5b8;
                                                let var_5c8: [i8; 0x10];
                                                let var_3a8_1: [i8; 0x10] = var_5c8;
                                                let var_5d8: [i8; 0x10];
                                                let var_3b8_1: [i8; 0x10] = var_5d8;
                                                let var_5e8: i128;
                                                let var_3c8_2: i128 = var_5e8;
                                                let var_5f8: i128;
                                                let var_3d8_2: i128 = var_5f8;
                                                let var_3e8_2: i128 = var_608;
                                                var_3f8 = var_618;
                                                let result_15: *mut i128 = result_6;
                                                result_7 = result_12;
                                                var_408_2 = rdi_88;
                                                let var_400_6: i64 = *var_628[8];
                                                let var_388_1: i64 = 0;
                                                std::sync::mpmc::Sender$LT$T$GT$::send::h9ce6a5c779dfea29(&result_12, &var_6b8, &result_7);
                                                let temp0_10: u32 = _mm_movemask_epi8(
                                                    __pcmpeqb_xmmdq_memdq(result_12, data_40f110));
                                                let mut result_10: *mut i128;
                                                
                                                if temp0_10 != 0xffff
                                                {
                                                    memcpy(&result_7, &result_12, 0xa0);
                                                    result_10 = uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h225492b47a33b2ef(&result_7);
                                                    result_2 = result_10;
                                                }
                                                
                                                if temp0_10 != 0xffff && result_10 != 0
                                                {
                                                    goto 'label_4915d1;
                                                }
                                                
                                                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$uu_du..FileInfo$GT$$GT$::he0624b804eba8864(&result_14);
                                                
                                                if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_128, 
                                                    *data_40ef80)) == 0xffff
                                                {
                                                    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_du..Stat$C$std..io..error..Error$GT$$GT$::hbacf2d5ca1b5111b(&var_128);
                                                }
                                            }
                                            else
                                            {
                                                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&result_14, *var_6d8[8], var_530);
                                                var_4d8 = nullptr;
                                                var_4d0 = var_520;
                                                var_4c0 = 1;
                                                let mut var_440: *mut *mut i64 = &var_4d8;
                                                let var_438_1: fn(arg1: *mut c_void, 
                                                    arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                                result_7 = &data_580890;
                                                let var_410_4: i64 = 2;
                                                var_3f8 = 0;
                                                let var_408_5: *mut *mut *mut i64 = &var_440;
                                                let mut var_400_4: i64 = 1;
                                                let mut var_430: i128;
                                                core::option::Option$LT$T$GT$::map_or_else::h2f4aa2e02adfca01(&var_430, &result_7);
                                                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h207378dfe7098f37(&result_14);
                                                let var_420: i64;
                                                let var_408_6: i64 = var_420;
                                                result_7 = var_430;
                                                var_400_4 = 1;
                                                var_408_2 = alloc::boxed::Box$LT$T$GT$::new::hbd065608128ebc53(&result_7);
                                                let var_400_5: *mut *mut c_void = &data_580930;
                                                let var_410_5: i64 = 0;
                                                result_7 = 2;
                                                std::sync::mpmc::Sender$LT$T$GT$::send::h9ce6a5c779dfea29(&result_12, &var_6b8, &result_7);
                                                let temp0_4: u32 = _mm_movemask_epi8(
                                                    __pcmpeqb_xmmdq_memdq(result_12, data_40f110));
                                                let mut result_9: *mut i128;
                                                
                                                if temp0_4 != 0xffff
                                                {
                                                    memcpy(&result_7, &result_12, 0xa0);
                                                    result_9 = uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h225492b47a33b2ef(&result_7);
                                                    result_2 = result_9;
                                                }
                                                
                                                if temp0_4 != 0xffff && result_9 != 0
                                                {
                                                    if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(
                                                        var_128, *data_40ef80)) == 0xffff
                                                    {
                                                        core::ptr::drop_in_place$LT$core..result..Result$LT$uu_du..Stat$C$std..io..error..Error$GT$$GT$::hbacf2d5ca1b5111b(&var_128);
                                                        goto 'label_491631;
                                                    }
                                                    
                                                    core::ptr::drop_in_place$LT$uu_du..Stat$GT$::he4ab1b3de10beca7(&var_128);
                                                    'label_491631:
                                                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h323423b812b99218(&var_6d8);
                                                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::h929cda0d5ed9b68a(&var_148);
                                                    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::h27fd4df015e2ce80(&var_4f0);
                                                    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$uu_du..StatPrintInfo$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::hdfec988ffb53a855(&var_6b8);
                                                    break;
                                                }
                                                
                                                if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_128, 
                                                    *data_40ef80)) == 0xffff
                                                {
                                                    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_du..Stat$C$std..io..error..Error$GT$$GT$::hbacf2d5ca1b5111b(&var_128);
                                                }
                                                else
                                                {
                                                    core::ptr::drop_in_place$LT$uu_du..Stat$GT$::he4ab1b3de10beca7(&var_128);
                                                }
                                            }
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h323423b812b99218(&var_6d8);
                                        }
                                        else
                                        {
                                            std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_4d8, *var_6d8[8], var_530);
                                            result_14 = result_5;
                                            var_520 = (var_680_1 * 0x38).byte_offset(result_5);
                                            let mut i: bool;
                                            
                                            do
                                            {
                                                let rax_49: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h127139ea53b9211c(&result_14);
                                                
                                                if rax_49 == 0
                                                {
                                                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h207378dfe7098f37(&var_4d8);
                                                    goto 'label_491191;
                                                }
                                                
                                                i = glob::Pattern::matches::hb817b847971d5388(
                                                    rax_49, var_4d0, var_4c8);
                                            } while i == 0;
                                            
                                            if rax_28 != 0
                                            {
                                                result_12 = nullptr;
                                                result_6 = var_4d0;
                                                *var_628[8] = 1;
                                                var_128 = &result_12;
                                                var_120 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                                                result_7 = &data_580870;
                                                let var_410_3: i64 = 2;
                                                var_3f8 = 0;
                                                var_408_2 = &var_128;
                                                let var_400_3: i64 = 1;
                                                std::io::stdio::_print::he918bceb0c89db46(
                                                    &result_7);
                                            }
                                            
                                            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h207378dfe7098f37(&var_4d8);
                                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h323423b812b99218(&var_6d8);
                                        }
                                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf74d03b5de3eceed(&var_540, &var_148);
                                        
                                        if var_540 == -0x8000000000000000
                                        {
                                            goto 'label_490f23;
                                        }
                                    }
                                }
                                else
                                {
                                    'label_490f23:
                                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$std..path..PathBuf$GT$$GT$::h929cda0d5ed9b68a(&var_148);
                                    result_7 = var_6b8;
                                    let mut rbp_4: i64;
                                    rbp_4 = 1;
                                    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$uu_du..StatPrintInfo$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::hdfec988ffb53a855(&result_7);
                                    let var_4e0: i64;
                                    let var_408_4: i64 = var_4e0;
                                    result_7 = var_4f0;
                                    std::thread::JoinInner$LT$T$GT$::join::he4ab7f7c2281d9ef(
                                        &result_12, &result_7);
                                    result_2 = result_6;
                                    
                                    if result_12 != 0
                                    {
                                        result_2 = uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::he1406b1f53b37bee(result_2, var_628);
                                    }
                                    else if result_2 == 0
                                    {
                                        let var_730_4: i32 = 0;
                                        core::ptr::drop_in_place$LT$uu_du..TraversalOptions$GT$::h5fc25aa6329e482b(&result_20);
                                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf69c7b36e4336e7c(&result_23);
                                        return nullptr;
                                    }
                                }
                                
                                rbx_3 = 1;
                                let var_730_5: i32 = 0;
                            }
                            else
                            {
                                uu_du::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::heb1ead49541a0b76(&result_7, *rax_34.byte_offset(8), *rax_34.byte_offset(0x10));
                                let result_8: *mut *mut [i8; 0xec] = result_7;
                                r12_1 = var_408;
                                
                                if result_8 == 2
                                {
                                    result_2 = result_8;
                                    goto 'label_490bfa;
                                }
                                
                                result_2 = result_1;
                                
                                if result_8 != 1
                                {
                                    goto 'label_490bfa;
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h705b48082a37a667(&var_658);
                                let mut rax_35: i32;
                                rax_35 = 1;
                                let var_730_3: i32 = rax_35;
                                rbx_3 = 0;
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$uu_du..TraversalOptions$GT$::h5fc25aa6329e482b(
                            &result_20);
                        
                        if rbx_3 == 0
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h7016e6caa84af12f(&result_19);
                        }
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$uu_du..Deref$GT$::hc03c5a9aba34a537(&result_12);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h7016e6caa84af12f(&result_19);
                    }
                }
            }
            else
            {
                let rbx_1: i64 = *rax_3.byte_offset(8);
                let r14_1: u64 = *rax_3.byte_offset(0x10);
                let rax_4: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h97cce7918ce8783b(rbx_1, r14_1, "-hsibkmallSone-file-systemderefe…", 1);
                let mut rax_5: i64;
                
                if rax_4 != 0
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h054e7a0d8829c39a(&result_7, &result_23, "FILEcharWORDJuly ->  to \x1b[2mA…", 4);
                    rax_5 = clap_builder::parser::error::MatchesError::unwrap::h4a878dbdec5af33f(
                        "FILEcharWORDJuly ->  to \x1b[2mA…", 4, &result_7);
                }
                
                if rax_4 == 0 || rax_5 == 0
                {
                    uu_du::read_files_from::h6043d31ba0920720(&result_7, rbx_1, r14_1);
                    result_16 = result_7;
                    
                    if result_16 != -0x8000000000000000
                    {
                        result_19 = result_16;
                        let result_4: *mut i64 = result_1;
                        let var_698_1: *mut *mut c_void = var_408;
                        goto 'label_4906f1;
                    }
                    
                    result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
                else
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h054e7a0d8829c39a(&result_7, &result_23, "FILEcharWORDJuly ->  to \x1b[2mA…", 4);
                    let rax_6: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h4a878dbdec5af33f(
                        "FILEcharWORDJuly ->  to \x1b[2mA…", 4, &result_7);
                    
                    if rax_6 == 0
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    let zmm0_2: i128 = *rax_6.byte_offset(8);
                    result_12 = nullptr;
                    result_6 = zmm0_2;
                    *var_628[8] = 1;
                    var_4d8 = &result_12;
                    let var_4d0_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    result_7 = &data_580820;
                    let var_410: i64 = 2;
                    let var_3f8_1: i64 = 0;
                    let var_408_1: *mut *mut i64 = &var_4d8;
                    let var_400_1: i64 = 1;
                    let mut var_90: ();
                    core::option::Option$LT$T$GT$::map_or_else::h2f4aa2e02adfca01(&var_90, 
                        &result_7);
                    std::io::error::Error::new::h4cb055765d467f79(0x27, &var_90);
                    result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                }
            }
            result = result_2;
        }
        
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hf69c7b36e4336e7c(&result_23);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(result_6);
    }
    result
}
