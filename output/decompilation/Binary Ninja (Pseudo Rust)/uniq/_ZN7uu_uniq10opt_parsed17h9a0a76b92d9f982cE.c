
  fn uu_uniq::opt_parsed::h9a0a76b92d9f982c(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void) -> *mut i64

{
    let mut var_c0: i64 = arg2;
    let var_b8: i64 = arg3;
    let mut var_70: *mut *mut [i8; 0xae];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7d7d706f95974719(&var_70, 
        arg4, arg2, arg3);
    let rax: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h99da2efbc6cd79ff(arg2, arg3, &var_70);
    
    if rax == 0
    {
        *arg1 = {0};
    }
    else
    {
        let r14_1: *mut i8 = *rax.byte_offset(8);
        let r15_1: i64 = *rax.byte_offset(0x10);
        let mut var_d0: i8;
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_d0, r14_1, r15_1);
        let mut rax_3: i64;
        let var_cf: i8;
        
        if var_d0 == 0
        {
            arg1[1] = 1;
            let var_c8: i64;
            arg1[2] = var_c8;
            rax_3 = 0;
        }
        else if var_cf != 2
        {
            let mut var_90: i64 = 0;
            let var_88_1: *mut i8 = r14_1;
            let var_80_1: i64 = r15_1;
            let var_78_1: i8 = 0;
            let mut var_b0: *mut i64 = &var_c0;
            let var_a8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0395e47111c9b11e;
            let var_a0_1: *mut i64 = &var_90;
            let var_98_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_70 = &data_530468;
            let var_68_1: i64 = 2;
            let var_50_1: i64 = 0;
            let var_60_1: *mut *mut i64 = &var_b0;
            let var_58_1: i64 = 2;
            let mut var_40: ();
            core::option::Option$LT$T$GT$::map_or_else::h33f5209e8aeeaf30(&var_40, &var_70);
            let var_28_1: i32 = 1;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h6692c4bb39238cc6(&var_40);
            arg1[2] = &data_5304c0;
            rax_3 = 1;
        }
        else
        {
            arg1[1] = 1;
            arg1[2] = -1;
            rax_3 = 0;
        }
        *arg1 = rax_3;
    }
    
    arg1
}
