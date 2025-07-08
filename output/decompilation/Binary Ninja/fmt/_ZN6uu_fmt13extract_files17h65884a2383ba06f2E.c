
  int128_t* uu_fmt::extract_files::h65884a2383ba06f2(int128_t* arg1, void* arg2)

{
    int64_t rax;
    int64_t rdx;
    rax = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(arg2, 
        "fileswidthinvalid width: src/uu/…", 5);
    rax = rax;
    bool var_17a = rdx == 1 & rax;
    int128_t var_160;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h09abd7b1f5ddbade(
        &var_160, arg2, "fileswidthinvalid width: src/uu/…", 5);
    void var_f8;
    clap_builder::parser::error::MatchesError::unwrap::h7cc34044724f6ef1(&var_f8, 
        "fileswidthinvalid width: src/uu/…", 5, &var_160);
    int64_t var_100 = 1;
    int64_t var_b8 = 0;
    int64_t var_78 = 0;
    int64_t var_38 = 0;
    void var_179;
    void* var_30 = &var_179;
    bool* var_28 = &var_17a;
    int64_t var_178;
    core::iter::adapters::try_process::h0378d5530d4cfb57(&var_178, &var_100);
    int64_t rdi_4;
    rdi_4 = var_178 == -0x8000000000000000;
    void var_188;
    
    if (!core::result::Result$LT$T$C$E$GT$::is_ok_and::h29c70ed0bca145e8(rdi_4, 
        &var_188 + (rdi_4 << 3) + 0x10))
    {
        int64_t var_168;
        arg1[1] = var_168;
        *arg1 = var_178;
    }
    else
    {
        int128_t* rax_2 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(8, 0x18);
        
        if (!rax_2)
        {
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5bbd8c4ce611c1c9(&var_160, 
            "-read error\nfileswidthinvalid w…", 1);
        int64_t var_150;
        int64_t var_108_1 = var_150;
        int128_t zmm0_1 = var_160;
        int128_t var_118_1 = zmm0_1;
        rax_2[1] = var_150;
        *rax_2 = zmm0_1;
        alloc::slice::hack::into_vec::hec8791858ac76d0c(&var_160, rax_2, 1);
        arg1[1] = var_150;
        *arg1 = var_160;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h73b975fc798ab75a(&var_178);
    }
    
    return arg1;
}
