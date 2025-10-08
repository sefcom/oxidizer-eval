
  int64_t just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::install_signal_handler::hba26c624466e5775(char* arg1)

{
    char var_e0;
    just::signals::Signals::new::he7a9f7e370667484(&var_e0);
    char rax = var_e0;
    int32_t var_dc;
    int128_t var_d8;
    int128_t var_b8;
    
    if (rax != 0x38)
    {
        char var_dd;
        arg1[3] = var_dd;
        int16_t var_df;
        *(arg1 + 1) = var_df;
        int128_t var_c8;
        *(arg1 + 0x18) = var_c8;
        *(arg1 + 0x28) = var_b8;
        int128_t var_a8;
        *(arg1 + 0x38) = var_a8;
        int128_t var_98;
        *(arg1 + 0x48) = var_98;
        int128_t var_88;
        *(arg1 + 0x58) = var_88;
        *(arg1 + 8) = var_d8;
        *arg1 = rax;
        *(arg1 + 4) = var_dc;
        return rax;
    }
    
    *var_d8[8] = -0x8000000000000000;
    var_e0 = 0;
    var_b8 = 0;
    int128_t var_40;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_40, "signal handlerwarning: I/O error…", 0xe);
    int64_t var_30;
    int64_t var_68 = var_30;
    int128_t var_78 = var_40;
    std::thread::Builder::name::h9a7df364061ccb51(&var_40, &var_e0, &var_78);
    int64_t var_f8;
    std::thread::Builder::spawn_unchecked::heb5620ad3f347fb2(&var_f8, &var_40, var_dc);
    int64_t rax_2 = var_f8;
    int64_t var_f0;
    
    if (!rax_2)
    {
        *arg1 = 0x2f;
        *(arg1 + 8) = var_f0;
        return var_f0;
    }
    
    int128_t var_50 = var_f0;
    int64_t var_58 = rax_2;
    int64_t rax_3 =
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h74a671e0500e173c(
        &var_58);
    *arg1 = 0x38;
    return rax_3;
}
