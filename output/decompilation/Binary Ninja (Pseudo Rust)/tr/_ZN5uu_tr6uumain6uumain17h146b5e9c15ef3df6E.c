
  fn uu_tr::uumain::uumain::h146b5e9c15ef3df6(arg1: i64) -> u64

{
    let mut var_7f8: *mut *mut c_void;
    uu_tr::uu_app::hb3fe02f7dda5c29e(&var_7f8);
    let mut var_330: i128;
    clap_builder::builder::command::Command::after_help::h63804ca4a706d6e3(&var_330, &var_7f8);
    let mut var_8c0: *mut i128;
    clap_builder::builder::command::Command::try_get_matches_from::hf524738d0ee10f38(&var_8c0, 
        &var_330, arg1);
    let rax: *mut i128 = var_8c0;
    let mut result: u64;
    let mut var_8b8: i64;
    
    if -(rax) != -0x8000000000000000
    {
        let var_890: i64;
        let var_800_1: i64 = var_890;
        let var_8a0: i128;
        let var_810_1: i128 = var_8a0;
        let mut var_8b0: i128;
        let var_820_1: i128 = var_8b0;
        let mut var_830: *mut i128 = rax;
        let var_828_1: i64 = var_8b8;
        let rax_2: bool =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_830, "deletecomplementsqueeze-repeatst…", 6);
        let rax_3: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_830, "complementsqueeze-repeatstruncat…", 0xa);
        let rax_4: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_830, "squeeze-repeatstruncate-set1", 0xf);
        let rax_5: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_830, "truncate-set1", 0xd);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::he3f617fb884e39f9(
            &var_7f8, &var_830);
        clap_builder::parser::error::MatchesError::unwrap::hb59dc9a96a9a3170(&var_330, &var_7f8);
        let mut var_7f0_1: i128 = var_330;
        let mut var_320: i128;
        let mut var_7e0_1: i128 = var_320;
        let var_300: i128;
        let var_7c0_1: i128 = var_300;
        var_7f8 = 1;
        let var_7b0_1: i64 = 0;
        let var_770_1: i64 = 0;
        let mut var_868: ();
        core::iter::traits::iterator::Iterator::collect::h7a81bec439c75e57(&var_868, &var_7f8);
        let var_858: i64;
        
        if var_858 == 0
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6766db57e93df72e(&var_330, "missing operandmissing operand a…", 0xf);
            *var_7f0_1[8] = var_320;
            var_7f8 = var_330;
            var_7e0_1 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h119b6a742256ef7e(&var_7f8);
        }
        else
        {
            let var_860: *mut c_void;
            
            if (var_858 == 1 & ((rax_2 | rax_4) ^ 1)) != 0
            {
                var_330 = 1;
                *var_330[8] = *var_860.byte_offset(8);
                var_320 = *var_860.byte_offset(0x10);
                *var_320[8] = 1;
                var_8c0 = &var_330;
                let var_8b8_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_7f8 = &data_4fcf68;
                var_7f0_1 = 2;
                *var_7e0_1[8] = 0;
                *var_7f0_1[8] = &var_8c0;
                var_7e0_1 = 1;
                let mut var_4d0: i128;
                core::option::Option$LT$T$GT$::map_or_else::hfbd1d65adf221ba4(&var_4d0, &var_7f8);
                var_7e0_1 = 1;
                var_7f8 = var_4d0;
                let var_4c0: i64;
                *var_7f0_1[8] = var_4c0;
                result = alloc::boxed::Box$LT$T$GT$::new::h119b6a742256ef7e(&var_7f8);
            }
            else if (rax_2 & rax_4 & var_858 == 1) != 0
            {
                var_330 = 1;
                *var_330[8] = *var_860.byte_offset(8);
                var_320 = *var_860.byte_offset(0x10);
                *var_320[8] = 1;
                var_8c0 = &var_330;
                let var_8b8_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_7f8 = &data_4fcf88;
                var_7f0_1 = 2;
                *var_7e0_1[8] = 0;
                *var_7f0_1[8] = &var_8c0;
                var_7e0_1 = 1;
                let mut var_4b8: i128;
                core::option::Option$LT$T$GT$::map_or_else::hfbd1d65adf221ba4(&var_4b8, &var_7f8);
                var_7e0_1 = 1;
                var_7f8 = var_4b8;
                let var_4a8: i64;
                *var_7f0_1[8] = var_4a8;
                result = alloc::boxed::Box$LT$T$GT$::new::h119b6a742256ef7e(&var_7f8);
            }
            else
            {
                let mut var_8f8: u64;
                let mut var_888: *const i8;
                
                if var_858 != 1
                {
                    var_888 = "extra operandwrite errorUnknownE…";
                    let var_880_1: i64 = 0xd;
                    let mut zmm0_3: i128;
                    
                    if ((rax_2 ^ 1) | rax_4) != 1
                    {
                        zmm0_3 = *var_860.byte_offset(0x20);
                        var_8c0 = 1;
                        var_8b8 = zmm0_3;
                        *var_8b0[8] = 1;
                        
                        if var_858 != 2
                        {
                            var_330 = &var_888;
                            *var_330[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h60417ddd567f6c35;
                            var_320 = &var_8c0;
                            *var_320[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_7f8 = &data_4fcfd8;
                            var_7f0_1 = 2;
                            *var_7e0_1[8] = 0;
                            *var_7f0_1[8] = &var_330;
                            var_7e0_1 = 2;
                            core::option::Option$LT$T$GT$::map_or_else::hfbd1d65adf221ba4(&var_8f8, 
                                &var_7f8);
                        }
                        else
                        {
                            var_330 = &var_888;
                            *var_330[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h60417ddd567f6c35;
                            var_320 = &var_8c0;
                            *var_320[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_7f8 = &data_4fcfa8;
                            var_7f0_1 = 3;
                            *var_7e0_1[8] = 0;
                            *var_7f0_1[8] = &var_330;
                            var_7e0_1 = 2;
                            core::option::Option$LT$T$GT$::map_or_else::hfbd1d65adf221ba4(&var_8f8, 
                                &var_7f8);
                        }
                        
                        var_7e0_1 = 1;
                        var_7f8 = var_8f8;
                        let var_8e8: i64;
                        *var_7f0_1[8] = var_8e8;
                        result = alloc::boxed::Box$LT$T$GT$::new::h119b6a742256ef7e(&var_7f8);
                    }
                    else
                    {
                        if var_858 <= 2
                        {
                            goto 'label_460ee3;
                        }
                        
                        zmm0_3 = *var_860.byte_offset(0x38);
                        var_8c0 = 1;
                        var_8b8 = zmm0_3;
                        *var_8b0[8] = 1;
                        var_330 = &var_888;
                        *var_330[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h60417ddd567f6c35;
                        var_320 = &var_8c0;
                        *var_320[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_7f8 = &data_4fcfd8;
                        var_7f0_1 = 2;
                        *var_7e0_1[8] = 0;
                        *var_7f0_1[8] = &var_330;
                        var_7e0_1 = 2;
                        let mut var_4a0: i128;
                        core::option::Option$LT$T$GT$::map_or_else::hfbd1d65adf221ba4(&var_4a0, 
                            &var_7f8);
                        var_7e0_1 = 1;
                        var_7f8 = var_4a0;
                        let var_490: i64;
                        *var_7f0_1[8] = var_490;
                        result = alloc::boxed::Box$LT$T$GT$::new::h119b6a742256ef7e(&var_7f8);
                    }
                }
                else
                {
                    'label_460ee3:
                    let rax_16: *mut *mut c_void = *var_860.byte_offset(8);
                    let rcx_8: *mut c_void = (*var_860.byte_offset(0x10)).byte_offset(rax_16);
                    var_7f8 = rax_16;
                    var_7f0_1 = rcx_8;
                    *var_7f0_1[8] = 0;
                    
                    if (_$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h900d329360b4d4fe(&var_7f8) & 1) != 0
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6766db57e93df72e(&var_330, "warning: an unescaped backslash …", 0x40);
                        *var_7f0_1[8] = var_320;
                        var_7f8 = var_330;
                        var_7e0_1 = 0;
                        let rax_19: u64 =
                            alloc::boxed::Box$LT$T$GT$::new::h119b6a742256ef7e(&var_7f8);
                        var_8f8 = rax_19;
                        let var_8f0_1: *mut *mut c_void = &data_4fd0d0;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::h8679b4fbf35c6f91(rax_19));
                        let mut rax_21: *mut i128;
                        let mut rdx_2: i64;
                        rax_21 = uucore::util_name::h074417a1e6395129();
                        var_8c0 = rax_21;
                        let var_8b8_3: i64 = rdx_2;
                        var_330 = &var_8c0;
                        *var_330[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h60417ddd567f6c35;
                        var_320 = &var_8f8;
                        *var_320[8] = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h58eb51efe76c0216;
                        var_7f8 = &data_4fcff8;
                        var_7f0_1 = 3;
                        *var_7e0_1[8] = 0;
                        *var_7f0_1[8] = &var_330;
                        var_7e0_1 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_7f8);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hfcd2faf54800ba99(var_8f8, var_8f0_1);
                    }
                    
                    std::io::stdio::stdin::h9a05a2c3e7544b2a();
                    let mut var_850: *mut c_void =
                        &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
                    let mut rax_22: *mut i32;
                    let mut rdx_3: i8;
                    rax_22 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_850);
                    let mut var_8e0: *mut i32 = rax_22;
                    rdx_3 &= 1;
                    std::io::stdio::stdout::hb6a8e10bcccf3287();
                    var_7f8 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                    let mut r8_1: i64 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h6fb4298004deb8d1(&var_330, 
                        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_7f8));
                    let rax_24: bool = (rax_2 ^ 1) & var_858 != 1;
                    let mut rdi_29: i64;
                    
                    if var_858 != 1
                    {
                        rdi_29 = *var_860.byte_offset(0x20);
                        r8_1 = *var_860.byte_offset(0x28);
                    }
                    else
                    {
                        rdi_29 = 0;
                    }
                    
                    if rdi_29 == 0
                    {
                        r8_1 = rdi_29;
                    }
                    
                    let mut rcx_10: i64 = 1;
                    
                    if rdi_29 != 0
                    {
                        rcx_10 = rdi_29;
                    }
                    
                    uu_tr::operation::Sequence::solve_set_characters::hf591f1b89257870f(&var_7f8, 
                        *var_860.byte_offset(8), *var_860.byte_offset(0x10), rcx_10, r8_1, rax_3, 
                        rax_5 & rax_24, rax_24);
                    let r13_2: *mut *mut c_void = var_7f8;
                    let mut r12: *mut *mut c_void = var_7f0_1;
                    let r14_1: i64 = *var_7f0_1[8];
                    let rdx_5: i64 = var_7e0_1;
                    let rcx_11: i64 = *var_7e0_1[8];
                    
                    if r13_2 != -0x8000000000000000
                    {
                        let mut var_900_1: i8;
                        var_900_1 = rdx_5;
                        
                        if uucore::features::fs::is_stdin_directory::hbe9f5f0b75e006c7() != 0
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6766db57e93df72e(&var_8c0, "read error: Is a directoryTransl…", 0x1a);
                            *var_7f0_1[8] = var_8b0;
                            var_7f8 = var_8c0;
                            var_7e0_1 = 1;
                            result = alloc::boxed::Box$LT$T$GT$::new::h119b6a742256ef7e(&var_7f8);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2db8680331b6b45e(var_900_1, rcx_11);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2db8680331b6b45e(r13_2, r12);
                        }
                        else
                        {
                            let var_310: u64;
                            let mut rbp_2: i64;
                            let mut r14_2: *mut i128;
                            
                            if rax_2 == 0
                            {
                                rbp_2 = rcx_11;
                                
                                if rax_4 == 0
                                {
                                    var_8f8 = r13_2;
                                    let var_8f0_2: *mut *mut c_void = r12;
                                    let var_8e8_1: i64 = r14_1;
                                    r14_2 = var_900_1;
                                    var_8c0 = r14_2;
                                    let var_8b8_4: i64 = rbp_2;
                                    var_8b0 = var_310;
                                    uu_tr::operation::TranslateOperation::new::h9445c453708e9f00(
                                        &var_7f8, &var_8f8, &var_8c0);
                                    let rax_41: *mut *mut c_void = var_7f8;
                                    let mut var_4f8: i128 = var_7f0_1;
                                    
                                    if rax_41 == 0
                                    {
                                        result = alloc::boxed::Box$LT$T$GT$::new::h98a8485c338fb793(
                                            &var_4f8);
                                    }
                                    else
                                    {
                                        let mut var_488: *mut *mut c_void = rax_41;
                                        let var_480_1: i128 = var_4f8;
                                        let var_470_1: i128 = var_7e0_1;
                                        let var_460_1: u64 = var_310;
                                        let result_4: u64 =
                                            uu_tr::operation::translate_input::h0ac4b7e158c4d5cc(
                                            &var_8e0, &var_330, &var_488);
                                        result = result_4;
                                        
                                        if result_4 == 0
                                        {
                                            goto 'label_461871;
                                        }
                                    }
                                }
                                else if var_858 != 1
                                {
                                    var_8f8 = r13_2;
                                    let var_8f0_3: *mut *mut c_void = r12;
                                    let var_8e8_2: i64 = r14_1;
                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7829100671081658(&var_8c0, rbp_2, var_310);
                                    r14_2 = var_900_1;
                                    uu_tr::operation::TranslateOperation::new::h9445c453708e9f00(
                                        &var_7f8, &var_8f8, &var_8c0);
                                    let r13_3: *mut *mut c_void = var_7f8;
                                    r12 = var_7f0_1;
                                    var_888 = var_7f0_1;
                                    let rax_42: i64 = *var_7e0_1[8];
                                    
                                    if r13_3 == 0
                                    {
                                        var_7e0_1 = rax_42;
                                        let var_7f0_2: i128 = var_888;
                                        var_7f8 = r12;
                                        result = alloc::boxed::Box$LT$T$GT$::new::h98a8485c338fb793(
                                            &var_7f8);
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2db8680331b6b45e(r14_2, rbp_2);
                                    }
                                    else
                                    {
                                        let zmm0_13: i128 = var_888;
                                        var_7f8 = r14_2;
                                        var_7f0_1 = rbp_2;
                                        *var_7f0_1[8] = var_310;
                                        let mut var_368: i128;
                                        uu_tr::operation::SqueezeOperation::new::h1930ed12c17e61bc(
                                            &var_368, &var_7f8);
                                        let var_3f8_1: i128 = zmm0_13;
                                        let var_3e8_1: i64 = rax_42;
                                        let mut var_408: *mut *mut c_void = r13_3;
                                        let var_400_1: *mut *mut c_void = r12;
                                        let var_3e0_1: u64 = var_310;
                                        let var_3d8_1: i128 = var_368;
                                        let var_358: i128;
                                        let var_3c8_1: i128 = var_358;
                                        let var_348: i128;
                                        let var_3b8_1: i128 = var_348;
                                        let var_338: i64;
                                        let var_3a8_1: i64 = var_338;
                                        let result_5: u64 =
                                            uu_tr::operation::translate_input::h8a1bd45b57f84c54(
                                            &var_8e0, &var_330, &var_408);
                                        result = result_5;
                                        
                                        if result_5 == 0
                                        {
                                            goto 'label_461871;
                                        }
                                    }
                                }
                                else
                                {
                                    var_7f8 = r13_2;
                                    var_7f0_1 = r12;
                                    *var_7f0_1[8] = r14_1;
                                    r14_2 = var_900_1;
                                    let mut var_68: ();
                                    uu_tr::operation::SqueezeOperation::new::h1930ed12c17e61bc(
                                        &var_68, &var_7f8);
                                    let result_2: u64 =
                                        uu_tr::operation::translate_input::h94bbb705e31fb463(
                                        &var_8e0, &var_330, &var_68);
                                    result = result_2;
                                    
                                    if result_2 == 0
                                    {
                                        goto 'label_4615d5;
                                    }
                                    
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2db8680331b6b45e(r14_2, rbp_2);
                                }
                            }
                            else
                            {
                                rbp_2 = rcx_11;
                                let mut rbx_1: i64;
                                
                                if rax_4 == 0
                                {
                                    let mut var_510: *mut *mut c_void = r13_2;
                                    let var_508_1: *mut *mut c_void = r12;
                                    let var_500_1: i64 = r14_1;
                                    r14_2 = var_900_1;
                                    let result_3: u64 =
                                        uu_tr::operation::translate_input::h8c1220df74d6e21c(
                                        &var_8e0, &var_330, &var_510);
                                    result = result_3;
                                    
                                    if result_3 == 0
                                    {
                                        'label_4615d5:
                                        rbx_1 = 1;
                                        'label_461883:
                                        let result_6: u64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1c081fbf40a55a1c(_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hd79b0774437b51f0(&var_330));
                                        result = result_6;
                                        
                                        if result_6 == 0
                                        {
                                            if rbx_1 != 0
                                            {
                                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2db8680331b6b45e(r14_2, rbp_2);
                                            }
                                            
                                            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h1854aca9e5792a5a(&var_330);
                                            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hdc227adb4453e688(var_8e0, rdx_3);
                                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h7be61ef66488a66e(&var_868);
                                            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6f0c27d02f998dfa(&var_830);
                                            return 0;
                                        }
                                        
                                        if rbx_1 != 0
                                        {
                                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2db8680331b6b45e(r14_2, rbp_2);
                                        }
                                    }
                                    else
                                    {
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2db8680331b6b45e(r14_2, rbp_2);
                                    }
                                }
                                else
                                {
                                    var_7f8 = var_900_1;
                                    var_7f0_1 = rbp_2;
                                    *var_7f0_1[8] = var_310;
                                    let mut var_3a0: i128;
                                    uu_tr::operation::SqueezeOperation::new::h1930ed12c17e61bc(
                                        &var_3a0, &var_7f8);
                                    let mut var_458: *mut *mut c_void = r13_2;
                                    let var_450_1: *mut *mut c_void = r12;
                                    let var_448_1: i64 = r14_1;
                                    let var_440_1: i128 = var_3a0;
                                    let var_390: i128;
                                    let var_430_1: i128 = var_390;
                                    let var_380: i128;
                                    let var_420_1: i128 = var_380;
                                    let var_370: i64;
                                    let var_410_1: i64 = var_370;
                                    let result_1: u64 =
                                        uu_tr::operation::translate_input::hbaaee97d57104723(
                                        &var_8e0, &var_330, &var_458);
                                    result = result_1;
                                    r14_2 = var_900_1;
                                    
                                    if result_1 == 0
                                    {
                                        'label_461871:
                                        rbx_1 = 0;
                                        goto 'label_461883;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        var_7f8 = r12;
                        var_7f0_1 = r14_1;
                        *var_7f0_1[8] = rdx_5;
                        var_7e0_1 = rcx_11;
                        result = alloc::boxed::Box$LT$T$GT$::new::h98a8485c338fb793(&var_7f8);
                    }
                    
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h1854aca9e5792a5a(&var_330);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hdc227adb4453e688(
                        var_8e0, rdx_3);
                }
            }
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::h7be61ef66488a66e(&var_868);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6f0c27d02f998dfa(&var_830);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_8b8);
    }
    result
}
