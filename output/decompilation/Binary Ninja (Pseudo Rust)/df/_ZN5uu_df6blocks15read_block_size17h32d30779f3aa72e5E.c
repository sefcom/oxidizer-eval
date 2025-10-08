
  fn uu_df::blocks::read_block_size::h32d30779f3aa72e5(arg1: *mut i64, arg2: *mut c_void) -> *mut i128

{
    let mut result: *mut i128;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, 
        "blocksizehuman-readable-binaryhu…", 9) == 0
    {
        let rax_3: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "portabilityprint-typeexclude-typ…", 0xb);
        let mut rdx_2: i64;
        
        if rax_3 == 0
        {
            result = uu_df::blocks::block_size_from_env::hdb573be3e983bfb6();
        }
        
        if rax_3 != 0 || (result & 1) == 0
        {
            result = _$LT$uu_df..blocks..BlockSize$u20$as$u20$core..default..Default$GT$::default::hd82b76b8049fd167();
            arg1[1] = result;
            *arg1 = 4;
        }
        else
        {
            arg1[1] = rdx_2;
            *arg1 = 4;
        }
    }
    else
    {
        let mut var_78: *mut c_void;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h117add036a1ff1af(
            &var_78, arg2);
        let rax_1: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h8bc7816bfd18267b(&var_78);
        
        if rax_1 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_78, 
            *rax_1.byte_offset(8), *rax_1.byte_offset(0x10));
        let rcx_1: *mut c_void = var_78;
        let result_1: *mut i128;
        result = result_1;
        let mut var_68: i128;
        
        if rcx_1 != 4
        {
            *arg1.byte_offset(0x10) = var_68;
            *arg1 = rcx_1;
            arg1[1] = result;
        }
        else if result != 0
        {
            arg1[1] = result;
            *arg1 = 4;
        }
        else
        {
            let rax_2: i64 = *rax_1.byte_offset(8);
            let rcx_2: i64 = *rax_1.byte_offset(0x10);
            let mut var_38: i64 = 0;
            let var_30_1: i64 = rax_2;
            let var_28_1: i64 = rcx_2;
            let var_20_1: i8 = 1;
            let mut var_48: *mut i64 = &var_38;
            let var_40_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_78 = &data_419280;
            let var_70: i64 = 1;
            let var_58_1: i64 = 0;
            var_68 = &var_48;
            *var_68[8] = 1;
            result =
                core::option::Option$LT$T$GT$::map_or_else::h7e34be96cbbb4028(&arg1[1], &var_78);
            *arg1 = 1;
        }
    }
    
    result
}
