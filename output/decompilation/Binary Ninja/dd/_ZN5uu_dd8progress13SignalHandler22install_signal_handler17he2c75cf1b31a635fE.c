
  int128_t* uu_dd::progress::SignalHandler::install_signal_handler::he2c75cf1b31a635f(int128_t* arg1, int64_t arg2, int64_t* arg3)

{
    int64_t var_118;
    signal_hook::iterator::SignalsInfo$LT$E$GT$::new::hff46f358f252dadd(&var_118, 0xa);
    int64_t rcx = var_118;
    int64_t var_110;
    
    if (!rcx)
    {
        *(arg1 + 8) = var_110;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..ops..function..Fn$LT$$LP$$RP$$GT$$u2b$Output$u20$$u3d$$u20$$LP$$RP$$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hbd64289d0f49cc7c(arg2, arg3);
    }
    else
    {
        int64_t var_d0 = rcx;
        int64_t var_c8_1 = var_110;
        int128_t var_98;
        _$LT$signal_hook..iterator..backend..Handle$u20$as$u20$core..clone..Clone$GT$::clone::h4933321813e84478(&var_98, &var_d0);
        int128_t var_f8;
        int128_t var_f8_1 = var_f8;
        int128_t var_108;
        int128_t var_108_1 = var_108;
        var_118 = var_d0;
        int64_t var_e0_1 = arg2;
        int64_t* var_d8_1 = arg3;
        int64_t var_30_1 = -0x8000000000000000;
        int64_t var_40 = 0;
        void var_58;
        std::thread::Builder::spawn_unchecked::hf6e5fc31be6cfac7(&var_58, &var_40);
        int128_t var_70;
        core::result::Result$LT$T$C$E$GT$::expect::hae1648ffdc1cd49b(&var_70, &var_58);
        int64_t var_78;
        var_f8_1 = var_78;
        int128_t zmm0_2 = var_98;
        int128_t var_88;
        int128_t var_108_2 = var_88;
        var_118 = zmm0_2;
        int128_t zmm2_2 = var_70;
        arg1[1] = var_88;
        *arg1 = zmm0_2;
        int64_t var_e8;
        arg1[3] = var_e8;
        int64_t var_60;
        *(arg1 + 0x38) = var_60;
        arg1[2] = zmm2_2;
        *(arg1 + 0x28) = *zmm2_2[8];
    }
    return arg1;
}
