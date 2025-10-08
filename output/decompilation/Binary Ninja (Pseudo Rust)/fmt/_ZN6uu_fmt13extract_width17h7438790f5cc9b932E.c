
  fn uu_fmt::extract_width::h7438790f5cc9b932(arg1: *mut i64, arg2: *mut c_void) -> u64

{
    let mut var_a8: i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h44c4a3f5845ce8d4(&var_a8, 
        arg2, "width(uutils coreutils) 0.0.30Re…", 5);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h80b30bf7e42be37c(
        "width(uutils coreutils) 0.0.30Re…", 5, &var_a8);
    let mut result: u64;
    let result_1: u64;
    
    if rax == 0
    {
        let mut rax_1: i8;
        let mut rdx_2: i64;
        rax_1 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h533e2cba337d4042(
            arg2, "filesa negative number should be…", 5);
        let mut r13_1: i64 = 8;
        
        if (rax_1 & rdx_2 == 1) == 0
        {
            result = 0;
        }
        else
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h44c4a3f5845ce8d4(
                &var_a8, arg2, "filesa negative number should be…", 5);
            let rax_2: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h80b30bf7e42be37c(
                "filesa negative number should be…", 5, &var_a8);
            
            if rax_2 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            var_a8 = 0;
            let mut rax_4: *mut i8;
            let mut rdx_5: i64;
            rax_4 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_a8), 
                *rax_2.byte_offset(8), *rax_2.byte_offset(0x10));
            
            if rax_4 == 0
            {
                result = 0;
            }
            else
            {
                core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_a8, 
                    rax_4, rdx_5);
                result = result_1;
                arg1[1] = var_a8 ^ 1;
                r13_1 = 0x10;
            }
        }
        
        *arg1.byte_offset(r13_1) = result;
        *arg1 = 0;
    }
    else
    {
        let r14_1: *mut i8 = *rax.byte_offset(8);
        let r15_1: i64 = *rax.byte_offset(0x10);
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_a8, r14_1, 
            r15_1);
        
        if var_a8 == 0
        {
            result = result_1;
            arg1[1] = 1;
            arg1[2] = result;
            *arg1 = 0;
        }
        else
        {
            let mut var_68: i64 = 0;
            let var_60_1: *mut i8 = r14_1;
            let var_58_1: i64 = r15_1;
            let var_50_1: i8 = 1;
            let mut var_78: *mut i64 = &var_68;
            let var_70_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_a8 = &data_4f0928;
            let var_a0: i64 = 1;
            let var_88_1: i64 = 0;
            let var_98_1: *mut *mut i64 = &var_78;
            let var_90_1: i64 = 1;
            let mut var_48: ();
            core::option::Option$LT$T$GT$::map_or_else::h974ccb46cc19ceac(&var_48, &var_a8);
            let var_30_1: i32 = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h2c9a23957ea0966a(&var_48);
            arg1[1] = result;
            arg1[2] = &data_4f0720;
            *arg1 = 1;
        }
    }
    result
}
