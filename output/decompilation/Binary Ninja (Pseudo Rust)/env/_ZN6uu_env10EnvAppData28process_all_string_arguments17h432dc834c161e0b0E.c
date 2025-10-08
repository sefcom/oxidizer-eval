
  fn uu_env::EnvAppData::process_all_string_arguments::h432dc834c161e0b0(arg1: *mut i128, arg2: *mut i16, arg3: *mut c_void) -> *mut i128

{
    let mut var_110: i64 = 0;
    let var_108: i64 = 8;
    let var_100: i64 = 0;
    let mut var_a8: *const i8 = "argv0aOverride the zeroth argume…";
    let var_a0: i64 = 5;
    let var_98: *const i8 = "chdirDIRchange working directory…";
    let var_90: i64 = 5;
    let var_88: *const i8 = "fileTSTPi128 as dyn ERANGEEDEADL…";
    let var_80: i64 = 4;
    let var_78: *const i8 = "ignore-signalSIGset handling of …";
    let var_70: i64 = 0xd;
    let var_68: *const i8 = "unsetremove variable from the en…";
    let var_60: i64 = 5;
    let var_58: i128 = *U"aCfu";
    let rax: i64 = *arg3.byte_offset(8);
    let rcx: i64 = *arg3.byte_offset(0x10);
    let mut var_d8: i64 = rax;
    let var_d0: i64 = rax + rcx * 0x18;
    let var_c8: i64 = 0;
    let mut rax_1: i64;
    let mut rdx: *mut c_void;
    rax_1 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7ef2d91b577ff9a(&var_d8);
    
    if rdx != 0
    {
        let mut rbx_1: i64 = rax_1;
        let mut r14_1: *mut c_void = rdx;
        let mut rbp_1: i8 = 0;
        
        loop
        {
            let mut var_f8: ();
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_f8, 
                *r14_1.byte_offset(8), *r14_1.byte_offset(0x10));
            let mut var_168: *mut *mut [i8; 0xeb];
            let var_158: i64;
            let mut var_128: i128;
            let var_f0: *mut i8;
            let var_e8: *mut c_void;
            
            if ((rbx_1 == 0 | rbp_1) & 1) == 0
            {
                if _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(*r14_1.byte_offset(8), *r14_1.byte_offset(0x10), 
                    "---ucannot unset '': Invalid arg…", 2) != 0
                {
                    'label_47424a:
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc2eed86ca3e5fc9d(&var_168, *r14_1.byte_offset(8), *r14_1.byte_offset(0x10));
                    let var_118_2: i64 = var_158;
                    var_128 = var_168;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hb3d6cf7e4aee7804(&var_110, &var_128);
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h948bda3da34fcb33(&var_f8);
                    let mut rax_24: i64;
                    let mut i_3: *mut c_void;
                    rax_24 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7ef2d91b577ff9a(&var_d8);
                    
                    if i_3 != 0
                    {
                        let mut r13_1: i64 = rax_24;
                        let mut i_2: *mut c_void = i_3;
                        let mut i: *mut c_void;
                        
                        do
                        {
                            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_f8, 
                                *i_2.byte_offset(8), *i_2.byte_offset(0x10));
                            
                            if ((r13_1 == 0 | rbp_1) & 1) == 0 && _$LT$std..ffi..os_str..OsString$u20$as$u20$core..cmp..PartialEq$LT$str$GT$$GT$::eq::h1ffd8f17dc4fb6be(*i_2.byte_offset(8), 
                                *i_2.byte_offset(0x10), "---ucannot unset '': Invalid arg…", 2) == 0
                            {
                                var_168 = 0;
                                let mut rax_27: *mut i8;
                                let mut rdx_20: u64;
                                rax_27 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(
                                    0x2d, &var_168);
                                
                                if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hdd8e30ed8444b89c(var_f0, var_e8, rax_27, rdx_20) == 0
                                {
                                    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(var_f0, var_e8);
                                }
                            }
                            
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc2eed86ca3e5fc9d(&var_168, *i_2.byte_offset(8), *i_2.byte_offset(0x10));
                            let var_118_3: i64 = var_158;
                            var_128 = var_168;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hb3d6cf7e4aee7804(&var_110, 
                                &var_128);
                            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h948bda3da34fcb33(&var_f8);
                            let mut rax_30: i64;
                            rax_30 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7ef2d91b577ff9a(&var_d8);
                            r13_1 = rax_30;
                            i_2 = i;
                        } while i != 0;
                    }
                    
                    break;
                }
                
                var_168 = 0;
                let mut rax_4: *mut i8;
                let mut rdx_2: u64;
                rax_4 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_168);
                
                if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hdd8e30ed8444b89c(
                    var_f0, var_e8, rax_4, rdx_2) == 0 && _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(var_f0, var_e8) == 0
                {
                    goto 'label_47424a;
                }
            }
            
            uu_env::check_and_handle_string_args::h6c65360a0996fb8b(&var_168, 
                *r14_1.byte_offset(8), *r14_1.byte_offset(0x10), 
                "--split-string-S-vSargv0:     ex…", 0xe, &var_110, nullptr);
            let mut rax_7: u64 = var_168;
            let mut var_160: *mut *mut c_void;
            let mut rcx_4: *mut *mut c_void = var_160;
            
            if rax_7 == 0
            {
                if (rcx_4 & 1) != 0
                {
                    'label_474005:
                    *arg2.byte_offset(1) = 1;
                    'label_474009:
                    rbp_1 = 0;
                    'label_47400e:
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h948bda3da34fcb33(&var_f8);
                    let mut rax_9: i64;
                    let mut rdx_6: *mut c_void;
                    rax_9 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7ef2d91b577ff9a(&var_d8);
                    rbx_1 = rax_9;
                    r14_1 = rdx_6;
                    
                    if rdx_6 == 0
                    {
                        break;
                    }
                    
                    continue;
                }
                else
                {
                    uu_env::check_and_handle_string_args::h6c65360a0996fb8b(&var_168, 
                        *r14_1.byte_offset(8), *r14_1.byte_offset(0x10), 
                        "-S-vSargv0:     executing: [0]= …", 2, &var_110, nullptr);
                    rax_7 = var_168;
                    rcx_4 = var_160;
                    
                    if rax_7 == 0
                    {
                        if (rcx_4 & 1) != 0
                        {
                            goto 'label_474005;
                        }
                        
                        uu_env::check_and_handle_string_args::h6c65360a0996fb8b(&var_168, 
                            *r14_1.byte_offset(8), *r14_1.byte_offset(0x10), 
                            "-vSargv0:     executing: [0]= []…", 3, &var_110, nullptr);
                        rax_7 = var_168;
                        rcx_4 = var_160;
                        
                        if rax_7 == 0
                        {
                            if (rcx_4 & 1) != 0
                            {
                                *arg2 = 0x101;
                                goto 'label_474009;
                            }
                            
                            uu_env::check_and_handle_string_args::h6c65360a0996fb8b(&var_168, 
                                *r14_1.byte_offset(8), *r14_1.byte_offset(0x10), "-vvSkindAuto/", 
                                4, &var_110, arg3);
                            rax_7 = var_168;
                            rcx_4 = var_160;
                            
                            if rax_7 == 0
                            {
                                if (rcx_4 & 1) != 0
                                {
                                    *arg2 = 0x101;
                                    arg2[1] = 0;
                                    goto 'label_474009;
                                }
                                
                                let mut rax_13: *mut *mut [i8; 0xeb];
                                let mut rdx_10: *mut *mut c_void;
                                rax_13 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c("---ucannot unset '': Invalid arg…", 2, var_f0, var_e8);
                                
                                if rax_13 == 0
                                {
                                    let mut rax_15: *mut *mut [i8; 0xeb];
                                    let mut rdx_12: *mut c_void;
                                    rax_15 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c("-: uu_env(uutils coreutils) 0.0.…", 1, var_f0, 
                                        var_e8);
                                    let mut rax_16: i8;
                                    let mut i_1: i32;
                                    
                                    if rax_15 != 0
                                    {
                                        var_168 = rax_15;
                                        var_160 = rdx_12.byte_offset(rax_15);
                                        rax_16 = core::str::validations::next_code_point::h82739559a2cd589d(&var_168, var_e8);
                                    }
                                    
                                    if rax_15 == 0 || (i_1 != 0x110000 & rax_16) != 1
                                    {
                                        rbp_1 = 0;
                                    }
                                    else
                                    {
                                        do
                                        {
                                            var_128 = i_1;
                                            rbp_1 = _$LT$char$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h2af8667b79ce998c(&var_128);
                                            let mut rax_18: i8;
                                            rax_18 = core::str::validations::next_code_point::h82739559a2cd589d(&var_168, var_e8);
                                            
                                            if (rax_18 & 1) == 0
                                            {
                                                break;
                                            }
                                        } while i_1 != 0x110000;
                                    }
                                }
                                else
                                {
                                    var_168 = rax_13;
                                    var_160 = rdx_10;
                                    rbp_1 = _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h61d67ad19dc8ea59(&var_168, &var_a8);
                                }
                                
                                if _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(var_f0, var_e8) == 0
                                {
                                    'label_474209:
                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hc2eed86ca3e5fc9d(&var_168, *r14_1.byte_offset(8), *r14_1.byte_offset(0x10));
                                    let var_118_1: i64 = var_158;
                                    var_128 = var_168;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hb3d6cf7e4aee7804(&var_110, 
                                        &var_128);
                                    goto 'label_47400e;
                                }
                                
                                if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hdd8e30ed8444b89c(var_f0, var_e8, "-ucannot unset '': Invalid argum…", 2) == 0
                                {
                                    goto 'label_474209;
                                }
                                
                                if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hdd8e30ed8444b89c(var_f0, var_e8, "---ucannot unset '': Invalid arg…", 2) != 0
                                {
                                    goto 'label_474209;
                                }
                                
                                let mut rax_33: i64;
                                let mut rdx_24: i64;
                                rax_33 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_f0, var_e8);
                                
                                if rax_33 == 0
                                {
                                    core::str::slice_error_fail::h1a2885084e28d077(var_f0, var_e8, 
                                        2, var_e8);
                                    /* no return */
                                }
                                
                                var_128 = rax_33;
                                *var_128[8] = rdx_24;
                                let mut var_b8: *mut i128 = &var_128;
                                let var_b0_1: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
                                var_168 = &data_510a50;
                                let var_160_1: i64 = 2;
                                let var_148_1: i64 = 0;
                                let var_158_1: *mut *mut i128 = &var_b8;
                                let mut var_150_1: i64 = 1;
                                let mut var_48: i128;
                                core::option::Option$LT$T$GT$::map_or_else::h96013652e67eecbe(
                                    &var_48, &var_168);
                                var_150_1 = 0x7d;
                                var_168 = var_48;
                                let var_38: i64;
                                let var_158_2: i64 = var_38;
                                rax_7 =
                                    alloc::boxed::Box$LT$T$GT$::new::h0cd361b0827381d8(&var_168);
                                rcx_4 = &data_5108a8;
                            }
                        }
                    }
                }
            }
            
            *arg1.byte_offset(8) = rax_7;
            arg1[1] = rcx_4;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h948bda3da34fcb33(
                &var_f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..ffi..os_str..OsString$GT$$GT$::heb5c5b33ec176de2(&var_110);
            return arg1;
        }
    }
    
    arg1[1] = var_100;
    *arg1 = var_110;
    arg1
}
