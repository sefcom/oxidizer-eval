
  fn uu_df::blocks::read_block_size::h03278a4ead33fd1d(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, 
        "blocksizetotalhuman-readable-bin…", 9) == 0
    {
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "portabilityprint-typeexclude-typ…", 0xb) == 0
        {
            let mut rax_4: i64;
            let mut rdx_3: i64;
            rax_4 = uu_df::blocks::block_size_from_env::h0875cabe2802aae1();
            
            if rax_4 != 1
            {
                rdx_3 = _$LT$uu_df..blocks..BlockSize$u20$as$u20$core..default..Default$GT$::default::hcd56ba661cd7b884();
            }
            
            arg1[1] = rdx_3;
            *arg1 = 3;
        }
        else
        {
            arg1[1] = _$LT$uu_df..blocks..BlockSize$u20$as$u20$core..default..Default$GT$::default::hcd56ba661cd7b884();
            *arg1 = 3;
        }
    }
    else
    {
        let mut var_80: *mut i128;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::had32a7dafbe4cc99(
            &var_80, arg2, "blocksizetotalhuman-readable-bin…", 9);
        let rax_1: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h16d97371a8658236(
            "blocksizetotalhuman-readable-bin…", 9, &var_80);
        
        if rax_1 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        let r14_1: *mut c_void = *rax_1.byte_offset(8);
        let r15_1: u64 = *rax_1.byte_offset(0x10);
        uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_80, r14_1, r15_1);
        let rcx_1: *mut i128 = var_80;
        let var_78: i64;
        let mut var_70: i128;
        
        if rcx_1 != 3
        {
            *arg1.byte_offset(0x10) = var_70;
            *arg1 = rcx_1;
            arg1[1] = var_78;
        }
        else if var_78 != 0
        {
            arg1[1] = var_78;
            *arg1 = 3;
        }
        else
        {
            let mut var_40: i64 = 0;
            let var_38_1: *mut c_void = r14_1;
            let var_30_1: u64 = r15_1;
            let var_28_1: i8 = 1;
            let mut var_50: *mut i64 = &var_40;
            let var_48_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_80 = &data_40ba30;
            let var_78_1: i64 = 1;
            let var_60_1: i64 = 0;
            var_70 = &var_50;
            *var_70[8] = 1;
            core::option::Option$LT$T$GT$::map_or_else::h87f8290896e212c8(&arg1[1], &var_80);
            *arg1 = 1;
        }
    }
    
    arg1
}
