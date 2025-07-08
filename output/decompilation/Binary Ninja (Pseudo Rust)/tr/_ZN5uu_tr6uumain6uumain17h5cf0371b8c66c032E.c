
  fn uu_tr::uumain::uumain::h5cf0371b8c66c032(arg1: i64) -> *mut i64

{
    let mut var_8d8: i128;
    uu_tr::uu_app::h3af701eb291f0f4d(&var_8d8);
    let mut var_498: i128;
    clap_builder::builder::command::Command::after_help::h6ea1792ab63c6686(&var_498, &var_8d8, 
        "Translate, squeeze, and/or delet…", 0x5d);
    let mut var_9b0: *mut i128;
    let mut r12: *mut i64 = &var_9b0;
    clap_builder::builder::command::Command::try_get_matches_from::h79c70f38f211e142(&var_9b0, 
        &var_498, arg1);
    let rax: *mut i128 = var_9b0;
    let mut result: *mut i64;
    let mut var_9a8: i64;
    
    if rax != -0x8000000000000000
    {
        let var_980: i64;
        let var_8e0_1: i64 = var_980;
        let var_990: i128;
        let var_8f0_1: i128 = var_990;
        let mut var_9a0: i128;
        let var_900_1: i128 = var_9a0;
        let mut var_910: *mut i128 = rax;
        let var_908_1: i64 = var_9a8;
        let rax_2: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_910, "deletecomplementsqueeze-repeatst…", 6);
        let rax_3: bool =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_910, "complementsqueeze-repeatstruncat…", 0xa);
        let rax_4: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_910, "squeeze-repeatstruncate-set1extr…", 0xf);
        let rax_5: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            &var_910, "truncate-set1extra operandUnknow…", 0xd);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hec7e42da4cd7eb05(
            &var_8d8, &var_910, "setsBOLDBlue\x1b[4mSomedumb\x1b[…", 4);
        clap_builder::parser::error::MatchesError::unwrap::h750f5aa244a95e3b(&var_498, 
            "setsBOLDBlue\x1b[4mSomedumb\x1b[…", 4, &var_8d8);
        let var_128_1: i128 = var_498;
        let mut var_488: i128;
        let var_118_1: i128 = var_488;
        let mut var_478: i128;
        let var_108_1: i128 = var_478;
        let var_468: i128;
        let var_f8_1: i128 = var_468;
        let mut var_130: i64 = 1;
        let var_e8_1: i64 = 0;
        let var_a8_1: i64 = 0;
        let mut var_9c8: ();
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hacab1107395fe9c6(&var_9c8, &var_130);
        let var_9b8: i64;
        
        if var_9b8 == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h03ae0bd4f3f5c044(
                &var_498, "missing operandmissing operand a…", 0xf);
            let var_8c8_3: i64 = var_488;
            var_8d8 = var_498;
            let var_8c0_2: i32 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h65d9bc0d13ef9a61(&var_8d8);
        }
        else
        {
            let var_9c0: *mut c_void;
            let mut var_8c0: i32;
            
            if var_9b8 == 1 && (rax_2 | rax_4) == 0
            {
                var_498 = 1;
                var_498 = *var_9c0.byte_offset(8);
                *var_488[8] = 1;
                var_9b0 = &var_498;
                let var_9a8_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_8d8 = &data_52c2c0;
                *var_8d8[8] = 2;
                let var_8b8_1: i64 = 0;
                let var_8c8_1: *mut *mut i128 = &var_9b0;
                var_8c0 = 1;
                let mut var_608: i128;
                core::option::Option$LT$T$GT$::map_or_else::h94cf0975cba3d957(&var_608, &var_8d8);
                let var_8c0_1: i32 = 1;
                var_8d8 = var_608;
                let var_5f8: i64;
                let var_8c8_2: i64 = var_5f8;
                result = alloc::boxed::Box$LT$T$GT$::new::h65d9bc0d13ef9a61(&var_8d8);
            }
            else if (rax_2 & rax_4) == 1 && var_9b8 == 1
            {
                var_498 = 1;
                var_498 = *var_9c0.byte_offset(8);
                *var_488[8] = 1;
                var_9b0 = &var_498;
                let var_9a8_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_8d8 = &data_52c2e0;
                *var_8d8[8] = 2;
                let var_8b8_2: i64 = 0;
                let var_8c8_4: *mut *mut i128 = &var_9b0;
                var_8c0 = 1;
                let mut var_5f0: i128;
                core::option::Option$LT$T$GT$::map_or_else::h94cf0975cba3d957(&var_5f0, &var_8d8);
                let var_8c0_3: i32 = 1;
                var_8d8 = var_5f0;
                let var_5e0: i64;
                let var_8c8_5: i64 = var_5e0;
                result = alloc::boxed::Box$LT$T$GT$::new::h65d9bc0d13ef9a61(&var_8d8);
            }
            else
            {
                let mut var_a00: *mut i128;
                let mut var_9f8: *mut *mut c_void;
                
                if var_9b8 != 1
                {
                    var_a00 = "extra operandUnknownErrnoEPERMEN…";
                    var_9f8 = 0xd;
                    let mut zmm0_3: i128;
                    
                    if ((rax_2 ^ 1) | rax_4) != 1
                    {
                        zmm0_3 = *var_9c0.byte_offset(0x20);
                        var_9b0 = 1;
                        var_9a8 = zmm0_3;
                        *var_9a0[8] = 1;
                        let mut rbx_2: *mut c_void;
                        
                        if var_9b8 != 2
                        {
                            var_498 = &var_a00;
                            *var_498[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h349096513bb5cc07;
                            var_488 = &var_9b0;
                            *var_488[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            var_8d8 = &data_52c330;
                            *var_8d8[8] = 2;
                            let var_8b8_5: i64 = 0;
                            let var_8c8_13: *mut i128 = &var_498;
                            var_8c0 = 2;
                            let mut var_148: ();
                            rbx_2 = &var_148;
                            core::option::Option$LT$T$GT$::map_or_else::h94cf0975cba3d957(&var_148, 
                                &var_8d8);
                        }
                        else
                        {
                            var_498 = &var_a00;
                            *var_498[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h349096513bb5cc07;
                            var_488 = &var_9b0;
                            *var_488[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            var_8d8 = &data_52c300;
                            *var_8d8[8] = 3;
                            let var_8b8_4: i64 = 0;
                            let var_8c8_10: *mut i128 = &var_498;
                            var_8c0 = 2;
                            let mut var_160: ();
                            rbx_2 = &var_160;
                            core::option::Option$LT$T$GT$::map_or_else::h94cf0975cba3d957(&var_160, 
                                &var_8d8);
                        }
                        
                        let rax_40: i64 = *rbx_2.byte_offset(0x10);
                        let var_4a8_1: i64 = rax_40;
                        let zmm0_9: i128 = *rbx_2;
                        let var_4b8_1: i128 = zmm0_9;
                        let var_8c0_5: i32 = 1;
                        var_8d8 = zmm0_9;
                        let var_8c8_14: i64 = rax_40;
                        result = alloc::boxed::Box$LT$T$GT$::new::h65d9bc0d13ef9a61(&var_8d8);
                    }
                    else
                    {
                        if var_9b8 <= 2
                        {
                            goto 'label_46c10b;
                        }
                        
                        zmm0_3 = *var_9c0.byte_offset(0x38);
                        var_9b0 = 1;
                        var_9a8 = zmm0_3;
                        *var_9a0[8] = 1;
                        var_498 = &var_a00;
                        *var_498[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h349096513bb5cc07;
                        var_488 = &var_9b0;
                        *var_488[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_8d8 = &data_52c330;
                        *var_8d8[8] = 2;
                        let var_8b8_3: i64 = 0;
                        let var_8c8_8: *mut i128 = &var_498;
                        var_8c0 = 2;
                        let mut var_5d8: i128;
                        core::option::Option$LT$T$GT$::map_or_else::h94cf0975cba3d957(&var_5d8, 
                            &var_8d8);
                        let var_8c0_4: i32 = 1;
                        var_8d8 = var_5d8;
                        let var_5c8: i64;
                        let var_8c8_9: i64 = var_5c8;
                        result = alloc::boxed::Box$LT$T$GT$::new::h65d9bc0d13ef9a61(&var_8d8);
                    }
                }
                else
                {
                    'label_46c10b:
                    let rcx_3: i64 = *var_9c0.byte_offset(8);
                    var_8d8 = rcx_3;
                    *var_8d8[8] = *var_9c0.byte_offset(0x10) + rcx_3;
                    let mut var_8c8: i64;
                    var_8c8 = 0;
                    let mut var_8b8: i64;
                    
                    if (_$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hfc16fb0776f788fe(&var_8d8) & 1) != 0
                    {
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h03ae0bd4f3f5c044(&var_498, "warning: an unescaped backslash …", 0x40);
                        let var_8c8_6: i64 = var_488;
                        var_8d8 = var_498;
                        var_8c0 = 0;
                        let rax_20: *mut i128 =
                            alloc::boxed::Box$LT$T$GT$::new::h65d9bc0d13ef9a61(&var_8d8);
                        var_a00 = rax_20;
                        var_9f8 = &data_52c448;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::he3a59f98489a3243(rax_20));
                        let mut rax_22: *mut i128;
                        let mut rdx_2: i64;
                        rax_22 = uucore::util_name::h60d842bf27b05e82();
                        var_9b0 = rax_22;
                        let var_9a8_3: i64 = rdx_2;
                        var_498 = &var_9b0;
                        *var_498[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h349096513bb5cc07;
                        var_488 = &var_a00;
                        *var_488[8] = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hea79bf44bc57fb60;
                        var_8d8 = &data_52c350;
                        *var_8d8[8] = 3;
                        var_8b8 = 0;
                        let var_8c8_7: *mut i128 = &var_498;
                        var_8c0 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_8d8);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h24eb00e4a52f7e7c(var_a00, var_9f8);
                    }
                    
                    std::io::stdio::stdin::h7215cc131abb55d8();
                    let mut var_930: *mut c_void =
                        &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
                    let mut rax_23: *mut i32;
                    let mut rdx_3: i8;
                    rax_23 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_930);
                    let mut var_a10: *mut i32 = rax_23;
                    rdx_3 &= 1;
                    std::io::stdio::stdout::h077da66234850927();
                    let mut var_928: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
                    let mut r8_1: i64 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hdc9c3452e7942aea(&var_9b0, 0x2000, 
                        std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_928));
                    let mut var_920: *mut c_void = var_9c0;
                    let var_918_1: *mut c_void = var_9c0.byte_offset(var_9b8 * 0x18);
                    let rax_26: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd6e9cd20df835715(&var_920);
                    let mut rax_27: *mut *mut c_void;
                    
                    if rax_26 == 0
                    {
                        rax_27 = nullptr;
                    }
                    else
                    {
                        *rax_26.byte_offset(0x10);
                        let mut rdx_5: *mut i64;
                        rax_27 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h901a8d7c69801d4b(*rax_26.byte_offset(8));
                        r12 = rdx_5;
                    }
                    
                    let rbx_1: i8 = !rax_2 & var_9b8 >= 2;
                    let mut r13_1: i64 = 1;
                    let mut r14_1: *mut *mut c_void = rax_27;
                    
                    if rax_27 == 0
                    {
                        r14_1 = 1;
                    }
                    
                    if rax_27 == 0
                    {
                        r12 = rax_27;
                    }
                    
                    let rax_32: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd6e9cd20df835715(&var_920);
                    let mut rax_33: i64;
                    
                    if rax_32 == 0
                    {
                        rax_33 = 0;
                    }
                    else
                    {
                        *rax_32.byte_offset(0x10);
                        let mut rdx_6: i64;
                        rax_33 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h901a8d7c69801d4b(*rax_32.byte_offset(8));
                        r8_1 = rdx_6;
                    }
                    
                    if rax_33 != 0
                    {
                        r13_1 = rax_33;
                    }
                    
                    if rax_33 == 0
                    {
                        r8_1 = rax_33;
                    }
                    
                    uu_tr::operation::Sequence::solve_set_characters::hf6b9e7c9837a7276(&var_8d8, 
                        r14_1, r12, r13_1, r8_1, rax_3, rax_5 & rbx_1, rbx_1);
                    let rax_35: *mut i128 = var_8d8;
                    let mut result_1: *mut i64;
                    let mut zmm0_10: i128;
                    
                    if rax_35 != -0x8000000000000000
                    {
                        let var_8b0: i64;
                        var_478 = var_8b0;
                        zmm0_10 = var_8d8;
                        let zmm1_3: i128 = var_8c0;
                        var_498 = zmm0_10;
                        let mut var_9e8: i128 = zmm1_3;
                        
                        if rax_2 != 0
                        {
                            if rax_4 == 0
                            {
                                let var_5b8_1: i128 = zmm0_10;
                                let mut var_5c0: *mut i128 = rax_35;
                                uu_tr::operation::translate_input::h32a13ad4727c4ba9(&var_a10, 
                                    &var_9b0, &var_5c0);
                                'label_46c826:
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hefea7399e2ac3a44(&var_9e8);
                                goto 'label_46ca63;
                            }
                            
                            var_498 = zmm0_10;
                            var_498 = rax_35;
                            let var_8c8_12: i64 = var_8b0;
                            var_8d8 = var_9e8;
                            let mut var_578: i128;
                            uu_tr::operation::SqueezeOperation::new::hd8d9f9e8de1d3b5c(&var_578, 
                                &var_8d8);
                            let mut var_508: i128 = var_498;
                            let var_4f8_1: i64 = zmm1_3;
                            let var_4f0_1: i128 = var_578;
                            let var_568: i128;
                            let var_4e0_1: i128 = var_568;
                            let var_558: i128;
                            let var_4d0_1: i128 = var_558;
                            let var_548: i64;
                            let var_4c0_1: i64 = var_548;
                            uu_tr::operation::translate_input::h29bc490f8ef166da(&var_a10, 
                                &var_9b0, &var_508);
                            'label_46ca63:
                            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hba009b7d471a5fe9(&var_9b0);
                            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hb7e75a9540258d77(var_a10, rdx_3);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h6f1193934e73377f(&var_9c8);
                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::haa6d892d169dcffa(&var_910);
                            return nullptr;
                        }
                        
                        let mut var_978: i128;
                        let mut var_488_1: i128;
                        
                        if rax_4 == 0
                        {
                            var_a00 = rax_35;
                            var_9f8 = zmm0_10;
                            var_488_1 = var_8b0;
                            var_498 = var_9e8;
                            uu_tr::operation::TranslateOperation::new::h1640a7dbb9893994(&var_8d8, 
                                &var_a00, &var_498);
                            let rax_42: i64 = var_8d8;
                            var_978 = var_8d8;
                            let rcx_9: i64 = var_8c0;
                            
                            if rax_42 == 0
                            {
                                let var_8c8_16: i64 = rcx_9;
                                var_8d8 = var_978;
                                result_1 =
                                    alloc::boxed::Box$LT$T$GT$::new::h3beed998e9c5ecac(&var_8d8);
                                goto 'label_46c59e;
                            }
                            
                            let var_588_1: i128 = var_8b8;
                            let mut var_5a8: i64 = rax_42;
                            let var_5a0_1: i128 = var_978;
                            let var_590_1: i64 = rcx_9;
                            uu_tr::operation::translate_input::hc00f303679b61048(&var_a10, 
                                &var_9b0, &var_5a8);
                            goto 'label_46ca63;
                        }
                        
                        if var_9b8 == 1
                        {
                            var_8d8 = rax_35;
                            var_8d8 = zmm0_10;
                            let mut var_68: ();
                            uu_tr::operation::SqueezeOperation::new::hd8d9f9e8de1d3b5c(&var_68, 
                                &var_8d8);
                            uu_tr::operation::translate_input::h61644504e49765d2(&var_a10, 
                                &var_9b0, &var_68);
                            goto 'label_46c826;
                        }
                        
                        var_978 = rax_35;
                        var_978 = zmm0_10;
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h786ff7c94a117f7f(&var_a00, &var_9e8);
                        uu_tr::operation::TranslateOperation::new::h1640a7dbb9893994(&var_8d8, 
                            &var_978, &var_a00);
                        let rax_44: i64 = var_8d8;
                        let var_948_1: i128 = var_8d8;
                        let rcx_10: i64 = var_8c0;
                        
                        if rax_44 != 0
                        {
                            let var_478_1: i128 = var_8b8;
                            var_498 = var_948_1;
                            *var_488_1[8] = rcx_10;
                            var_498 = rax_44;
                            let var_8c8_15: i64 = var_8b0;
                            var_8d8 = var_9e8;
                            let mut var_540: i128;
                            uu_tr::operation::SqueezeOperation::new::hd8d9f9e8de1d3b5c(&var_540, 
                                &var_8d8);
                            let mut var_1c8: i128 = var_498;
                            let var_1b8_1: i128 = var_488_1;
                            let var_1a8_1: i128 = var_478_1;
                            let var_198_1: i128 = var_540;
                            let var_530: i128;
                            let var_188_1: i128 = var_530;
                            let var_520: i128;
                            let var_178_1: i128 = var_520;
                            let var_510: i64;
                            let var_168_1: i64 = var_510;
                            uu_tr::operation::translate_input::hd58ae3eaa3f14818(&var_a10, 
                                &var_9b0, &var_1c8);
                            goto 'label_46ca63;
                        }
                        
                        let var_8c8_17: i64 = rcx_10;
                        var_8d8 = var_948_1;
                        result = alloc::boxed::Box$LT$T$GT$::new::h3beed998e9c5ecac(&var_8d8);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hefea7399e2ac3a44(&var_9e8);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hba009b7d471a5fe9(&var_9b0);
                        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hb7e75a9540258d77(var_a10, rdx_3);
                    }
                    else
                    {
                        let rax_36: i64 = var_8c0;
                        var_488 = rax_36;
                        zmm0_10 = var_8d8;
                        var_498 = zmm0_10;
                        let var_8c8_11: i64 = rax_36;
                        var_8d8 = zmm0_10;
                        result_1 = alloc::boxed::Box$LT$T$GT$::new::h3beed998e9c5ecac(&var_8d8);
                        'label_46c59e:
                        result = result_1;
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hba009b7d471a5fe9(&var_9b0);
                        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hb7e75a9540258d77(var_a10, rdx_3);
                    }
                }
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h6f1193934e73377f(&var_9c8);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::haa6d892d169dcffa(&var_910);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_9a8);
    }
    result
}
