
  int64_t uu_ptx::read_char_filter_file::h30a1eb8166058cdf(int64_t* arg1, void* arg2)

{
    char var_48;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(&var_48, 
        arg2, "break-fileignore-caseignore-file…", 0xa);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
        "break-fileignore-caseignore-file…", 0xa, &var_48);
    
    if (!rax)
    {
        core::option::expect_failed::h3f620cfb8545dc61("parsing options failed!src/uu/pt…");
        /* no return */
    }
    
    void* const r14_1;
    uint64_t r15_1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc639eb17d6278023(*(rax + 8), *(rax + 0x10), "-[^]+[^ \t\n]+", 1))
    {
        std::fs::File::open::h695eaf09d3a17d8c(&var_48, rax);
        
        if (var_48 & 1)
        {
            int64_t result;
            arg1[1] = result;
            *arg1 = 0;
            return result;
        }
        
        int32_t var_44;
        r15_1 = alloc::boxed::Box$LT$T$GT$::new::h78f68dd9e7792e5e(var_44);
        r14_1 = &data_651680;
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        r15_1 = alloc::boxed::Box$LT$T$GT$::new::h16f26c34398979df(
            &std::io::stdio::stdin::INSTANCE::heccb3522b341563b);
        r14_1 = &data_6516d8;
    }
    
    int64_t var_60 = 0;
    int64_t var_58_1 = 1;
    int64_t var_50_1 = 0;
    char rax_5;
    int64_t rdx_1;
    rax_5 = (*(r14_1 + 0x38))(r15_1, &var_60);
    
    if (!(rax_5 & 1))
    {
        core::iter::traits::iterator::Iterator::collect::h2fd460d760df1a12(&var_48, var_58_1);
        int128_t zmm0_1 = var_48;
        int128_t var_28;
        *(arg1 + 0x20) = var_28;
        int128_t var_38;
        *(arg1 + 0x10) = var_38;
        *arg1 = zmm0_1;
    }
    else
    {
        arg1[1] = rdx_1;
        *arg1 = 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_60);
    return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hb97f5b2b08127d60(r15_1, r14_1);
}
