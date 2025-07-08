
  fn uu_du::build_exclude_patterns::h0244be58956798cb(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_f8: ();
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h953ea969162f50f8(
        &var_f8, arg2, "exclude-fromexcludeadding  to th…", 0xc);
    let mut rsi: *const i8 = "exclude-fromexcludeadding  to th…";
    let mut var_2e8: *mut *mut [i8; 0xba];
    clap_builder::parser::error::MatchesError::unwrap::hb780f1080a7373fe(&var_2e8, 
        "exclude-fromexcludeadding  to th…", 0xc, &var_f8);
    let mut rax: *mut *mut [i8; 0xba] = var_2e8;
    let mut var_2e0: *mut i8;
    let mut var_2d8: u128;
    let mut var_2c8: i128;
    let var_2b8: *mut i8;
    let var_2b0: i64;
    let mut rcx_1: *const i8;
    let mut rdx: i64;
    let mut zmm0: i128;
    let mut zmm1: u128;
    
    if rax == 0
    {
        zmm0 = {0};
        zmm1 = "a Display implementation returne…";
        rcx_1 = "a Display implementation returne…";
        rax = core::ops::function::FnOnce::call_once::h72c1b05cc1f9fa6c;
        rdx = 0;
    }
    else
    {
        rcx_1 = var_2e0;
        zmm1 = var_2d8;
        zmm0 = var_2c8;
        rsi = var_2b8;
        rdx = var_2b0;
    }
    
    let mut var_178: *mut *mut [i8; 0xba] = rax;
    let var_170: *const i8 = rcx_1;
    let var_168: u128 = zmm1;
    let var_158: i128 = zmm0;
    let var_148: *const i8 = rsi;
    let var_140: i64 = rdx;
    let var_138: i64 = 0;
    let var_118: i64 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h953ea969162f50f8(
        &var_f8, arg2, "excludeadding  to the exclude li…", 7);
    let mut rsi_2: *mut i8 = "excludeadding  to the exclude li…";
    clap_builder::parser::error::MatchesError::unwrap::hb780f1080a7373fe(&var_2e8, 
        "excludeadding  to the exclude li…", 7, &var_f8);
    let mut rax_1: *mut *mut [i8; 0xba] = var_2e8;
    let mut rcx_3: *const i8;
    let mut rdx_1: i64;
    let mut zmm0_1: i128;
    let mut zmm1_1: u128;
    
    if rax_1 == 0
    {
        zmm0_1 = {0};
        zmm1_1 = "a Display implementation returne…";
        rcx_3 = "a Display implementation returne…";
        rax_1 = core::ops::function::FnOnce::call_once::h72c1b05cc1f9fa6c;
        rdx_1 = 0;
    }
    else
    {
        rcx_3 = var_2e0;
        zmm1_1 = var_2d8;
        zmm0_1 = var_2c8;
        rsi_2 = var_2b8;
        rdx_1 = var_2b0;
    }
    
    let mut var_1f8: *mut *mut [i8; 0xba] = rax_1;
    let var_1f0: *const i8 = rcx_3;
    let var_1e8: u128 = zmm1_1;
    let var_1d8: i128 = zmm0_1;
    let var_1c8: *mut i8 = rsi_2;
    let var_1c0: i64 = rdx_1;
    let mut var_2a0: i64 = 0;
    let var_298: i64 = 8;
    let var_290: i64 = 0;
    core::iter::traits::iterator::Iterator::chain::h824cd8d0da99cd57(&var_f8, &var_1f8, &var_178);
    
    loop
    {
        let mut var_70: ();
        core::iter::adapters::chain::and_then_or_clear::h7b1f33d6297e46cc(&var_2e8, &var_70);
        let mut var_230: i64;
        core::option::Option$LT$T$GT$::or_else::h579344e00d3a2941(&var_230, &var_2e8, &var_f8);
        
        if var_230 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..iter..adapters..chain..Chain$LT$core..iter..adapters..cloned..Cloned$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$GT$$C$core..iter..adapters..flatten..FlatMap$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$C$uu_du..file_as_vec$LT$$RF$alloc..string..String$GT$$GT$$GT$$GT$::h744c40be5be13de6(&var_f8);
            arg1[2] = var_290;
            *arg1 = var_2a0;
            return arg1;
        }
        
        let mut var_288: i128 = var_230;
        let mut var_268: *mut *mut i128;
        let mut var_260: fn(arg1: *mut i64, arg2: *mut c_void) -> i64;
        let mut var_248: *mut i128;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "verbose: \n\ttotal\t: read error…", 7) != 0
        {
            var_248 = &var_288;
            var_268 = &var_248;
            var_260 = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h8051b657d9275cd0;
            var_2e8 = &data_584500;
            var_2e0 = 2;
            var_2c8 = 0;
            var_2d8 = &var_268;
            *var_2d8[8] = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_2e8);
        }
        
        let var_220: i64;
        uucore::parser::parse_glob::from_str::h2653254823aa606f(&var_2e8, *var_288[8], var_220);
        
        if var_2e8 == -0x8000000000000000
        {
            let var_208_1: i64 = *var_2d8[8];
            let mut var_218: i128 = var_2e0;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h9c7f10ebc418a7a6(&var_248, 
                &var_218);
            let var_238: i64;
            let var_250_1: i64 = var_238;
            var_260 = var_248;
            var_268 = 4;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h19aedf1648b3dc3b(&var_268);
            arg1[2] = &data_584558;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_288);
            core::ptr::drop_in_place$LT$core..iter..adapters..chain..Chain$LT$core..iter..adapters..cloned..Cloned$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$GT$$C$core..iter..adapters..flatten..FlatMap$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$C$uu_du..file_as_vec$LT$$RF$alloc..string..String$GT$$GT$$GT$$GT$::h744c40be5be13de6(&var_f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::h2295170400e3c987(
                &var_2a0);
            return arg1;
        }
        
        let var_188_1: *mut i8 = var_2b8;
        let var_198_1: i128 = var_2c8;
        let var_1a8_1: u128 = var_2d8;
        let mut var_1b8: i128 = var_2e8;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hac7bdcf882db601a(&var_2a0, &var_1b8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_288);
    }
}
