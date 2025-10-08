
  uint64_t zoxide::main::h052d65c38aafa843()

{
    std::env::remove_var::h2e8df9aa3cb8d6b6("RUST_LIB_BACKTRACERUST_BACKTRACE…");
    std::env::remove_var::h2e8df9aa3cb8d6b6("RUST_BACKTRACE' wasn't recognize…");
    void var_58;
    clap_builder::derive::Parser::parse::h7c59585d5d69ad43(&var_58);
    int64_t* rax =
        _$LT$zoxide..cmd..cmd..Cmd$u20$as$u20$zoxide..cmd..Run$GT$::run::h9c459d8ce607258a(&var_58);
    uint32_t rbx;
    
    if (!rax)
        rbx = 0;
    else
    {
        char var_b8;
        anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::downcast::h1c453138b475fd5e(&var_b8, rax);
        char var_b7;
        
        if (var_b8 != 1)
            rbx = var_b7;
        else
        {
            int64_t var_b0;
            int64_t var_c0 = var_b0;
            void* var_a0 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            int64_t* var_98 = &var_c0;
            int64_t (* var_90_1)(int64_t* arg1) = anyhow::error::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$anyhow..Error$GT$::fmt::h45dbd11a91a596ce;
            void** const var_88 = &data_534cb0;
            int64_t var_80_1 = 2;
            int64_t var_68_1 = 0;
            int64_t** var_78_1 = &var_98;
            int64_t var_70_1 = 1;
            void* var_a8 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(&var_a0, &var_88);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h29a4fc21488b4033(&var_a8);
            core::ptr::drop_in_place$LT$anyhow..Error$GT$::h20a3619e4651cb22();
            rbx = 1;
        }
    }
    
    core::ptr::drop_in_place$LT$zoxide..cmd..cmd..Cmd$GT$::h1183555263919549(&var_58);
    return rbx;
}
