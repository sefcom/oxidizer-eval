
  fn uu_od::OdOptions::new::h0c238bf8480e2d7e(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_168: *mut c_void;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(
        &var_168, arg2, "endianlittlebigInvalid argument …", 6);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e(
        "endianlittlebigInvalid argument …", 6, &var_168);
    let mut var_138: i128;
    let mut var_108: i32;
    let mut rax_6: *mut i128;
    let mut rcx: i8;
    
    if rax == 0
    {
        rcx = 2;
        'label_4c60ef:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(
            &var_168, arg2, "skip-byteswidth: warning: invali…", 0xa);
        let rax_3: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e(
            "skip-byteswidth: warning: invali…", 0xa, &var_168);
        let mut var_150: u64;
        let mut var_100: u64;
        let var_f8: i128;
        let mut r15_3: u64;
        
        if rax_3 == 0
        {
            r15_3 = 0;
            'label_4c6143:
            uu_od::parse_inputs::parse_inputs::h38cbe1382e5c3650(&var_168, arg2, &data_541748);
            let var_158: *mut i128;
            let var_148: i64;
            let mut var_128: *mut i128;
            
            if var_148 == 3
            {
                var_128 = var_158;
                var_138 = var_168;
                rax_6 = uu_od::OdOptions::new::_$u7b$$u7b$closure$u7d$$u7d$::ha7a222c74d8e7c97(
                    &var_138);
                goto 'label_4c62ab;
            }
            
            let zmm0_2: i128 = var_168;
            let mut var_e0_1: i64 = var_148;
            let mut var_b8: i128;
            let mut var_a8: *mut i128;
            
            if var_148 != 2
            {
                r15_3 = var_150;
                var_168 = zmm0_2;
                let var_158_3: *mut i128 = var_158;
                let rax_9: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x18);
                
                if rax_9 == 0
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                *rax_9 = zmm0_2;
                rax_9[1] = var_158;
                alloc::slice::hack::into_vec::h371cf1993c745829(&var_b8, rax_9, 1);
            }
            else
            {
                var_b8 = zmm0_2;
                var_a8 = var_158;
                var_e0_1 = 0;
            }
            
            uu_od::parse_formats::parse_format_flags::h9e51e9c420287b95(&var_138, arg3, arg4);
            let mut var_120: i32;
            let mut rax_10: *mut i128;
            let mut rcx_4: *mut *mut c_void;
            
            if var_138 == 0
            {
                let rdx_5: i64 = *var_138[8];
                rax_10 = var_128;
                rcx_4 = var_120;
                
                if rdx_5 == -0x8000000000000000
                {
                    goto 'label_4c637a;
                }
                
                let mut var_d8: i64 = rdx_5;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&var_168, arg2, "width: warning: invalid width  i…", 5);
                let rax_12: u64 =
                    clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e(
                    "width: warning: invalid width  i…", 5, &var_168);
                let mut r13_1: u64 = rax_12;
                let mut rax_13: i8;
                
                if rax_12 != 0
                {
                    rax_13 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(arg2, "width: warning: invalid width  i…", 5);
                }
                
                let mut var_110: u64;
                let mut r12_2: u64;
                
                if rax_12 == 0 || rax_13 != 2
                {
                    var_110 = 0x10;
                    r12_2 = 0x10;
                    'label_4c6465:
                    let rax_16: u64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h84b6b874ac42ad5b(rax_10, rax_10.byte_offset(rcx_4 * 0x28));
                    let mut var_c0: u64 = rax_16;
                    
                    if r12_2 == 0
                    {
                        'label_4c64a9:
                        let mut rax_24: i64;
                        let mut rdx_10: i64;
                        rax_24 = uucore::util_name::h60d842bf27b05e82();
                        var_138 = rax_24;
                        *var_138[8] = rdx_10;
                        var_108 = &var_138;
                        var_100 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                        var_168 = &data_541650;
                        let var_160_2: i64 = 2;
                        let var_148_2: i64 = 0;
                        let var_158_5: *mut i32 = &var_108;
                        let var_150_2: i64 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_168);
                        var_138 = &var_110;
                        *var_138[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        var_128 = &var_c0;
                        var_120 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        var_168 = &data_541670;
                        let var_160_3: i64 = 3;
                        let var_148_3: i64 = 0;
                        let var_158_6: *mut i128 = &var_138;
                        var_150 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_168);
                        var_110 = var_c0;
                    }
                    else
                    {
                        if rax_16 == 0
                        {
                            core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                            /* no return */
                        }
                        
                        let mut rdx_9: u64;
                        
                        if (rax_16 | r12_2) >> 0x20 == 0
                        {
                            rdx_9 = COMBINE(0, r12_2) % rax_16;
                        }
                        else
                        {
                            rdx_9 = COMBINE(0, r12_2) % rax_16;
                        }
                        
                        if rdx_9 != 0
                        {
                            goto 'label_4c64a9;
                        }
                    }
                    
                    let rax_26: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "output-duplicates0.0.28Dump file…", 0x11);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&var_168, arg2, "read-bytesaddress-radixRadix mus…", 0xa);
                    let rax_27: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e(
                        "read-bytesaddress-radixRadix mus…", 0xa, &var_168);
                    let mut r12_4: i64;
                    
                    if rax_27 == 0
                    {
                        r12_4 = 0;
                        'label_4c65f4:
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1d26d5e9f1693520(&var_168, arg2, "address-radixRadix must be one o…", 0xd);
                        let rax_28: *mut c_void =
                            clap_builder::parser::error::MatchesError::unwrap::h009cf0e4b0406a7e(
                            "address-radixRadix must be one o…", 0xd, &var_168);
                        let mut rcx_6: i8 = 2;
                        
                        if rax_28 == 0
                        {
                            goto 'label_4c67a7;
                        }
                        
                        let mut rax_39: *mut i128;
                        
                        if *rax_28.byte_offset(0x10) == 0
                        {
                            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&var_138, "Radix cannot be empty, and must …", 0x36);
                            let var_158_9: *mut i128 = var_128;
                            var_168 = var_138;
                            var_150 = 1;
                            rax_39 = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&var_168);
                            'label_4c684a:
                            arg1[1] = rax_39;
                            arg1[2] = &data_5416d8;
                            *arg1 = 2;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&var_d8);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h65d68c6e4131dae8(&var_b8);
                        }
                        else
                        {
                            let rax_31: u64 = **rax_28.byte_offset(8) - 0x64;
                            
                            if rax_31 > 0x14
                            {
                                'label_4c6822:
                                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(&var_138, "Radix must be one of [o, d, x, n…", 0x21);
                                let var_158_10: *mut i128 = var_128;
                                var_168 = var_138;
                                var_150 = 1;
                                rax_39 =
                                    alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&var_168);
                                goto 'label_4c684a;
                            }
                            
                            match rax_31
                            {
                                0 =>
                                {
                                    rcx_6 = 0;
                                    'label_4c67a7:
                                    arg1[6] = var_a8;
                                    *arg1.byte_offset(0x20) = var_b8;
                                    *arg1.byte_offset(0x38) = var_d8;
                                    arg1[9] = rcx_4;
                                    let rax_42: u64 = var_110;
                                    *arg1 = r12_4;
                                    arg1[1] = r13_1;
                                    arg1[2] = var_e0_1;
                                    let var_140: i64;
                                    arg1[3] = var_140;
                                    arg1[0xa] = r15_3;
                                    arg1[0xb] = rax_42;
                                    arg1[0xc] = rax_26;
                                    *arg1.byte_offset(0x61) = rcx;
                                    *arg1.byte_offset(0x62) = rcx_6;
                                }
                                1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0xc | 0xd | 0xe | 0xf | 0x10 |
                                    0x11 | 0x12 | 0x13 =>
                                {
                                    goto 'label_4c6822;
                                }
                                0xa =>
                                {
                                    rcx_6 = 3;
                                    goto 'label_4c67a7;
                                }
                                0xb =>
                                {
                                    goto 'label_4c67a7;
                                }
                                0x14 =>
                                {
                                    rcx_6 = 1;
                                    goto 'label_4c67a7;
                                }
                            }
                        }
                    }
                    else
                    {
                        let r13_2: *mut i8 = *rax_27.byte_offset(8);
                        let r12_3: u64 = *rax_27.byte_offset(0x10);
                        uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(&var_108, 
                            r13_2, r12_3);
                        
                        if var_108 == 3
                        {
                            r13_1 = var_100;
                            r12_4 = 1;
                            goto 'label_4c65f4;
                        }
                        
                        var_138 = var_108;
                        let var_128_2: i128 = var_f8;
                        let mut var_48: i128;
                        uu_od::format_error_message::h954b3c00e83b3e7f(&var_48, var_138, r13_2, 
                            r12_3, "read-bytesaddress-radixRadix mus…");
                        var_150 = 1;
                        var_168 = var_48;
                        let var_38: i64;
                        let var_158_7: i64 = var_38;
                        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&var_168);
                        arg1[2] = &data_5416d8;
                        *arg1 = 2;
                        core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::h8994ad15651988d3(&var_138);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&var_d8);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h65d68c6e4131dae8(&var_b8);
                    }
                }
                else
                {
                    let r12_1: *mut i8 = *(r13_1 + 8);
                    r13_1 = *(r13_1 + 0x10);
                    uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(&var_108, 
                        r12_1, r13_1);
                    
                    if var_108 == 3
                    {
                        r12_2 = var_100;
                        var_110 = r12_2;
                        goto 'label_4c6465;
                    }
                    
                    var_138 = var_108;
                    let var_128_3: i128 = var_f8;
                    let mut var_60: i128;
                    uu_od::format_error_message::h954b3c00e83b3e7f(&var_60, var_138, r12_1, r13_1, 
                        "width: warning: invalid width  i…");
                    var_150 = 1;
                    var_168 = var_60;
                    let var_50: i64;
                    let var_158_8: i64 = var_50;
                    arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&var_168);
                    arg1[2] = &data_5416d8;
                    *arg1 = 2;
                    core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::h8994ad15651988d3(&var_138);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&var_d8);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h65d68c6e4131dae8(&var_b8);
                }
            }
            else
            {
                let var_158_4: i64 = var_120;
                var_168 = var_138;
                var_150 = 1;
                rax_10 = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&var_168);
                rcx_4 = &data_5416d8;
                'label_4c637a:
                arg1[1] = rax_10;
                arg1[2] = rcx_4;
                *arg1 = 2;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h65d68c6e4131dae8(&var_b8);
            }
        }
        else
        {
            let r15_2: *mut i8 = *rax_3.byte_offset(8);
            let rbp_2: u64 = *rax_3.byte_offset(0x10);
            uu_od::parse_nrofbytes::parse_number_of_bytes::h85777a6afadc140a(&var_108, r15_2, 
                rbp_2);
            
            if var_108 == 3
            {
                r15_3 = var_100;
                goto 'label_4c6143;
            }
            
            var_138 = var_108;
            let var_128_1: i128 = var_f8;
            let mut var_78: i128;
            uu_od::format_error_message::h954b3c00e83b3e7f(&var_78, var_138, r15_2, rbp_2, 
                "skip-byteswidth: warning: invali…");
            var_150 = 1;
            var_168 = var_78;
            let var_68: i64;
            let var_158_1: i64 = var_68;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&var_168);
            arg1[2] = &data_5416d8;
            *arg1 = 2;
            core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::h8994ad15651988d3(&var_138);
        }
    }
    else
    {
        let mut var_90: *mut c_void = rax;
        let r15_1: i64 = *rax.byte_offset(8);
        let rbp_1: u64 = *rax.byte_offset(0x10);
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c6cac41b0728315(r15_1, rbp_1, "littlebigInvalid argument --endi…", 6) != 0
        {
            rcx = 0;
            goto 'label_4c60ef;
        }
        
        rcx = 1;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5c6cac41b0728315(r15_1, rbp_1, "bigInvalid argument --endian=ski…", 3) != 0
        {
            goto 'label_4c60ef;
        }
        
        var_108 = &var_90;
        let var_100_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d4d73fd5ba0347a;
        var_168 = &data_541640;
        let var_160_1: i64 = 1;
        let var_148_1: i64 = 0;
        let var_158_2: *mut i32 = &var_108;
        let var_150_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(&var_138, &var_168);
        let var_120_1: i32 = 1;
        rax_6 = alloc::boxed::Box$LT$T$GT$::new::h222a7a04b251eb66(&var_138);
        'label_4c62ab:
        arg1[1] = rax_6;
        arg1[2] = &data_5416d8;
        *arg1 = 2;
    }
    arg1
}
