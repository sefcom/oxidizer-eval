
  fn uu_ptx::WordFilter::new::h834513af9e48d5ee(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> *mut i64

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg2, "only-filereferenceswidth", 9);
    let mut var_188: *mut *mut [i8; 0xc];
    let mut var_148: *mut *mut [i8; 0xc];
    let mut var_140: i64;
    let mut var_138: i64;
    let mut var_130: i128;
    let var_120: i64;
    let mut var_108: i128;
    let mut var_f8_1: i64;
    let mut rax_1: i64;
    let mut rcx: *mut *mut [i8; 0xc];
    let mut rdx: i64;
    
    if rax == 0
    {
        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h46266b0c4833887c(&var_188);
        rcx = var_188;
        let var_180: i64;
        rax_1 = var_180;
        let mut var_178: i64;
        rdx = var_178;
        let mut var_170: i128;
        var_108 = var_170;
        let var_160: i64;
        var_f8_1 = var_160;
        'label_5b5b7e:
        let mut var_98: *mut *mut [i8; 0xc] = rcx;
        let var_90_1: i64 = rax_1;
        let zmm0_1: i128 = var_108;
        let var_70_1: i64 = var_f8_1;
        let rax_3: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
            arg2, "ignore-fileonly-filereferenceswi…", 0xb);
        let mut var_f8_2: i64;
        let mut rax_4: i64;
        let mut rcx_1: *mut *mut [i8; 0xc];
        let mut rdx_1: i64;
        
        if rax_3 == 0
        {
            _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h46266b0c4833887c(&var_188);
            rcx_1 = var_188;
            rax_4 = var_180;
            rdx_1 = var_178;
            var_108 = var_170;
            var_f8_2 = var_160;
            'label_5b5c5a:
            let mut var_68: *mut *mut [i8; 0xc] = rcx_1;
            let var_60_1: i64 = rax_4;
            let zmm0_2: i128 = var_108;
            let var_40_1: i64 = var_f8_2;
            let rax_6: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "break-fileignore-caseignore-file…", 0xa);
            let mut rax_7: i8;
            
            if rax_6 != 0
            {
                rax_7 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "word-regexpbreak-fileignore-case…", 0xb);
            }
            
            let mut var_c8: *mut *mut [i8; 0xc];
            let mut var_c0: i128;
            let mut var_b0: i128;
            
            if rax_6 != 0 && rax_7 == 0
            {
                uu_ptx::read_char_filter_file::hb5c562555cafe5d8(&var_188, arg2);
                _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd4e54632205870f7(&var_148, &var_188);
                let rdx_3: *mut *mut [i8; 0xc] = var_148;
                
                if rdx_3 != 0
                {
                    let var_e0_1: i64 = var_120;
                    let var_f0_1: i128 = var_130;
                    var_108 = rdx_3;
                    *var_108[8] = var_140;
                    let var_f8_3: i64 = var_138;
                    
                    if *arg3.byte_offset(0x58) == 0
                    {
                        _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h72643febd655a837(&var_148);
                    }
                    else
                    {
                        _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h78c5b7e8cc9844e2(&var_188);
                        var_130 = var_170;
                        var_138 = var_178;
                        var_148 = var_188;
                    }
                    
                    var_170 = var_f0_1;
                    var_178 = var_f8_3;
                    var_188 = var_108;
                    _$LT$hashbrown..set..HashSet$LT$T$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..Extend$LT$T$GT$$GT$::extend::h5ce7b6f887806e63(&var_148, &var_188);
                    var_c8 = var_148;
                    var_c0 = var_138;
                    var_b0 = var_130;
                    goto 'label_5b5ce3;
                }
                
                arg1[1] = var_140;
                arg1[2] = var_138;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&var_68);
                core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&var_98);
            }
            else
            {
                var_c8 = nullptr;
                'label_5b5ce3:
                let rax_8: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, "word-regexpbreak-fileignore-case…", 0xb);
                let mut rax_9: *mut c_void;
                
                if rax_8 != 0
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0320162aad36ecc4(&var_188, arg2, "word-regexpbreak-fileignore-case…", 0xb);
                    rax_9 = clap_builder::parser::error::MatchesError::unwrap::h3979b7ce1fd00743(
                        "word-regexpbreak-fileignore-case…", 0xb, &var_188);
                }
                
                let mut var_d8_1: i128;
                let mut rax_11: *mut *mut [i8; 0xc];
                let mut rcx_2: i8;
                
                if rax_8 == 0 || rax_9 == 0 || *rax_9.byte_offset(0x10) == 0
                {
                    let rax_10: *mut *mut [i8; 0xc] = var_c8;
                    
                    if rax_10 == 0
                    {
                        if *arg3.byte_offset(0x58) == 0
                        {
                            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&var_188, "[^ \t\n]+", 7);
                        }
                        else
                        {
                            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(&var_188, "\w+parsing options failed!src/uu…", 3);
                        }
                        
                        goto 'label_5b5f3b;
                    }
                    
                    let var_a0: i64;
                    let var_120_1: i64 = var_a0;
                    let mut var_130_1: i128 = var_b0;
                    var_140 = var_c0;
                    var_148 = rax_10;
                    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h288b3fee388f1b9b(&var_188, &var_148);
                    var_148 = var_188;
                    var_138 = var_178;
                    var_130_1 = var_170;
                    let var_158: i128;
                    let var_118_1: i128 = var_158;
                    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$alloc..string..String$GT$$GT$::from_iter::hbea44346f7b7ebb1(&var_108, &var_148);
                    let mut var_38: *mut i128 = &var_108;
                    let var_30_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    var_188 = &data_6edb98;
                    let var_180_1: i64 = 2;
                    *var_170[8] = 0;
                    let var_178_1: *mut *mut i128 = &var_38;
                    var_170 = 1;
                    core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(&var_148, 
                        &var_188);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(
                        &var_108);
                    rax_11 = var_148;
                    var_d8_1 = var_140;
                    rcx_2 = 0;
                }
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_188, rax_9);
                    'label_5b5f3b:
                    rax_11 = var_188;
                    var_d8_1 = var_180;
                    rcx_2 = 1;
                }
                
                let zmm0_4: i128 = var_98;
                *arg1.byte_offset(0x38) = zmm0_1;
                *arg1.byte_offset(0x28) = rdx;
                *arg1.byte_offset(0x18) = zmm0_4;
                *arg1.byte_offset(0x48) = var_68;
                *arg1.byte_offset(0x58) = rdx_1;
                *arg1.byte_offset(0x68) = zmm0_2;
                *arg1 = rax_11;
                *arg1.byte_offset(8) = var_d8_1;
                arg1[0xf] = rax;
                *arg1.byte_offset(0x79) = rax_3;
                
                if rcx_2 != 0
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..collections..hash..set..HashSet$LT$char$GT$$GT$$GT$::h37dcaeaff8167ce4(&var_c8);
                }
            }
        }
        else
        {
            uu_ptx::read_word_filter_file::h2a4d49b02fae1e68(&var_188, arg2, 
                "ignore-fileonly-filereferenceswi…", 0xb);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6f2e9e1358d3e397(&var_148, &var_188);
            rcx_1 = var_148;
            rax_4 = var_140;
            rdx_1 = var_138;
            
            if rcx_1 != 0
            {
                var_f8_2 = var_120;
                var_108 = var_130;
                goto 'label_5b5c5a;
            }
            
            arg1[1] = rax_4;
            arg1[2] = rdx_1;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::h0fe902575fe225c7(&var_98);
        }
    }
    else
    {
        uu_ptx::read_word_filter_file::h2a4d49b02fae1e68(&var_188, arg2, 
            "only-filereferenceswidth", 9);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6f2e9e1358d3e397(&var_148, &var_188);
        rcx = var_148;
        rax_1 = var_140;
        rdx = var_138;
        
        if rcx != 0
        {
            var_f8_1 = var_120;
            var_108 = var_130;
            goto 'label_5b5b7e;
        }
        
        arg1[1] = rax_1;
        arg1[2] = rdx;
        *arg1 = -0x8000000000000000;
    }
    arg1
}
