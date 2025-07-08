
  int64_t* uu_df::columns::Column::from_matches::h15f1a0d2790b5397(int64_t* arg1, void* arg2)

{
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        arg2, "print-typeexclude-typesourcefsty…", 0xa);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "inodeslocalno-syncoutputpathspor…", 6);
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(
        arg2, "outputpathsportabilityprint-type…", 6);
    
    if (rax_2 == 3)
    {
        int32_t* rax_3;
        int64_t rdx_1;
        int64_t* rdi_3;
        
        if (!rax)
        {
            if (rax_1)
            {
                label_4d4e2b:
                rax_3 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(6);
                
                if (!rax_3)
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                *rax_3 = 0x8070600;
                rax_3[1] = 0x509;
            }
            else
            {
                label_4d4fcb:
                rax_3 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(6);
                
                if (!rax_3)
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
            if (rax_1)
            {
                label_4d4df3:
                rax_3 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(7);
                
                if (!rax_3)
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                *rax_3 = 0x7060b00;
                rax_3[1] = 0x908;
            }
            else
            {
                label_4d4e57:
                rax_3 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(7);
                
                if (!rax_3)
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                *rax_3 = 0x2010b00;
                rax_3[1] = 0x403;
            }
            
            *(rax_3 + 6) = 5;
            rdi_3 = &arg1[1];
            rdx_1 = 7;
        }
        
        alloc::slice::hack::into_vec::h72287ac5f2b51bf0(rdi_3, rax_3, rdx_1);
        *arg1 = 0;
        return arg1;
    }
    
    if (!rax)
    {
        if (!rax_1)
        {
            if (rax_2 != 2)
                goto label_4d4fcb;
            
            int128_t var_78;
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hb3fde72e0199aad2(
                &var_78, arg2, "outputpathsportabilityprint-type…", 6);
            int64_t var_b8;
            clap_builder::parser::error::MatchesError::unwrap::h25aaf5005aa7e09d(&var_b8, 
                "outputpathsportabilityprint-type…", 6, &var_78);
            
            if (!var_b8)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            int128_t var_88;
            int128_t var_48_1 = var_88;
            int128_t var_98;
            int128_t var_58_1 = var_98;
            int128_t var_a8;
            int128_t var_68_1 = var_a8;
            var_78 = var_b8;
            int64_t var_e8 = 0;
            int64_t var_e0_1 = 8;
            int64_t var_d8_1 = 0;
            int64_t var_d0 = 0;
            int64_t var_c8_1 = 1;
            int64_t var_c0_1 = 0;
            
            while (true)
            {
                void* rax_4 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he44065405483c9e6(&var_78);
                
                if (!rax_4)
                {
                    arg1[3] = var_c0_1;
                    *(arg1 + 8) = var_d0;
                    *arg1 = 0;
                    break;
                }
                
                *(rax_4 + 0x10);
                int64_t rax_5;
                uint64_t rdx_2;
                rax_5 = core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::h1af83cdb9d95be3c(*(rax_4 + 8));
                int64_t var_f8 = rax_5;
                
                if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hf8f0d3232cc90c0d(&var_f8, var_e0_1, var_d8_1))
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(
                        &var_b8, var_f8, rdx_2);
                    arg1[3] = var_a8;
                    *(arg1 + 8) = var_b8;
                    *arg1 = 1;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_df..columns..Column$GT$$GT$::h28eca68a33c1715f(&var_d0);
                    break;
                }
                
                alloc::vec::Vec$LT$T$C$A$GT$::push::h328effd5a350cac1(&var_e8, var_f8, rdx_2);
                uint32_t rbp_1 = uu_df::columns::Column::parse::h6fa6943eaec20ad4(var_f8, rdx_2);
                core::result::Result$LT$T$C$E$GT$::unwrap::h805b01653c809cdb(rbp_1);
                alloc::vec::Vec$LT$T$C$A$GT$::push::hf4b24cdd85525803(&var_d0, rbp_1);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h8d7158ab7f6c77b2(
                &var_e8);
            return arg1;
        }
        
        if (rax_2 != 2)
            goto label_4d4e2b;
    }
    else if (!rax_1)
    {
        if (rax_2 != 2)
            goto label_4d4e57;
    }
    else if (rax_2 != 2)
        goto label_4d4df3;
    
    core::panicking::panic::h8c3a660c3523e4a4("internal error: entered unreacha…");
    /* no return */
}
