
  int64_t forc_crypto::main::h4cb215e16df55901()

{
    char var_48 = 0;
    int16_t var_46 = 0x402;
    char const* const var_68 = 6;
    int64_t var_60 = -0x8000000000000000;
    forc_tracing::init_tracing_subscriber::h0a725aa6998cc63f(&var_68);
    uint64_t rax = forc_crypto::run::h9233c73a0bfd917d();
    uint64_t var_38 = rax;
    
    if (!rax)
        return core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$anyhow..Error$GT$$GT$::h966a044c23b2646d(&var_38);
    
    uint64_t var_70 = rax;
    uint64_t* var_30 = &var_70;
    int64_t (* var_28)(int64_t* arg1, int64_t* arg2) = anyhow::error::_$LT$impl$u20$core..fmt..Display$u20$for$u20$anyhow..Error$GT$::fmt::h15a36b3793b796da;
    var_68 = &data_47ab60;
    int64_t var_60_1 = 1;
    var_48 = 0;
    uint64_t** var_58 = &var_30;
    int64_t var_50 = 1;
    int128_t var_20;
    core::option::Option$LT$T$GT$::map_or_else::hf0943f2d701b1660(&var_20, &var_68);
    var_68 = var_20;
    uint64_t var_10;
    uint64_t var_58_1 = var_10;
    forc_tracing::println_error::h8bc2a86d36dc4dba(var_60_1, var_10);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h194128577f2b3aed(&var_68);
    std::process::exit::hcda678ff272dfed1(1);
    /* no return */
}
