
  fn uu_wc::Inputs::new::hed823cacb11525c8(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_a8: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9b92d7f6293c04fa(
        &var_a8, arg2);
    let mut var_58: i64;
    clap_builder::parser::error::MatchesError::unwrap::h4306498e298fd4ff(&var_58, &var_a8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he062f5150264a99d(&var_a8, 
        arg2);
    let rax: *mut c_void =
        clap_builder::parser::error::MatchesError::unwrap::h8ef5750e6559027d(&var_a8);
    let mut var_c8: i128;
    
    if var_58 == 0
    {
        if rax == 0
        {
            *arg1 = 0;
        }
        else
        {
            *rax.byte_offset(0x10);
            _$LT$uu_wc..Input$u20$as$u20$core..convert..From$LT$$RF$T$GT$$GT$::from::h1ca2dfb37c66956c(&var_c8, *rax.byte_offset(8));
            uu_wc::Input::try_as_files0::h87a8bdb6df7fa337(&var_a8, &var_c8);
            let rax_3: i64 = var_a8;
            
            if -(rax_3) == -0x8000000000000000
            {
                let var_b8: i64;
                arg1[3] = var_b8;
                *arg1.byte_offset(8) = var_c8;
                *arg1 = 2;
            }
            else
            {
                let var_a0: i64;
                let var_98: i64;
                
                if rax_3 != -0x7fffffffffffffff
                {
                    arg1[1] = rax_3;
                    arg1[2] = var_a0;
                    arg1[3] = var_98;
                    core::ptr::drop_in_place$LT$uu_wc..Input$GT$::h52889054a5040018(&var_c8);
                    *arg1 = 1;
                }
                else
                {
                    arg1[1] = var_a0;
                    arg1[2] = var_98;
                    *arg1 = 3;
                    core::ptr::drop_in_place$LT$uu_wc..Input$GT$::h52889054a5040018(&var_c8);
                }
            }
        }
    }
    else if rax == 0
    {
        core::iter::traits::iterator::Iterator::collect::haa3ab18d8a7b4bde(&arg1[1], &var_58);
        *arg1 = 1;
    }
    else
    {
        let var_28: i128;
        let var_78_1: i128 = var_28;
        let var_38: i128;
        let var_88_1: i128 = var_38;
        let var_48: i128;
        let var_98_1: i128 = var_48;
        var_a8 = var_58;
        let rax_1: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcec516cb554c1dca(&var_a8);
        
        if rax_1 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        *rax_1.byte_offset(8);
        *rax_1.byte_offset(0x10);
        uu_wc::WcError::files_disabled::h89bfe6d0afa3db5e(&var_c8);
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h9021246377b03254(&var_c8);
        arg1[2] = &data_4f9098;
        *arg1 = 3;
    }
    arg1
}
