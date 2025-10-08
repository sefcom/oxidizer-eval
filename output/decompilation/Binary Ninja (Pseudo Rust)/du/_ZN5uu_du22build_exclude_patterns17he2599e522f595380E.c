
  fn uu_du::build_exclude_patterns::he2599e522f595380(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_f8: ();
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hffc82f800b8d5ff7(
        &var_f8, arg2, "exclude-fromexcludeverbose: \n\t…", 0xc);
    let mut rsi: *const i8 = "exclude-fromexcludeverbose: \n\t…";
    let mut var_208: fn() -> !;
    clap_builder::parser::error::MatchesError::unwrap::hd06a4304e8cd1bc3(&var_208, 
        "exclude-fromexcludeverbose: \n\t…", 0xc, &var_f8);
    let mut rax: fn() -> ! = var_208;
    let mut rcx_1: *const i8;
    let mut rdx: i64;
    let mut zmm0: i128;
    let mut zmm1: u128;
    
    if rax == 0
    {
        zmm0 = {0};
        zmm1 = "/home/34r7hm4n/.cargo/registry/s…";
        rax = core::ops::function::FnOnce::call_once::h88fd7425ccd33063;
        rcx_1 = "/home/34r7hm4n/.cargo/registry/s…";
        rdx = 0;
    }
    else
    {
        let var_200: *mut i8;
        rcx_1 = var_200;
        let var_1f8: u128;
        zmm1 = var_1f8;
        let var_1e8: i128;
        zmm0 = var_1e8;
        let var_1d8: *mut i8;
        rsi = var_1d8;
        let var_1d0: i64;
        rdx = var_1d0;
    }
    
    var_208 = rax;
    let var_200_1: *const i8 = rcx_1;
    let var_1f8_1: u128 = zmm1;
    let var_1e8_1: i128 = zmm0;
    let var_1d8_1: *const i8 = rsi;
    let var_1d0_1: i64 = rdx;
    let var_1c8: i64 = 0;
    let var_1a8: i64 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hffc82f800b8d5ff7(
        &var_f8, arg2, "excludeverbose: \n\ttotal\t: rea…", 7);
    let mut rsi_2: *const i8 = "excludeverbose: \n\ttotal\t: rea…";
    let mut var_278: *mut *mut c_void;
    clap_builder::parser::error::MatchesError::unwrap::hd06a4304e8cd1bc3(&var_278, 
        "excludeverbose: \n\ttotal\t: rea…", 7, &var_f8);
    let mut rax_1: *mut *mut c_void = var_278;
    let mut var_270: *mut i8;
    let mut var_268: u128;
    let mut var_258: i128;
    let mut rcx_3: *const i8;
    let mut rdx_1: i64;
    let mut zmm0_1: i128;
    let mut zmm1_1: u128;
    
    if rax_1 == 0
    {
        zmm0_1 = {0};
        zmm1_1 = "/home/34r7hm4n/.cargo/registry/s…";
        rcx_3 = "/home/34r7hm4n/.cargo/registry/s…";
        rax_1 = core::ops::function::FnOnce::call_once::h88fd7425ccd33063;
        rdx_1 = 0;
    }
    else
    {
        rcx_3 = var_270;
        zmm1_1 = var_268;
        zmm0_1 = var_258;
        let var_248: *mut i8;
        rsi_2 = var_248;
        let var_240: i64;
        rdx_1 = var_240;
    }
    
    let mut var_170: *mut *mut c_void = rax_1;
    let var_168: *const i8 = rcx_3;
    let var_160: u128 = zmm1_1;
    let var_150: i128 = zmm0_1;
    let var_140: *const i8 = rsi_2;
    let var_138: i64 = rdx_1;
    let mut var_2b0: i64 = 0;
    let var_2a8: i64 = 8;
    let var_2a0: i64 = 0;
    core::iter::traits::iterator::Iterator::chain::hc2d8f9bed774c849(&var_f8, &var_170, &var_208);
    
    loop
    {
        let mut var_70: ();
        core::iter::adapters::chain::and_then_or_clear::ha9bcf56eba07ca86(&var_278, &var_70);
        let mut var_220: i64;
        core::option::Option$LT$T$GT$::or_else::hc21355b2981d1bf1(&var_220, &var_278, &var_f8);
        
        if var_220 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..iter..adapters..chain..Chain$LT$core..iter..adapters..cloned..Cloned$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$GT$$C$core..iter..adapters..flatten..FlatMap$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$C$uu_du..file_as_vec$LT$$RF$alloc..string..String$GT$$GT$$GT$$GT$::h72377d95b1f15e7e(&var_f8);
            arg1[2] = var_2a0;
            *arg1 = var_2b0;
            return arg1;
        }
        
        let mut var_298: i128 = var_220;
        let mut var_238: *mut i128;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "verbose: \n\ttotal\t: read error…", 7) != 0
        {
            var_238 = &var_298;
            let var_230_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
                _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h71b66d641ee8f111;
            var_278 = &data_545d38;
            var_270 = 2;
            var_258 = 0;
            var_268 = &var_238;
            *var_268[8] = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_278);
        }
        
        let var_210: i64;
        let mut var_130: i64;
        uucore::features::parser::parse_glob::from_str::hec6dc6cec3d01504(&var_130, *var_298[8], 
            var_210);
        
        if var_130 == -0x8000000000000000
        {
            let var_118: i64;
            let var_178_1: i64 = var_118;
            let var_128: i128;
            let mut var_188: i128 = var_128;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h68e4476d86227a73(
                &var_238, &var_188);
            let var_228: i64;
            *var_268[8] = var_228;
            var_270 = var_238;
            var_278 = 4;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h8a707cc2bcbdfcb0(&var_278);
            arg1[2] = &data_545d90;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(&var_298);
            core::ptr::drop_in_place$LT$core..iter..adapters..chain..Chain$LT$core..iter..adapters..cloned..Cloned$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$GT$$C$core..iter..adapters..flatten..FlatMap$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$alloc..string..String$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$C$uu_du..file_as_vec$LT$$RF$alloc..string..String$GT$$GT$$GT$$GT$::h72377d95b1f15e7e(&var_f8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glob..Pattern$GT$$GT$::h3aac2b22f80fd30d(
                &var_2b0);
            return arg1;
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::push::he69de0360f501721(&var_2b0, &var_130);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(&var_298);
    }
}
