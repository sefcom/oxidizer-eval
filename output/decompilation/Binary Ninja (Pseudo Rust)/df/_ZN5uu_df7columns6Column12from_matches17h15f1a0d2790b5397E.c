
  fn uu_df::columns::Column::from_matches::h15f1a0d2790b5397(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let rax: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "print-typeexclude-typesourcefsty…", 0xa);
    let rax_1: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "inodeslocalno-syncoutputpathspor…", 6);
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(
        arg2, "outputpathsportabilityprint-type…", 6);
    
    if rax_2 == 3
    {
        let mut rax_3: *mut i32;
        let mut rdx_1: i64;
        let mut rdi_3: *mut i64;
        
        if rax == 0
        {
            if rax_1 != 0
            {
                'label_4d4e2b:
                rax_3 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(6);
                
                if rax_3 == 0
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                *rax_3 = 0x8070600;
                rax_3[1] = 0x509;
            }
            else
            {
                'label_4d4fcb:
                rax_3 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(6);
                
                if rax_3 == 0
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                *rax_3 = 0x3020100;
                rax_3[1] = 0x504;
            }
            
            rdi_3 = &arg1[1];
            rdx_1 = 6;
        }
        else
        {
            if rax_1 != 0
            {
                'label_4d4df3:
                rax_3 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(7);
                
                if rax_3 == 0
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                *rax_3 = 0x7060b00;
                rax_3[1] = 0x908;
            }
            else
            {
                'label_4d4e57:
                rax_3 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(7);
                
                if rax_3 == 0
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                *rax_3 = 0x2010b00;
                rax_3[1] = 0x403;
            }
            
            *rax_3.byte_offset(6) = 5;
            rdi_3 = &arg1[1];
            rdx_1 = 7;
        }
        
        alloc::slice::hack::into_vec::h72287ac5f2b51bf0(rdi_3, rax_3, rdx_1);
        *arg1 = 0;
        return arg1;
    }
    
    if rax == 0
    {
        if rax_1 == 0
        {
            if rax_2 != 2
            {
                goto 'label_4d4fcb;
            }
            
            let mut var_78: i128;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb3fde72e0199aad2(
                &var_78, arg2, "outputpathsportabilityprint-type…", 6);
            let mut var_b8: i64;
            clap_builder::parser::error::MatchesError::unwrap::h25aaf5005aa7e09d(&var_b8, 
                "outputpathsportabilityprint-type…", 6, &var_78);
            
            if var_b8 == 0
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            let var_88: i128;
            let var_48_1: i128 = var_88;
            let var_98: i128;
            let var_58_1: i128 = var_98;
            let var_a8: i128;
            let var_68_1: i128 = var_a8;
            var_78 = var_b8;
            let mut var_e8: i64 = 0;
            let var_e0_1: i64 = 8;
            let var_d8_1: i64 = 0;
            let mut var_d0: i64 = 0;
            let var_c8_1: i64 = 1;
            let var_c0_1: i64 = 0;
            
            loop
            {
                let rax_4: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he44065405483c9e6(&var_78);
                
                if rax_4 == 0
                {
                    arg1[3] = var_c0_1;
                    *arg1.byte_offset(8) = var_d0;
                    *arg1 = 0;
                    break;
                }
                
                *rax_4.byte_offset(0x10);
                let mut rax_5: i64;
                let mut rdx_2: u64;
                rax_5 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h1af83cdb9d95be3c(*rax_4.byte_offset(8));
                let mut var_f8: i64 = rax_5;
                
                if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hf8f0d3232cc90c0d(&var_f8, var_e0_1, var_d8_1) != 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                        &var_b8, var_f8, rdx_2);
                    arg1[3] = var_a8;
                    *arg1.byte_offset(8) = var_b8;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_df..columns..Column$GT$$GT$::h28eca68a33c1715f(&var_d0);
                    break;
                }
                
                alloc::vec::Vec$LT$T$C$A$GT$::push::h328effd5a350cac1(&var_e8, var_f8, rdx_2);
                let rbp_1: u32 = uu_df::columns::Column::parse::h6fa6943eaec20ad4(var_f8, rdx_2);
                core::result::Result$LT$T$C$E$GT$::unwrap::h805b01653c809cdb(rbp_1);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf4b24cdd85525803(&var_d0, rbp_1);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8d7158ab7f6c77b2(
                &var_e8);
            return arg1;
        }
        
        if rax_2 != 2
        {
            goto 'label_4d4e2b;
        }
    }
    else if rax_1 == 0
    {
        if rax_2 != 2
        {
            goto 'label_4d4e57;
        }
    }
    else if rax_2 != 2
    {
        goto 'label_4d4df3;
    }
    
    core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
    /* no return */
}
