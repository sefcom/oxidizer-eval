
  fn uu_tail::args::FilterMode::from::hb59232841d18f0f6(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "zero-terminatedbyteslinescannot …", 0xf);
    let mut var_d8: *mut *mut c_void;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7b3d077d0028ebf2(&var_d8, 
        arg2, "byteslinescannot convert float s…", 5);
    let rax_1: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf1a769ab7d4b2739(
        "byteslinescannot convert float s…", 5, &var_d8);
    let mut result: i64;
    let mut result_2: i64;
    let mut rdx_2: i64;
    let mut var_a8: i32;
    let result_1: i64;
    let var_98: i128;
    let mut var_88: *mut i128;
    let mut var_78: i128;
    let mut rax_4: u64;
    
    if rax_1 == 0
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7b3d077d0028ebf2(
            &var_d8, arg2, "linescannot convert float second…", 5);
        let rax_2: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::hf1a769ab7d4b2739(
            "linescannot convert float second…", 5, &var_d8);
        
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
            uu_tail::args::parse_num::h777295376e2c5b82(&var_a8, *rax_2.byte_offset(8), 
                *rax_2.byte_offset(0x10));
            
            if var_a8 != 4
            {
                let var_68_2: i128 = var_98;
                var_78 = var_a8;
                var_88 = &var_78;
                let var_80_2: fn(arg1: i64, arg2: *mut i64) -> i64 = _$LT$uucore..features..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::he618d31d336be9c1;
                var_d8 = &data_572ee8;
                let var_d0_2: i64 = 1;
                let var_b8_2: i64 = 0;
                let var_c8_3: *mut *mut i128 = &var_88;
                let mut var_c0_2: i64 = 1;
                let mut var_40: i128;
                core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_40, &var_d8);
                var_c0_2 = 1;
                var_d8 = var_40;
                let var_30: i64;
                let var_c8_4: i64 = var_30;
                rax_4 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_d8);
                goto 'label_49ee5d;
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
        uu_tail::args::parse_num::h777295376e2c5b82(&var_a8, *rax_1.byte_offset(8), 
            *rax_1.byte_offset(0x10));
        
        if var_a8 != 4
        {
            let var_68_1: i128 = var_98;
            var_78 = var_a8;
            var_88 = &var_78;
            let var_80_1: fn(arg1: i64, arg2: *mut i64) -> i64 = _$LT$uucore..features..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::he618d31d336be9c1;
            var_d8 = &data_572ec8;
            let var_d0_1: i64 = 2;
            let var_b8_1: i64 = 0;
            let var_c8_1: *mut *mut i128 = &var_88;
            let mut var_c0_1: i64 = 1;
            let mut var_58: i128;
            core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_58, &var_d8);
            var_c0_1 = 1;
            var_d8 = var_58;
            let var_48: i64;
            let var_c8_2: i64 = var_48;
            rax_4 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_d8);
            'label_49ee5d:
            arg1[1] = rax_4;
            arg1[2] = &data_572f18;
            *arg1 = 5;
            return core::ptr::drop_in_place$LT$uucore..features..parser..parse_size..ParseSizeError$GT$::hd5c1a77d921c35e8(&var_78);
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
