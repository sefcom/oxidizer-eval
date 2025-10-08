
  fn uu_ptx::read_char_filter_file::h30a1eb8166058cdf(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let mut var_48: i8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h88d1a3ba1868cd68(&var_48, 
        arg2, "break-fileignore-caseignore-file…", 0xa);
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::h04f490a5ade46ed0(
        "break-fileignore-caseignore-file…", 0xa, &var_48);
    
    if rax == 0
    {
        core::option::expect_failed::h3f620cfb8545dc61("parsing options failed!src/uu/pt…");
        /* no return */
    }
    
    let mut r14_1: *mut c_void;
    let mut r15_1: u64;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc639eb17d6278023(*rax.byte_offset(8), *rax.byte_offset(0x10), "-[^]+[^ \t\n]+", 1) == 0
    {
        std::fs::File::open::h695eaf09d3a17d8c(&var_48, rax);
        
        if (var_48 & 1) != 0
        {
            let result: i64;
            arg1[1] = result;
            *arg1 = 0;
            return result;
        }
        
        let var_44: i32;
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
    
    let mut var_60: i64 = 0;
    let var_58_1: i64 = 1;
    let var_50_1: i64 = 0;
    let mut rax_5: i8;
    let mut rdx_1: i64;
    rax_5 = (*r14_1.byte_offset(0x38))(r15_1, &var_60);
    
    if (rax_5 & 1) == 0
    {
        core::iter::traits::iterator::Iterator::collect::h2fd460d760df1a12(&var_48, var_58_1);
        let zmm0_1: i128 = var_48;
        let var_28: i128;
        *arg1.byte_offset(0x20) = var_28;
        let var_38: i128;
        *arg1.byte_offset(0x10) = var_38;
        *arg1 = zmm0_1;
    }
    else
    {
        arg1[1] = rdx_1;
        *arg1 = 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_60);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::hb97f5b2b08127d60(r15_1, r14_1)
}
