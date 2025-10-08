
  fn uu_ptx::WordFilter::new::h59c276fe1fe77d78(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> *mut i64

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
        arg2, "only-filereferenceswidthProduce …", 9);
    let mut var_198: *mut *mut [i8; 0xc];
    let var_190: i64;
    let mut var_188: i64;
    let mut var_180: i128;
    let var_170: i64;
    let mut var_160: *mut *mut [i8; 0xc];
    let mut var_118: i128;
    let mut var_108_1: i64;
    let mut rax_1: i64;
    let mut rcx: *mut *mut [i8; 0xc];
    let mut rdx: i64;
    
    if rax == 0
    {
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h5d2cbf9a529b523a(&var_160);
        rcx = var_160;
        let mut var_158: i64;
        rax_1 = var_158;
        let var_150: i64;
        rdx = var_150;
        let mut var_148: i128;
        var_118 = var_148;
        let var_138: i64;
        var_108_1 = var_138;
        'label_52ae05:
        let mut var_98: *mut *mut [i8; 0xc] = rcx;
        let var_90_1: i64 = rax_1;
        let zmm0_1: i128 = var_118;
        let var_70_1: i64 = var_108_1;
        let rax_3: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(
            arg2, "ignore-fileonly-filereferenceswi…", 0xb);
        let mut var_e8_1: i128;
        let mut var_d8_1: i64;
        let mut rax_4: i64;
        let mut rcx_1: *mut *mut [i8; 0xc];
        let mut rdx_1: i64;
        
        if rax_3 == 0
        {
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h5d2cbf9a529b523a(&var_160);
            rcx_1 = var_160;
            rax_4 = var_158;
            rdx_1 = var_150;
            var_e8_1 = var_148;
            var_d8_1 = var_138;
            'label_52aee8:
            var_118 = rcx_1;
            *var_118[8] = rax_4;
            let var_100_1: i128 = var_e8_1;
            let var_f0_1: i64 = var_d8_1;
            let rax_6: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "break-fileignore-caseignore-file…", 0xa);
            let mut rax_7: i8;
            
            if rax_6 != 0
            {
                rax_7 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "word-regexpbreak-fileignore-case…", 0xb);
            }
            
            let mut var_1a0: i64;
            let mut var_b8: i128;
            let mut r13_1: *mut *mut [i8; 0xc];
            
            if rax_6 != 0 && rax_7 == 0
            {
                uu_ptx::read_char_filter_file::h30a1eb8166058cdf(&var_160, arg2);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h0abb8a3182b98a1e(&var_198, &var_160);
                let r15_1: *mut *mut [i8; 0xc] = var_198;
                let r13_2: i64 = var_188;
                
                if r15_1 != 0
                {
                    var_b8 = var_180;
                    
                    if *arg3.byte_offset(0x58) == 0
                    {
                        core::iter::traits::iterator::Iterator::collect::hd1811649b283122b(
                            &var_198);
                    }
                    else
                    {
                        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h5d2cbf9a529b523a(&var_160);
                        var_180 = var_148;
                        var_188 = var_150;
                        var_198 = var_160;
                    }
                    
                    var_160 = r15_1;
                    var_158 = var_190;
                    let var_150_2: i64 = r13_2;
                    var_148 = var_b8;
                    let var_138_1: i64 = var_170;
                    _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::h63ed1ea3c5d8bb53(&var_198, &var_160);
                    r13_1 = var_198;
                    var_1a0 = var_190;
                    var_e8_1 = var_188;
                    var_d8_1 = var_180;
                    goto 'label_52af68;
                }
                
                arg1[1] = var_190;
                arg1[2] = r13_2;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h4d7c816e60293aed(&var_118);
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h4d7c816e60293aed(&var_98);
            }
            else
            {
                r13_1 = nullptr;
                'label_52af68:
                let mut var_c8_1: i128;
                let mut rax_10: *mut *mut [i8; 0xc];
                let mut rcx_4: i8;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "word-regexpbreak-fileignore-case…", 0xb) == 0
                {
                    'label_52afd9:
                    
                    if r13_1 == 0
                    {
                        if *arg3.byte_offset(0x58) == 0
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he9e3a9b23988b07f(&var_160, "[^ \t\n]+", 7);
                        }
                        else
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he9e3a9b23988b07f(&var_160, "\w+parsing options failed!src/uu…", 3);
                        }
                        
                        rax_10 = var_160;
                        var_c8_1 = var_158;
                        rcx_4 = 0;
                    }
                    else
                    {
                        var_180 = var_d8_1;
                        var_188 = var_e8_1;
                        var_198 = r13_1;
                        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h274845dfeb82bebf(&var_160, &var_198);
                        core::iter::traits::iterator::Iterator::collect::hb57575b27e9774e8(
                            &var_198, &var_160);
                        regex::escape::h01066032b9834fd0(&var_b8, var_1a0, var_188);
                        let mut var_68: *mut i128 = &var_b8;
                        let var_60_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                        var_160 = &data_651748;
                        let var_158_1: i64 = 2;
                        *var_148[8] = 0;
                        let var_150_1: *mut *mut i128 = &var_68;
                        var_148 = 1;
                        let mut var_48: *mut *mut [i8; 0xc];
                        core::option::Option$LT$T$GT$::map_or_else::h4a28e95acdffaeae(&var_48, 
                            &var_160);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(
                            &var_b8);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(
                            &var_198);
                        rax_10 = var_48;
                        let var_40: i128;
                        var_c8_1 = var_40;
                        rcx_4 = 1;
                    }
                }
                else
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(&var_160, arg2, "word-regexpbreak-fileignore-case…", 0xb);
                    let rax_9: *mut c_void =
                        clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
                        "word-regexpbreak-fileignore-case…", 0xb, &var_160);
                    
                    if rax_9 == 0 || *rax_9.byte_offset(0x10) == 0
                    {
                        goto 'label_52afd9;
                    }
                    
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_160, rax_9);
                    rax_10 = var_160;
                    
                    if -(rax_10) == -0x8000000000000000
                    {
                        goto 'label_52afd9;
                    }
                    
                    var_c8_1 = var_158;
                    rcx_4 = 0;
                }
                
                let zmm0_3: i128 = var_98;
                *arg1.byte_offset(0x38) = zmm0_1;
                *arg1.byte_offset(0x28) = rdx;
                *arg1.byte_offset(0x18) = zmm0_3;
                *arg1.byte_offset(0x48) = var_118;
                *arg1.byte_offset(0x58) = rdx_1;
                *arg1.byte_offset(0x68) = var_100_1;
                *arg1 = rax_10;
                *arg1.byte_offset(8) = var_c8_1;
                arg1[0xf] = rax;
                *arg1.byte_offset(0x79) = rax_3;
                rax_10 = r13_1 == 0;
                rax_10 |= rcx_4;
                
                if rax_10 == 0
                {
                    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$char$GT$$GT$::h00e7b9e2310a38fd(r13_1, var_1a0);
                }
            }
        }
        else
        {
            uu_ptx::read_word_filter_file::h6d54f7ff60ca3df7(&var_160, arg2, 
                "ignore-fileonly-filereferenceswi…", 0xb);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h0abb8a3182b98a1e(&var_198, &var_160);
            rcx_1 = var_198;
            rax_4 = var_190;
            rdx_1 = var_188;
            
            if rcx_1 != 0
            {
                var_d8_1 = var_170;
                var_e8_1 = var_180;
                goto 'label_52aee8;
            }
            
            arg1[1] = rax_4;
            arg1[2] = rdx_1;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h4d7c816e60293aed(&var_98);
        }
    }
    else
    {
        uu_ptx::read_word_filter_file::h6d54f7ff60ca3df7(&var_160, arg2, 
            "only-filereferenceswidthProduce …", 9);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h0abb8a3182b98a1e(&var_198, &var_160);
        rcx = var_198;
        rax_1 = var_190;
        rdx = var_188;
        
        if rcx != 0
        {
            var_108_1 = var_170;
            var_118 = var_180;
            goto 'label_52ae05;
        }
        
        arg1[1] = rax_1;
        arg1[2] = rdx;
        *arg1 = -0x8000000000000000;
    }
    arg1
}
