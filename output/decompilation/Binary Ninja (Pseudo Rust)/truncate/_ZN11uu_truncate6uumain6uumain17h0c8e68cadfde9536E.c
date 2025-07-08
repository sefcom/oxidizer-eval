
  fn uu_truncate::uumain::uumain::h0c8e68cadfde9536(arg1: i64) -> *mut i32

{
    let mut r13: i64 = -0x8000000000000000;
    let mut var_5c8: i128;
    uu_truncate::uu_app::h12570e18f36d91c3(&var_5c8);
    let mut var_2f8: i64;
    clap_builder::builder::command::Command::after_help::h49df330ec5fede9a(&var_2f8, &var_5c8, 
        "SIZE is an integer with an optio…", 0x27e);
    let mut var_648: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h1037b302bbbe881d(&var_648, 
        &var_2f8, arg1);
    let rax: i64 = var_648;
    let mut result: *mut i32;
    let var_640: i32;
    
    if rax != -0x8000000000000000
    {
        let mut var_63c: i128;
        let var_604_1: i128 = var_63c;
        let var_62c: i128;
        let mut var_5f4_1: i128 = var_62c;
        var_5f4_1 = var_62c;
        let mut var_610: i64 = rax;
        let var_608_1: i32 = var_640;
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3e7c2a7a3a63bbf0(
            &var_5c8, &var_610, "files", 5);
        clap_builder::parser::error::MatchesError::unwrap::h6e8d32f6c2c83abb(&var_2f8, "files", 5, 
            &var_5c8);
        let mut var_660: i64;
        let mut var_2e8: i64;
        
        if var_2f8 == 0
        {
            var_660 = 0;
            let var_658_1: i64 = 8;
            let var_650_1: i64 = 0;
            'label_465672:
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8cb729a4d94b595f(
                &var_2f8);
            let mut var_5b8: i64 = var_2e8;
            var_5c8 = var_2f8;
            *var_5b8[8] = 1;
            result = alloc::boxed::Box$LT$T$GT$::new::h85a8fb1d47923e38(&var_5c8);
        }
        else
        {
            let var_2c8: i128;
            let var_598_1: i128 = var_2c8;
            let var_2d8: i128;
            let var_5a8_1: i128 = var_2d8;
            var_5c8 = var_2f8;
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h7b2255f83d8edb92(&var_648, &var_5c8);
            let mut var_658: *mut *mut [i8; 0x11];
            var_658 = var_640;
            var_660 = var_648;
            let var_650: i64;
            
            if var_650 == 0
            {
                goto 'label_465672;
            }
            
            let rax_4: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_610, "io-blocksno-createreferencefiles", 9);
            let rax_5: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                &var_610, "no-createreferencefiles", 9);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h468bfd82c89ebd5d(
                &var_5c8, &var_610, "referencefiles", 9);
            let rax_6: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hf82e8f120b72c731(
                "referencefiles", 9, &var_5c8);
            
            if rax_6 == 0
            {
                var_648 = -0x8000000000000000;
            }
            else
            {
                core::ops::function::FnOnce::call_once::h4b133a0e04674206(&var_5c8, rax_6);
                *var_63c[4] = var_2e8;
                var_648 = var_5c8;
            }
            
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h468bfd82c89ebd5d(
                &var_5c8, &var_610, "sizei128 as dyn ERANGEEDEADLKENA…", 4);
            let rax_10: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hf82e8f120b72c731(
                "sizei128 as dyn ERANGEEDEADLKENA…", 4, &var_5c8);
            let mut var_5d8: i128;
            
            if rax_10 != 0
            {
                core::ops::function::FnOnce::call_once::h4b133a0e04674206(&var_5c8, rax_10);
                r13 = var_5c8;
                var_5d8 = var_5c8;
            }
            
            var_2e8 = *var_63c[4];
            var_2f8 = var_648;
            var_5c8 = r13;
            var_5c8 = var_5d8;
            let mut result_1: *mut i128;
            let mut rdx_4: *mut c_void;
            result_1 = uu_truncate::truncate::hee69817ccf70944a(rax_5, rax_4, &var_2f8, &var_5c8, 
                var_658, var_650);
            result = result_1;
        }
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h0308458d1b814ddd(&var_660);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h6e2ae3c626541b13(&var_610);
    }
    else
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(uu_truncate::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hd9fe050d90548bac(
            var_640));
    }
    result
}
