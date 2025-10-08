
  uint64_t uu_truncate::uumain::uumain::hc59688359ed7db22(int64_t arg1)

{
    int64_t var_5c8;
    uu_truncate::uu_app::hdd46c0ec29db3c96(&var_5c8);
    int64_t var_2f8;
    clap_builder::builder::command::Command::after_help::h93c5b958f3e6e2f5(&var_2f8, &var_5c8);
    int64_t var_650;
    clap_builder::builder::command::Command::try_get_matches_from::h5bad56e246aa6345(&var_650, 
        &var_2f8, arg1);
    int64_t rax = var_650;
    int32_t var_648;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(uu_truncate::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hf174ec9c665b1fe7(
            var_648));
    
    int128_t var_644;
    int128_t var_2ec = var_644;
    int128_t var_634;
    int128_t var_2dc = var_634;
    var_2dc = var_634;
    var_2f8 = rax;
    int32_t var_2f0 = var_648;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h3cb968340e7a0f4b(
        &var_5c8, &var_2f8, "files(uutils coreutils) 0.0.30Sh…", 5);
    int64_t var_608;
    clap_builder::parser::error::MatchesError::unwrap::ha470b431c55a6e52(&var_608, 
        "files(uutils coreutils) 0.0.30Sh…", 5, &var_5c8);
    int64_t var_670;
    uint64_t result;
    int128_t var_5c0;
    
    if (!var_608)
    {
        var_670 = 0;
        int64_t var_668_1 = 8;
        int64_t var_660_1 = 0;
        label_45216d:
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9f89098cee83c347(&var_650, "missing file operandSIZE is an i…", 0x14);
        *var_5c0[8] = *var_644[4];
        var_5c8 = var_650;
        int32_t var_5b0_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hf83a7bf746887be6(&var_5c8);
    }
    else
    {
        core::iter::traits::iterator::Iterator::collect::h7b889cea2390c813(&var_5c8, &var_608);
        void* var_668;
        var_668 = var_5c0;
        var_670 = var_5c8;
        int64_t var_660;
        
        if (!var_660)
            goto label_45216d;
        
        char rax_4 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_2f8, "io-blocksno-createreferencefiles…", 9);
        char rax_5 =
            clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_2f8, "no-createreferencefiles(uutils c…", 9);
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h61814e5dbf06aec6(
            &var_5c8, &var_2f8, "referencefiles(uutils coreutils)…", 9);
        void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::h83f48b54c0d1fd04(
            "referencefiles(uutils coreutils)…", 9, &var_5c8);
        int64_t r12_1 = -0x8000000000000000;
        int64_t var_678;
        int64_t var_658;
        int64_t r14_2;
        char r15_1;
        
        if (!rax_6)
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
        void* rax_11 = clap_builder::parser::error::MatchesError::unwrap::h83f48b54c0d1fd04(
            "sizei128 as dyn ERANGEEDEADLKENA…", 4, &var_5c8);
        int128_t var_618;
        
        if (rax_11)
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
        int128_t var_5c0_1 = var_618;
        uint64_t result_1;
        void** rdx_5;
        result_1 = uu_truncate::truncate::h52f8d6c8d64891bb(r15_1, rax_4, &var_650, &var_5c8, 
            var_668, var_660);
        result = result_1;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hcf68ae0edfb67fea(
        &var_670);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h955e414f5a76f3cd(&var_2f8);
    return result;
}
