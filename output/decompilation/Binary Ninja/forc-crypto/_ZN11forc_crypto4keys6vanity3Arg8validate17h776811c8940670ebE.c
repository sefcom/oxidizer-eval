
  uint64_t forc_crypto::keys::vanity::Arg::validate::h776811c8940670eb(void* arg1)

{
    void* rdi = arg1 + 0x10;
    
    if (0 + -(*(arg1 + 0x10)))
        rdi = nullptr;
    
    int64_t rax = core::option::Option$LT$T$GT$::map_or::h24957dd72484acae(rdi);
    void* rdi_1 = arg1 + 0x28;
    
    if (0 + -(*(arg1 + 0x28)))
        rdi_1 = nullptr;
    
    if (core::option::Option$LT$T$GT$::map_or::h24957dd72484acae(rdi_1) + rax < 0x41)
        return 0;
    
    void** const var_48 = &data_a2f028;
    int64_t var_40_1 = 1;
    int64_t var_38_1 = 8;
    int128_t var_30_1 = {0};
    return anyhow::__private::format_err::h09b344f6a077676a(&var_48);
}
