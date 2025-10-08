
  uint64_t uu_install::check_unimplemented::h25e1c8c3cc575803(void* arg1)

{
    uint64_t rdx;
    char const* const rsi;
    void* rdi;
    void var_40;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg1, 
        "preserve-context", 0x10))
    {
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg1, "contextinnerUUsageErrormessagech…", 7))
            return 0;
        
        rdi = &var_40;
        rsi = "--context, -ZOptions --target-di…";
        rdx = 0xd;
    }
    else
    {
        rdi = &var_40;
        rsi = "--preserve-context, -P--context,…";
        rdx = 0x16;
    }
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7990a55799cbd755(rdi, rsi, rdx);
    int64_t var_48 = 0;
    return alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_48);
}
