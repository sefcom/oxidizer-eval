
  fn uu_uniq::opt_parsed::hf72dfa4667cb2ab6(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void) -> *mut i64

{
    let mut var_c0: i64 = arg2;
    let var_b8: i64 = arg3;
    let mut var_70: *mut *mut [i8; 0xca];
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h4a2509cd518fbd9f(&var_70, 
        arg4, arg2, arg3);
    let rax: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h0de382a77e5c484b(arg2, arg3, &var_70);
    
    if rax == 0
    {
        *arg1 = {0};
    }
    else
    {
        let r14_1: *mut i8 = *rax.byte_offset(8);
        let r15_1: i64 = *rax.byte_offset(0x10);
        let mut var_d0: i8;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_d0, r14_1, 
            r15_1);
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
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9c987e12ca4ea4cf;
            let var_a0_1: *mut i64 = &var_90;
            let var_98_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_70 = &data_4f5850;
            let var_68_1: i64 = 2;
            let var_50_1: i64 = 0;
            let var_60_1: *mut *mut i64 = &var_b0;
            let var_58_1: i64 = 2;
            let mut var_40: ();
            core::option::Option$LT$T$GT$::map_or_else::h4bd594a823200ed2(&var_40, &var_70);
            let var_28_1: i32 = 1;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h41be10ceb8cdc0b4(&var_40);
            arg1[2] = &data_4f5890;
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
