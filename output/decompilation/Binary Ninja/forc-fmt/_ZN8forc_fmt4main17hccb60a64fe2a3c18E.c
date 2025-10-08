
  int64_t forc_fmt::main::hccb60a64fe2a3c18()

{
    char var_48 = 0;
    int16_t var_46 = 0x402;
    void* const var_68 = 6;
    int64_t var_60 = -0x8000000000000000;
    forc_tracing::init_tracing_subscriber::h0a725aa6998cc63f(&var_68);
    uint64_t rax = forc_fmt::run::h26db7dfbf2d65178();
    uint64_t var_38 = rax;
    
    if (!rax)
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$anyhow..Error$GT$$GT$::h2b0aae2214a03b3f(&var_38);
    
    uint64_t var_70 = rax;
    uint64_t rdx =
        forc_tracing::println_error::h8bc2a86d36dc4dba("Formatting skipped due to error.…", 0x20);
    uint64_t* var_30 = &var_70;
    int64_t (* var_28)(int64_t* arg1, int64_t* arg2) = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::h15a36b3793b796da;
    var_68 = &data_566a30;
    int64_t var_60_1 = 1;
    var_48 = 0;
    uint64_t** var_58 = &var_30;
    int64_t var_50 = 1;
    int128_t var_20;
    core::option::Option$LT$T$GT$::map_or_else::he9085a4e14fd35e7(&var_20, 0, rdx, &var_68);
    var_68 = var_20;
    uint64_t var_10;
    uint64_t var_58_1 = var_10;
    forc_tracing::println_error::h8bc2a86d36dc4dba(var_60_1, var_10);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::he4f3a1149946cfdd(&var_68);
    std::process::exit::hcda678ff272dfed1(1);
    /* no return */
}
