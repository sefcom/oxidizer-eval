
  fn uu_dircolors::append_entry::haa18374ab1d5b18d(arg1: *mut i64, arg2: *mut i64, arg3: *mut i8, arg4: i64, arg5: u64, arg6: i64, arg7: u64, arg8: i128) -> *mut i64

{
    let mut var_50: i64 = arg4;
    let var_48: u64 = arg5;
    let mut var_40: i64 = arg6;
    let var_38: u64 = arg7;
    let mut var_60: i128 = arg8;
    let mut var_f8: i32;
    let mut var_c0: *mut i64;
    let mut var_a0: i128;
    let var_90: i64;
    let mut var_88: *mut *mut c_void;
    
    if core::str::pattern::Pattern::is_prefix_of::h6e83327a0a48e578(arg4, arg5) == 0
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc62722f7a17ae0a(arg6, arg7, "optionscolorunrecognized keyword…", 7) != 0
        {
            *arg1 = -0x8000000000000000;
        }
        else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc62722f7a17ae0a(arg6, arg7, "colorunrecognized keyword \x1b[0…", 5) != 0
        {
            *arg1 = -0x8000000000000000;
        }
        else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc62722f7a17ae0a(arg6, arg7, "eightbitESTRPIPENotFoundTimedOut…", 8) == 0
        {
            var_88 = &data_4f7cb8;
            let var_80_1: *mut *mut c_void =
                &uucore::features::colors::FILE_ATTRIBUTE_CODES::h3c0cf231055d2aee;
            let rax_8: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h13321c5277c7ef75(&var_88, &var_40);
            
            if rax_8 == 0
            {
                var_c0 = &var_50;
                let var_b8_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
                var_f8 = &data_4f5ec0;
                let var_f0_4: i64 = 1;
                let var_d8_5: i64 = 0;
                let var_e8_5: *mut *mut i64 = &var_c0;
                let var_e0_4: i64 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(arg1, &var_f8);
            }
            else
            {
                let mut var_68: *mut c_void = &rax_8[2];
                
                if *arg3 != 2
                {
                    var_c0 = &var_68;
                    let var_b8_6: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0284718a7e282620;
                    let var_b0_4: *mut i128 = &var_60;
                    let var_a8_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
                    var_f8 = &data_4f5e90;
                    let var_f0_5: i64 = 3;
                    let var_d8_6: i64 = 0;
                }
                else
                {
                    var_c0 = &var_60;
                    let var_b8_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
                    let var_b0_3: *mut *mut c_void = &var_68;
                    let var_a8_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0284718a7e282620;
                    var_f8 = &data_4f5ed0;
                    let var_f0_3: i64 = 4;
                    let var_d8_4: *mut c_void = &data_41c128;
                    let var_d0_2: i64 = 3;
                }
                
                let var_e8_6: *mut *mut i64 = &var_c0;
                let var_e0_5: i64 = 2;
                core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_a0, &var_f8);
                let rsi_14: i64 = *var_a0[8];
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hee3cea90a974f94a(arg2, rsi_14, var_90 + rsi_14);
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_a0);
            }
        }
        else
        {
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        var_f8 = 0;
        
        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h84f44b8554ae9ebf(arg4, arg5, 
            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2e, &var_f8)) != 0
        {
            var_c0 = &var_50;
            let var_b8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            var_f8 = &data_4f5e80;
            let var_f0_1: i64 = 1;
            let var_d8_1: i64 = 0;
            let var_e8_1: *mut *mut i64 = &var_c0;
            let var_e0_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_88, &var_f8);
            
            if *arg3 == 2
            {
                goto 'label_4692e7;
            }
            
            goto 'label_4691f2;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6fd947b551626403(&var_88, arg4, arg5);
        let mut var_f0_2: i64;
        
        if *arg3 != 2
        {
            'label_4691f2:
            var_c0 = &var_88;
            let var_b8_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_b0_1: *mut i128 = &var_60;
            let var_a8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            var_f8 = &data_4f5e90;
            var_f0_2 = 3;
            let var_d8_2: i64 = 0;
            let var_e8_2: *mut *mut i64 = &var_c0;
            let var_e0_2: i64 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_a0, &var_f8);
        }
        else
        {
            'label_4692e7:
            var_c0 = &var_60;
            let var_b8_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            let var_b0_2: *mut i64 = &var_88;
            let var_a8_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_f8 = &data_4f5ed0;
            var_f0_2 = 4;
            let var_d8_3: *mut c_void = &data_41c128;
            let var_d0_1: i64 = 3;
            let var_e8_3: *mut *mut i64 = &var_c0;
            let var_e0_3: i64 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_a0, &var_f8);
        }
        
        var_f8 = var_a0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hee3cea90a974f94a(arg2, var_f0_2, var_90 + var_f0_2);
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_f8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_88);
    }
    arg1
}
