
  fn uu_split::strategy::NumberType::from::h9e6ddc21e9e979a9(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        arg2, arg3);
    let mut var_78: i64 = 0;
    let var_70: u64 = arg3;
    let var_38: i16 = 1;
    let mut var_90: ();
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hb7d063058b59f453(&var_90, &var_78);
    let var_80: i64;
    let mut var_108: i32;
    let mut var_f8: i64;
    let mut var_e8: i32;
    let var_e0: i64;
    let var_d8: i128;
    let mut var_c8_1: i128;
    let mut var_c8_2: i128;
    let mut var_b0: i64;
    let var_a8: i64;
    let var_a0: i128;
    let var_88: *mut i64;
    let mut rax_1: i64;
    let mut rax_12: i64;
    let mut rcx_3: i64;
    let mut r15_1: i64;
    
    if var_80 == 3
    {
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(*var_88, var_88[1], "lcannot split in more than one w…", 1) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(*var_88, var_88[1], "rlcannot split in more than one …", 1) != 0
            {
                uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_e8, var_88[4], 
                    var_88[5]);
                
                if var_e8 != 3
                {
                    var_f8 = var_d8;
                    var_108 = var_e8;
                    uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h987e1a854451dac2(&var_b0, &var_88[4], &var_108);
                    rax_12 = var_b0;
                    r15_1 = var_a8;
                    var_c8_2 = var_a0;
                    
                    if rax_12 != 2
                    {
                        goto 'label_4d6cf5;
                    }
                    
                    goto 'label_4d6cd1;
                }
                
                r15_1 = var_e0;
                'label_4d6cd1:
                uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_e8, var_88[2], 
                    var_88[3]);
                
                if var_e8 != 3
                {
                    var_f8 = var_d8;
                    var_108 = var_e8;
                    uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::hb3130f27d1223ddd(&var_b0, &var_88[2], &var_108);
                    rcx_3 = var_b0;
                    rax_1 = var_a8;
                    var_c8_1 = var_a0;
                    
                    if rcx_3 != 2
                    {
                        goto 'label_4d6e2e;
                    }
                }
                else
                {
                    rax_1 = var_e0;
                }
                
                if rax_1 - 1 < r15_1
                {
                    arg1[1] = 5;
                    goto 'label_4d6dfd;
                }
                
                _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h973f901dc7acf26e(
                    &var_108, &var_88[2]);
                goto 'label_4d6e58;
            }
            
            'label_4d6aa5:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(
                &var_108, arg2, arg3);
            'label_4d6aaf:
            arg1[3] = var_f8;
            *arg1.byte_offset(8) = var_108;
            *arg1 = 0;
        }
        else
        {
            uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_e8, var_88[4], 
                var_88[5]);
            
            if var_e8 != 3
            {
                var_f8 = var_d8;
                var_108 = var_e8;
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h7312dcea870b9dcf(&var_b0, &var_88[4], &var_108);
                rax_12 = var_b0;
                r15_1 = var_a8;
                var_c8_2 = var_a0;
                
                if rax_12 == 2
                {
                    goto 'label_4d6b49;
                }
                
                'label_4d6cf5:
                *arg1.byte_offset(0x10) = var_c8_2;
                *arg1 = rax_12;
                arg1[1] = r15_1;
            }
            else
            {
                r15_1 = var_e0;
                'label_4d6b49:
                uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_e8, var_88[2], 
                    var_88[3]);
                
                if var_e8 != 3
                {
                    var_f8 = var_d8;
                    var_108 = var_e8;
                    uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h35d40f7825808af8(&var_b0, &var_88[2], &var_108);
                    rcx_3 = var_b0;
                    rax_1 = var_a8;
                    var_c8_1 = var_a0;
                    
                    if rcx_3 != 2
                    {
                        goto 'label_4d6e2e;
                    }
                }
                else
                {
                    rax_1 = var_e0;
                }
                
                if rax_1 - 1 >= r15_1
                {
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h973f901dc7acf26e(
                        &var_108, &var_88[2]);
                    'label_4d6e58:
                    arg1[3] = var_f8;
                    *arg1.byte_offset(8) = var_108;
                    *arg1 = 1;
                }
                else
                {
                    arg1[1] = 3;
                    'label_4d6dfd:
                    arg1[2] = rax_1;
                    arg1[3] = r15_1;
                    *arg1 = 2;
                }
            }
        }
    }
    else if var_80 == 2
    {
        let r13_1: i64 = *var_88;
        let rbp_1: i64 = var_88[1];
        var_108 = 0;
        let mut rax_2: i64;
        let mut rdx_1: u64;
        rax_2 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x6c, &var_108);
        let rax_3: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(
            r13_1, rbp_1, rax_2, rdx_1);
        let mut rax_5: i8;
        
        if rax_3 == 0
        {
            let r13_2: i64 = *var_88;
            let rbp_2: i64 = var_88[1];
            var_108 = 0;
            let mut rax_4: i64;
            let mut rdx_3: u64;
            rax_4 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x72, &var_108);
            rax_5 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcb49aff15e773791(
                r13_2, rbp_2, rax_4, rdx_3);
        }
        
        if rax_3 == 0 && rax_5 == 0
        {
            uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_e8, var_88[2], 
                var_88[3]);
            
            if var_e8 != 3
            {
                var_f8 = var_d8;
                var_108 = var_e8;
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h06b2dfbb4a152b45(&var_b0, &var_88[2], &var_108);
                rax_12 = var_b0;
                r15_1 = var_a8;
                var_c8_2 = var_a0;
                
                if rax_12 != 2
                {
                    goto 'label_4d6cf5;
                }
            }
            else
            {
                r15_1 = var_e0;
            }
            
            uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_e8, *var_88, 
                var_88[1]);
            
            if var_e8 != 3
            {
                var_f8 = var_d8;
                var_108 = var_e8;
                uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::hbe5df86a08721417(&var_b0, var_88, &var_108);
                rcx_3 = var_b0;
                rax_1 = var_a8;
                var_c8_1 = var_a0;
                
                if rcx_3 != 2
                {
                    goto 'label_4d6e2e;
                }
            }
            else
            {
                rax_1 = var_e0;
            }
            
            if rax_1 - 1 < r15_1
            {
                arg1[1] = 1;
                goto 'label_4d6dfd;
            }
            
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h973f901dc7acf26e(&var_108, 
                var_88);
            goto 'label_4d6e58;
        }
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(*var_88, var_88[1], "lcannot split in more than one w…", 1) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfe60e619d7fc1608(*var_88, var_88[1], "rlcannot split in more than one …", 1) == 0
            {
                goto 'label_4d6aa5;
            }
            
            uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_e8, var_88[2], 
                var_88[3]);
            
            if var_e8 == 3
            {
                rax_1 = var_e0;
                arg1[1] = 4;
                goto 'label_4d6a4a;
            }
            
            let var_f8_2: i128 = var_d8;
            var_108 = var_e8;
            uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h78aa2187d3c4e60e(
                &var_b0, &var_88[2], &var_108);
            rcx_3 = var_b0;
            rax_1 = var_a8;
            var_c8_1 = var_a0;
            
            if rcx_3 != 2
            {
                goto 'label_4d6e2e;
            }
            
            arg1[1] = 4;
            goto 'label_4d6a4a;
        }
        
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_e8, var_88[2], 
            var_88[3]);
        
        if var_e8 != 3
        {
            let var_f8_1: i128 = var_d8;
            var_108 = var_e8;
            uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::hf0efa26e5c8f8979(
                &var_b0, &var_88[2], &var_108);
            rcx_3 = var_b0;
            rax_1 = var_a8;
            var_c8_1 = var_a0;
            
            if rcx_3 != 2
            {
                goto 'label_4d6e2e;
            }
            
            arg1[1] = 2;
            goto 'label_4d6a4a;
        }
        
        rax_1 = var_e0;
        arg1[1] = 2;
        'label_4d6a4a:
        arg1[2] = rax_1;
        *arg1 = 2;
    }
    else
    {
        if var_80 != 1
        {
            goto 'label_4d6aa5;
        }
        
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_e8, *var_88, var_88[1]);
        
        if var_e8 == 3
        {
            rax_1 = var_e0;
            'label_4d6a39:
            
            if rax_1 != 0
            {
                arg1[1] = 0;
                goto 'label_4d6a4a;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha461c13160c52a35(
                &var_108, arg2, arg3);
            goto 'label_4d6aaf;
        }
        
        var_f8 = var_d8;
        var_108 = var_e8;
        uu_split::strategy::NumberType::from::_$u7b$$u7b$closure$u7d$$u7d$::h0c2f1a54dfcf23c8(
            &var_b0, var_88, &var_108);
        rcx_3 = var_b0;
        rax_1 = var_a8;
        var_c8_1 = var_a0;
        
        if rcx_3 == 2
        {
            goto 'label_4d6a39;
        }
        
        'label_4d6e2e:
        *arg1.byte_offset(0x10) = var_c8_1;
        *arg1 = rcx_3;
        arg1[1] = rax_1;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hb91d4d90968b37bf(&var_90)
}
