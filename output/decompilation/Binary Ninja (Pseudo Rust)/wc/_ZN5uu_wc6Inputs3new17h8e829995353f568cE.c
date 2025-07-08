
  fn uu_wc::Inputs::new::h8e829995353f568c(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_b8: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7e8dbfa43c92b0c2(
        &var_b8, arg2, "file", 5);
    let mut var_f8: i64;
    clap_builder::parser::error::MatchesError::unwrap::h485bae3762b1af51(&var_f8, "file", 5, 
        &var_b8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haeae6a80429df494(&var_b8, 
        arg2, "files0-fromlinesmax-line-lengtht…", 0xb);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h2e8e84f85343b8e4(
        "files0-fromlinesmax-line-lengtht…", 0xb, &var_b8);
    let mut var_118: i128;
    
    if var_f8 == 0
    {
        if rax == 0
        {
            *arg1 = 0;
        }
        else
        {
            _$LT$uu_wc..Input$u20$as$u20$core..convert..From$LT$$RF$T$GT$$GT$::from::h1837cf3aae8746e4(&var_118, rax);
            uu_wc::Input::try_as_files0::hc67935d372cfef28(&var_b8, &var_118);
            let rax_3: i64 = var_b8;
            
            if rax_3 == -0x8000000000000000
            {
                let var_108: i64;
                arg1[3] = var_108;
                *arg1.byte_offset(8) = var_118;
                *arg1 = 2;
            }
            else
            {
                let var_b0: i64;
                let var_a8: i64;
                
                if rax_3 != -0x7fffffffffffffff
                {
                    *arg1 = 1;
                    arg1[1] = rax_3;
                    arg1[2] = var_b0;
                    arg1[3] = var_a8;
                }
                else
                {
                    arg1[1] = var_b0;
                    arg1[2] = var_a8;
                    *arg1 = 3;
                }
                core::ptr::drop_in_place$LT$uu_wc..Input$GT$::hd370e224d5568eba(&var_118);
            }
        }
    }
    else
    {
        let var_e8: i128;
        let var_d8: i128;
        let var_c8: i128;
        
        if rax == 0
        {
            let var_38_1: i128 = var_c8;
            let var_48_1: i128 = var_d8;
            let var_58_1: i128 = var_e8;
            let mut var_68: i128 = var_f8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h97c0c20561b28df0(&arg1[1], &var_68);
            *arg1 = 1;
        }
        else
        {
            let var_88_1: i128 = var_c8;
            let var_98_1: i128 = var_d8;
            let var_a8_1: i128 = var_e8;
            var_b8 = var_f8;
            let rax_1: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h74e64c5f90f3dbdc(&var_b8);
            
            if rax_1 == 0
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            *rax_1.byte_offset(8);
            *rax_1.byte_offset(0x10);
            uu_wc::WcError::files_disabled::hc164bba3bbd06973(&var_118);
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hb02e4449d86ed3d2(&var_118);
            arg1[2] = &data_530f90;
            *arg1 = 3;
        }
    }
    arg1
}
