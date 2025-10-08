
  int64_t* uu_fmt::extract_files::h7eb5920ec72ef96b(int64_t* arg1, void* arg2)

{
    char rax;
    int64_t rdx;
    rax = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h533e2cba337d4042(arg2, 
        "filesa negative number should be…", 5);
    bool var_162 = rdx == 1 & rax;
    int128_t var_68;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h81c090d18757eba4(
        &var_68, arg2);
    void var_140;
    clap_builder::parser::error::MatchesError::unwrap::h09395f96ef88f6e5(&var_140, &var_68);
    int64_t var_148 = 1;
    int64_t var_100 = 0;
    int64_t var_c0 = 0;
    int64_t var_80 = 0;
    void var_161;
    void* var_78 = &var_161;
    bool* var_70 = &var_162;
    int64_t var_160;
    core::iter::traits::iterator::Iterator::collect::h351c737f9a1f280f(&var_160, &var_148);
    int64_t rdi_4;
    rdi_4 = 0 + -(var_160);
    void var_168;
    
    if (!core::result::Result$LT$T$C$E$GT$::is_ok_and::h78e54e6f75f967bc(rdi_4, 
        &var_168 + (rdi_4 << 3) + 8))
    {
        int64_t var_150;
        arg1[2] = var_150;
        *arg1 = var_160;
    }
    else
    {
        uint64_t rax_2 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
        
        if (!rax_2)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7c69efe601866818(&var_148, "-read errorcannot open  for read…", 1);
        int64_t var_138;
        int64_t var_58_1 = var_138;
        int128_t zmm0_1 = var_148;
        var_68 = zmm0_1;
        *(rax_2 + 0x10) = var_138;
        *rax_2 = zmm0_1;
        *arg1 = 1;
        arg1[1] = rax_2;
        arg1[2] = 1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hd5ff8bdd337469f7(&var_160);
    }
    
    return arg1;
}
