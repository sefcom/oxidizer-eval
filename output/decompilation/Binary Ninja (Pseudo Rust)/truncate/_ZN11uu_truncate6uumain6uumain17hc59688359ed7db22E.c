
  fn uu_truncate::uumain::uumain::hc59688359ed7db22(arg1: i64) -> u64

{
    let mut var_5c8: i64;
    uu_truncate::uu_app::hdd46c0ec29db3c96(&var_5c8);
    let mut var_2f8: i64;
    clap_builder::builder::command::Command::after_help::h93c5b958f3e6e2f5(&var_2f8, &var_5c8);
    let mut var_650: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h5bad56e246aa6345(&var_650, 
        &var_2f8, arg1);
    let rax: i64 = var_650;
    let mut var_648: i32;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(uu_truncate::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hf174ec9c665b1fe7(
            var_648));
    }
    
    let mut var_644: i128;
    let var_2ec: i128 = var_644;
    let var_634: i128;
    let mut var_2dc: i128 = var_634;
    var_2dc = var_634;
    var_2f8 = rax;
    let var_2f0: i32 = var_648;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3cb968340e7a0f4b(
        &var_5c8, &var_2f8, "files(uutils coreutils) 0.0.30Sh…", 5);
    let mut var_608: i64;
    clap_builder::parser::error::MatchesError::unwrap::ha470b431c55a6e52(&var_608, 
        "files(uutils coreutils) 0.0.30Sh…", 5, &var_5c8);
    let mut var_670: i64;
    let mut result: u64;
    let mut var_5c0: i128;
    
    if var_608 == 0
    {
        var_670 = 0;
        let var_668_1: i64 = 8;
        let var_660_1: i64 = 0;
        'label_45216d:
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f89098cee83c347(&var_650, "missing file operandSIZE is an i…", 0x14);
        *var_5c0[8] = *var_644[4];
        var_5c8 = var_650;
        let var_5b0_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hf83a7bf746887be6(&var_5c8);
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h7b889cea2390c813(&var_5c8, &var_608);
        let mut var_668: *mut c_void;
        var_668 = var_5c0;
        var_670 = var_5c8;
        let var_660: i64;
        
        if var_660 == 0
        {
            goto 'label_45216d;
        }
        
        let rax_4: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_2f8, "io-blocksno-createreferencefiles…", 9);
        let rax_5: i8 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_2f8, "no-createreferencefiles(uutils c…", 9);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h61814e5dbf06aec6(
            &var_5c8, &var_2f8, "referencefiles(uutils coreutils)…", 9);
        let rax_6: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h83f48b54c0d1fd04(
            "referencefiles(uutils coreutils)…", 9, &var_5c8);
        let mut r12_1: i64 = -0x8000000000000000;
        let mut var_678: i64;
        let mut var_658: i64;
        let mut r14_2: i64;
        let mut r15_1: i8;
        
        if rax_6 == 0
        {
            r15_1 = rax_5;
            r14_2 = -0x8000000000000000;
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_5c8, rax_6);
            r15_1 = rax_5;
            r14_2 = var_5c8;
            var_678 = var_5c0;
            var_658 = *var_5c0[8];
        }
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h61814e5dbf06aec6(
            &var_5c8, &var_2f8, "sizei128 as dyn ERANGEEDEADLKENA…", 4);
        let rax_11: *mut c_void =
            clap_builder::parser::error::MatchesError::unwrap::h83f48b54c0d1fd04(
            "sizei128 as dyn ERANGEEDEADLKENA…", 4, &var_5c8);
        let mut var_618: i128;
        
        if rax_11 != 0
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_5c8, rax_11);
            r12_1 = var_5c8;
            var_618 = var_5c0;
        }
        
        var_650 = r14_2;
        var_648 = var_678;
        *var_644[4] = var_658;
        var_5c8 = r12_1;
        let var_5c0_1: i128 = var_618;
        let mut result_1: u64;
        let mut rdx_5: *mut *mut c_void;
        result_1 = uu_truncate::truncate::h52f8d6c8d64891bb(r15_1, rax_4, &var_650, &var_5c8, 
            var_668, var_660);
        result = result_1;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hcf68ae0edfb67fea(
        &var_670);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h955e414f5a76f3cd(&var_2f8);
    result
}
