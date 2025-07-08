
  int64_t* uu_wc::Inputs::new::h8e829995353f568c(int64_t* arg1, void* arg2)

{
    int64_t var_b8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7e8dbfa43c92b0c2(
        &var_b8, arg2, "file", 5);
    int64_t var_f8;
    clap_builder::parser::error::MatchesError::unwrap::h485bae3762b1af51(&var_f8, "file", 5, 
        &var_b8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::haeae6a80429df494(&var_b8, 
        arg2, "files0-fromlinesmax-line-lengtht…", 0xb);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h2e8e84f85343b8e4(
        "files0-fromlinesmax-line-lengtht…", 0xb, &var_b8);
    int128_t var_118;
    
    if (!var_f8)
    {
        if (!rax)
            *arg1 = 0;
        else
        {
            _$LT$uu_wc..Input$u20$as$u20$core..convert..From$LT$$RF$T$GT$$GT$::from::h1837cf3aae8746e4(&var_118, rax);
            uu_wc::Input::try_as_files0::hc67935d372cfef28(&var_b8, &var_118);
            int64_t rax_3 = var_b8;
            
            if (rax_3 == -0x8000000000000000)
            {
                int64_t var_108;
                arg1[3] = var_108;
                *(arg1 + 8) = var_118;
                *arg1 = 2;
            }
            else
            {
                int64_t var_b0;
                int64_t var_a8;
                
                if (rax_3 != -0x7fffffffffffffff)
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
        int128_t var_e8;
        int128_t var_d8;
        int128_t var_c8;
        
        if (!rax)
        {
            int128_t var_38_1 = var_c8;
            int128_t var_48_1 = var_d8;
            int128_t var_58_1 = var_e8;
            int128_t var_68 = var_f8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h97c0c20561b28df0(&arg1[1], &var_68);
            *arg1 = 1;
        }
        else
        {
            int128_t var_88_1 = var_c8;
            int128_t var_98_1 = var_d8;
            int128_t var_a8_1 = var_e8;
            var_b8 = var_f8;
            void* rax_1 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h74e64c5f90f3dbdc(&var_b8);
            
            if (!rax_1)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            *(rax_1 + 8);
            *(rax_1 + 0x10);
            uu_wc::WcError::files_disabled::hc164bba3bbd06973(&var_118);
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hb02e4449d86ed3d2(&var_118);
            arg1[2] = &data_530f90;
            *arg1 = 3;
        }
    }
    return arg1;
}
