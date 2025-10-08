
  int64_t* uu_wc::Inputs::new::hed823cacb11525c8(int64_t* arg1, void* arg2)

{
    int64_t var_a8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h9b92d7f6293c04fa(
        &var_a8, arg2);
    int64_t var_58;
    clap_builder::parser::error::MatchesError::unwrap::h4306498e298fd4ff(&var_58, &var_a8);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he062f5150264a99d(&var_a8, 
        arg2);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h8ef5750e6559027d(&var_a8);
    int128_t var_c8;
    
    if (!var_58)
    {
        if (!rax)
            *arg1 = 0;
        else
        {
            *(rax + 0x10);
            _$LT$uu_wc..Input$u20$as$u20$core..convert..From$LT$$RF$T$GT$$GT$::from::h1ca2dfb37c66956c(&var_c8, *(rax + 8));
            uu_wc::Input::try_as_files0::h87a8bdb6df7fa337(&var_a8, &var_c8);
            int64_t rax_3 = var_a8;
            
            if (-(rax_3) == -0x8000000000000000)
            {
                int64_t var_b8;
                arg1[3] = var_b8;
                *(arg1 + 8) = var_c8;
                *arg1 = 2;
            }
            else
            {
                int64_t var_a0;
                int64_t var_98;
                
                if (rax_3 != -0x7fffffffffffffff)
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
    else if (!rax)
    {
        core::iter::traits::iterator::Iterator::collect::haa3ab18d8a7b4bde(&arg1[1], &var_58);
        *arg1 = 1;
    }
    else
    {
        int128_t var_28;
        int128_t var_78_1 = var_28;
        int128_t var_38;
        int128_t var_88_1 = var_38;
        int128_t var_48;
        int128_t var_98_1 = var_48;
        var_a8 = var_58;
        void* rax_1 = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcec516cb554c1dca(&var_a8);
        
        if (!rax_1)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        *(rax_1 + 8);
        *(rax_1 + 0x10);
        uu_wc::WcError::files_disabled::h89bfe6d0afa3db5e(&var_c8);
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h9021246377b03254(&var_c8);
        arg1[2] = &data_4f9098;
        *arg1 = 3;
    }
    return arg1;
}
