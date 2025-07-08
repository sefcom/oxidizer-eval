
  fn uu_fmt::extract_width::h607b918514420837(arg1: *mut i64, arg2: *mut c_void) -> *mut i128

{
    let mut var_b8: *mut *mut [i8; 0xd1];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(&var_b8, 
        arg2, "widthinvalid width: src/uu/fmt/s…", 5);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b(
        "widthinvalid width: src/uu/fmt/s…", 5, &var_b8);
    let mut result: *mut i128;
    
    if rax == 0
    {
        let mut rdx_3: i64;
        result =
            clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(
            arg2, "fileswidthinvalid width: src/uu/…", 5);
        let mut rcx_1: i64 = 0;
        let mut r13_1: i64 = 8;
        
        if result == 1 && rdx_3 == 1
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(
                &var_b8, arg2, "fileswidthinvalid width: src/uu/…", 5);
            let rax_1: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b(
                "fileswidthinvalid width: src/uu/…", 5, &var_b8);
            
            if rax_1 == 0
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            var_b8 = 0;
            let mut rdx_6: i64;
            result = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hdb721c8cd5e22968(core::char::methods::encode_utf8_raw::h4a752b0d300141c4(&var_b8), 
                *rax_1.byte_offset(8), *rax_1.byte_offset(0x10));
            
            if result == 0
            {
                rcx_1 = 0;
            }
            else
            {
                core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_b8, result, rdx_6);
                let var_b0: i64;
                rcx_1 = var_b0;
                result = var_b8 ^ 1;
                arg1[1] = result;
                r13_1 = 0x10;
            }
        }
        
        *arg1.byte_offset(r13_1) = rcx_1;
        *arg1 = 0;
    }
    else
    {
        let r14_1: *mut i8 = *rax.byte_offset(8);
        let r15_1: i64 = *rax.byte_offset(0x10);
        let mut var_88: i8;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_88, r14_1, r15_1);
        let mut rcx: *mut *mut c_void;
        let mut rdx_2: i64;
        
        if var_88 == 0
        {
            let var_80: *mut *mut c_void;
            rcx = var_80;
            result = 1;
            rdx_2 = 0;
        }
        else
        {
            let mut var_68: i64 = 0;
            let var_60_1: *mut i8 = r14_1;
            let var_58_1: i64 = r15_1;
            let var_50_1: i8 = 1;
            let mut var_78: *mut i64 = &var_68;
            let var_70_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_b8 = &data_526520;
            let var_b0_1: i64 = 1;
            let var_98_1: i64 = 0;
            let var_a8_1: *mut *mut i64 = &var_78;
            let var_a0_1: i64 = 1;
            let mut var_48: ();
            core::option::Option$LT$T$GT$::map_or_else::h57a000129381aa23(&var_48, &var_b8);
            let var_30_1: i32 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_48);
            rdx_2 = 1;
            rcx = &data_526400;
        }
        
        arg1[1] = result;
        arg1[2] = rcx;
        *arg1 = rdx_2;
    }
    
    result
}
