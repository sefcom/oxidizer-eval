
  int64_t uu_dd::progress::SignalHandler::install_signal_handler::hb77c05ee19a2f2b6(int128_t* arg1, int64_t arg2)

{
    int64_t var_118;
    signal_hook::iterator::SignalsInfo$LT$E$GT$::new::hd8417989ae65a609(&var_118);
    int64_t rcx = var_118;
    int64_t var_110;
    
    if (!rcx)
    {
        *(arg1 + 8) = var_110;
        *arg1 = 0;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::he6a5b66802892929(arg2, &data_53dc30);
    }
    
    int64_t var_d0 = rcx;
    int64_t var_c8 = var_110;
    int128_t var_98;
    _$LT$signal_hook..iterator..backend..Handle$u20$as$u20$core..clone..Clone$GT$::clone::hccb9524075a443b6(&var_98, &var_d0);
    int128_t var_f8;
    int128_t var_f8_1 = var_f8;
    int128_t var_108;
    int128_t var_108_1 = var_108;
    var_118 = var_d0;
    int64_t var_e0 = arg2;
    void** const var_d8 = &data_53dc30;
    int64_t var_30 = -0x8000000000000000;
    int64_t var_40 = 0;
    char var_18 = 0;
    void var_58;
    std::thread::Builder::spawn_unchecked::hc7245a19c3e4d7e1(&var_58, &var_40, &var_118);
    int128_t var_70;
    core::result::Result$LT$T$C$E$GT$::expect::hde2740aff8c517d5(&var_70, &var_58);
    int64_t var_78;
    var_f8_1 = var_78;
    int128_t zmm0_2 = var_98;
    int128_t var_88;
    int128_t var_108_2 = var_88;
    var_118 = zmm0_2;
    int128_t zmm2_1 = var_70;
    arg1[1] = var_88;
    *arg1 = zmm0_2;
    int64_t var_e8;
    arg1[3] = var_e8;
    int64_t var_60;
    *(arg1 + 0x38) = var_60;
    arg1[2] = zmm2_1;
    int64_t result = *zmm2_1[8];
    *(arg1 + 0x28) = result;
    return result;
}
