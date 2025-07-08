
  int32_t* uu_truncate::uumain::uumain::h0c8e68cadfde9536(int64_t arg1)

{
    int64_t r13 = -0x8000000000000000;
    int128_t var_5c8;
    uu_truncate::uu_app::h12570e18f36d91c3(&var_5c8);
    int64_t var_2f8;
    clap_builder::builder::command::Command::after_help::h49df330ec5fede9a(&var_2f8, &var_5c8, 
        "SIZE is an integer with an optio…", 0x27e);
    int64_t var_648;
    clap_builder::builder::command::Command::try_get_matches_from::h1037b302bbbe881d(&var_648, 
        &var_2f8, arg1);
    int64_t rax = var_648;
    int32_t* result;
    int32_t var_640;
    
    if (rax != -0x8000000000000000)
    {
        int128_t var_63c;
        int128_t var_604_1 = var_63c;
        int128_t var_62c;
        int128_t var_5f4_1 = var_62c;
        var_5f4_1 = var_62c;
        int64_t var_610 = rax;
        int32_t var_608_1 = var_640;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3e7c2a7a3a63bbf0(
            &var_5c8, &var_610, "files", 5);
        clap_builder::parser::error::MatchesError::unwrap::h6e8d32f6c2c83abb(&var_2f8, "files", 5, 
            &var_5c8);
        int64_t var_660;
        int64_t var_2e8;
        
        if (!var_2f8)
        {
            var_660 = 0;
            int64_t var_658_1 = 8;
            int64_t var_650_1 = 0;
            label_465672:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8cb729a4d94b595f(
                &var_2f8);
            int64_t var_5b8 = var_2e8;
            var_5c8 = var_2f8;
            *var_5b8[8] = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h85a8fb1d47923e38(&var_5c8);
        }
        else
        {
            int128_t var_2c8;
            int128_t var_598_1 = var_2c8;
            int128_t var_2d8;
            int128_t var_5a8_1 = var_2d8;
            var_5c8 = var_2f8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h7b2255f83d8edb92(&var_648, &var_5c8);
            char const (** var_658)[0x11];
            var_658 = var_640;
            var_660 = var_648;
            int64_t var_650;
            
            if (!var_650)
                goto label_465672;
            
            char rax_4 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_610, "io-blocksno-createreferencefiles", 9);
            char rax_5 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_610, "no-createreferencefiles", 9);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h468bfd82c89ebd5d(
                &var_5c8, &var_610, "referencefiles", 9);
            void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::hf82e8f120b72c731(
                "referencefiles", 9, &var_5c8);
            
            if (!rax_6)
                var_648 = -0x8000000000000000;
            else
            {
                core::ops::function::FnOnce::call_once::h4b133a0e04674206(&var_5c8, rax_6);
                *var_63c[4] = var_2e8;
                var_648 = var_5c8;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h468bfd82c89ebd5d(
                &var_5c8, &var_610, "sizei128 as dyn ERANGEEDEADLKENA…", 4);
            void* rax_10 = clap_builder::parser::error::MatchesError::unwrap::hf82e8f120b72c731(
                "sizei128 as dyn ERANGEEDEADLKENA…", 4, &var_5c8);
            int128_t var_5d8;
            
            if (rax_10)
            {
                core::ops::function::FnOnce::call_once::h4b133a0e04674206(&var_5c8, rax_10);
                r13 = var_5c8;
                var_5d8 = var_5c8;
            }
            
            var_2e8 = *var_63c[4];
            var_2f8 = var_648;
            var_5c8 = r13;
            var_5c8 = var_5d8;
            int128_t* result_1;
            void* rdx_4;
            result_1 = uu_truncate::truncate::hee69817ccf70944a(rax_5, rax_4, &var_2f8, &var_5c8, 
                var_658, var_650);
            result = result_1;
        }
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h0308458d1b814ddd(&var_660);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6e2ae3c626541b13(&var_610);
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(uu_truncate::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hd9fe050d90548bac(
            var_640));
    return result;
}
