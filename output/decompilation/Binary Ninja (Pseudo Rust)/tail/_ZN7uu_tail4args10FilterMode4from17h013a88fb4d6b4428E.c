
  fn uu_tail::args::FilterMode::from::h013a88fb4d6b4428(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "zero-terminatedcannot convert fl…", 0xf);
    let mut var_d8: *mut *mut [i8; 0x98];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(&var_d8, 
        arg2, "bytesinvalid number of bytes: ''…", 5);
    let rax_1: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b(
        "bytesinvalid number of bytes: ''…", 5, &var_d8);
    let mut result: i64;
    let mut result_2: i64;
    let mut rdx_2: i64;
    let mut var_a8: i32;
    let result_1: i64;
    let var_98: i128;
    let mut var_88: *mut i128;
    let mut var_78: i128;
    let mut rax_4: *mut i128;
    
    if rax_1 == 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h0a7145d185c82391(
            &var_d8, arg2, "linesinvalid number of lines: ze…", 5);
        let rax_2: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hd5b58983d4d3848b(
            "linesinvalid number of lines: ze…", 5, &var_d8);
        
        if rax_2 == 0
        {
            result = 0;
            result_2 = 0xa;
            rdx_2 = 0xa;
            
            if rax != 0
            {
                rdx_2 = 0;
            }
        }
        else
        {
            uu_tail::args::parse_num::hf0843dd0db285fb1(&var_a8, *rax_2.byte_offset(8), 
                *rax_2.byte_offset(0x10));
            
            if var_a8 != 3
            {
                let var_68_2: i128 = var_98;
                var_78 = var_a8;
                var_88 = &var_78;
                let var_80_2: fn(arg1: i64, arg2: *mut c_void) -> i64 = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::h1bebe12c07ded6a0;
                var_d8 = &data_5bb380;
                let var_d0_2: i64 = 1;
                let var_b8_2: i64 = 0;
                let var_c8_3: *mut *mut i128 = &var_88;
                let mut var_c0_2: i64 = 1;
                let mut var_40: i128;
                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_40, &var_d8);
                var_c0_2 = 1;
                var_d8 = var_40;
                let var_30: i64;
                let var_c8_4: i64 = var_30;
                rax_4 = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_d8);
                goto 'label_4f8c6d;
            }
            
            result = result_1;
            result_2 = var_98;
            rdx_2 = 0xa;
            
            if rax != 0
            {
                rdx_2 = 0;
            }
        }
    }
    else
    {
        uu_tail::args::parse_num::hf0843dd0db285fb1(&var_a8, *rax_1.byte_offset(8), 
            *rax_1.byte_offset(0x10));
        
        if var_a8 != 3
        {
            let var_68_1: i128 = var_98;
            var_78 = var_a8;
            var_88 = &var_78;
            let var_80_1: fn(arg1: i64, arg2: *mut c_void) -> i64 = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::h1bebe12c07ded6a0;
            var_d8 = &data_5bb360;
            let var_d0_1: i64 = 2;
            let var_b8_1: i64 = 0;
            let var_c8_1: *mut *mut i128 = &var_88;
            let mut var_c0_1: i64 = 1;
            let mut var_58: i128;
            core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_58, &var_d8);
            var_c0_1 = 1;
            var_d8 = var_58;
            let var_48: i64;
            let var_c8_2: i64 = var_48;
            rax_4 = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_d8);
            'label_4f8c6d:
            arg1[1] = rax_4;
            arg1[2] = &data_5bb3c8;
            *arg1 = 5;
            return core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::h26b9fa8eae44921d(&var_78);
        }
        
        result_2 = result_1;
        rdx_2 = var_98;
        result = 4;
    }
    *arg1 = result;
    arg1[1] = result_2;
    arg1[2] = rdx_2;
    result
}
