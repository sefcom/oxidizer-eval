
  fn uu_df::columns::Column::from_matches::h56d2df2bf88d44da(arg1: *mut i64, arg2: *mut c_void) -> u64

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "print-typeexclude-typesrc/uu/df/…", 0xa);
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "inodeslocalno-syncoutputpathspor…", 6);
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(
        arg2, "outputpathsportabilityprint-type…", 6);
    
    if rax_2 == 3
    {
        let mut result: u64;
        
        if rax == 0
        {
            if rax_1 != 0
            {
                'label_46af68:
                result = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 6);
                
                if result == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *result = 0x8070600;
                *(result + 4) = 0x509;
            }
            else
            {
                'label_46b0fa:
                result = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 6);
                
                if result == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *result = 0x3020100;
                *(result + 4) = 0x504;
            }
            
            arg1[1] = 6;
            arg1[2] = result;
            arg1[3] = 6;
        }
        else
        {
            if rax_1 != 0
            {
                'label_46af2b:
                result = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 7);
                
                if result == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *result = 0x7060b00;
                *(result + 4) = 0x908;
            }
            else
            {
                'label_46af99:
                result = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 7);
                
                if result == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *result = 0x2010b00;
                *(result + 4) = 0x403;
            }
            
            *(result + 6) = 5;
            arg1[1] = 7;
            arg1[2] = result;
            arg1[3] = 7;
        }
        
        *arg1 = 0;
        return result;
    }
    
    if rax != 0
    {
        if rax_1 == 0
        {
            if rax_2 != 2
            {
                goto 'label_46af99;
            }
            
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
        
        if rax_2 == 2
        {
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
        
        goto 'label_46af2b;
    }
    
    if rax_1 != 0
    {
        if rax_2 == 2
        {
            core::panicking::panic::h85d6dd562679980c("internal error: entered unreacha…");
            /* no return */
        }
        
        goto 'label_46af68;
    }
    
    if rax_2 == 2
    {
        let mut var_78: i128;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h54572697988ee692(
            &var_78, arg2);
        let mut var_b8: i64;
        clap_builder::parser::error::MatchesError::unwrap::h953c1c3ca778ca12(&var_b8, &var_78);
        
        if var_b8 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let var_88: i128;
        let var_48_1: i128 = var_88;
        let var_98: i128;
        let var_58_1: i128 = var_98;
        let var_a8: i128;
        let var_68_1: i128 = var_a8;
        var_78 = var_b8;
        let mut var_f8: i64 = 0;
        let var_f0_1: i64 = 8;
        let var_e8_1: i64 = 0;
        let mut var_e0: i64 = 0;
        let var_d8_1: i64 = 1;
        let var_d0_1: i64 = 0;
        
        loop
        {
            let rax_3: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hded8a622fced995e(&var_78);
            
            if rax_3 == 0
            {
                arg1[3] = var_d0_1;
                *arg1.byte_offset(8) = var_e0;
                *arg1 = 0;
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hc3fe8674e0b3654c(var_f8, var_f0_1);
            }
            
            let r12_1: i64 = *rax_3.byte_offset(8);
            let rbp_1: u64 = *rax_3.byte_offset(0x10);
            let mut var_c8: i64 = r12_1;
            
            if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h120b22dc52b1e14e(&var_c8, var_f0_1, var_e8_1) != 0
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h40d1dda03127eab3(&var_b8, r12_1, rbp_1);
                arg1[3] = var_a8;
                *arg1.byte_offset(8) = var_b8;
                *arg1 = 1;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4a907a8f82cf67de(
                    var_e0, var_d8_1);
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hc3fe8674e0b3654c(var_f8, var_f0_1);
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::hab2276672e065655(&var_f8, r12_1, rbp_1);
            let rbp_2: u32 = uu_df::columns::Column::parse::h53cde52d906cd7b1(var_c8, rbp_1);
            core::result::Result$LT$T$C$E$GT$::unwrap::hcb2f69e768e07283(rbp_2);
            alloc::vec::Vec$LT$T$C$A$GT$::push::hb31c117abee96b92(&var_e0, rbp_2);
        }
    }
    
    goto 'label_46b0fa;
}
