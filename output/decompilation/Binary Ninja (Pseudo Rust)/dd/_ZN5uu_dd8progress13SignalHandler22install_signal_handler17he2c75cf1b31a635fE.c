
  fn uu_dd::progress::SignalHandler::install_signal_handler::he2c75cf1b31a635f(arg1: *mut i128, arg2: i64, arg3: *mut i64) -> *mut i128

{
    let mut var_118: i64;
    signal_hook::iterator::SignalsInfo$LT$E$GT$::new::hff46f358f252dadd(&var_118, 0xa);
    let rcx: i64 = var_118;
    let var_110: i64;
    
    if rcx == 0
    {
        *arg1.byte_offset(8) = var_110;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..ops..function..Fn$LT$$LP$$RP$$GT$$u2b$Output$u20$$u3d$$u20$$LP$$RP$$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::hbd64289d0f49cc7c(arg2, arg3);
    }
    else
    {
        let mut var_d0: i64 = rcx;
        let var_c8_1: i64 = var_110;
        let mut var_98: i128;
        _$LT$signal_hook..iterator..backend..Handle$u20$as$u20$core..clone..Clone$GT$::clone::h4933321813e84478(&var_98, &var_d0);
        let var_f8: i128;
        let mut var_f8_1: i128 = var_f8;
        let var_108: i128;
        let var_108_1: i128 = var_108;
        var_118 = var_d0;
        let var_e0_1: i64 = arg2;
        let var_d8_1: *mut i64 = arg3;
        let var_30_1: i64 = -0x8000000000000000;
        let mut var_40: i64 = 0;
        let mut var_58: ();
        std::thread::Builder::spawn_unchecked::hf6e5fc31be6cfac7(&var_58, &var_40);
        let mut var_70: i128;
        core::result::Result$LT$T$C$E$GT$::expect::hae1648ffdc1cd49b(&var_70, &var_58);
        let var_78: i64;
        var_f8_1 = var_78;
        let zmm0_2: i128 = var_98;
        let var_88: i128;
        let var_108_2: i128 = var_88;
        var_118 = zmm0_2;
        let zmm2_2: i128 = var_70;
        arg1[1] = var_88;
        *arg1 = zmm0_2;
        let var_e8: i64;
        arg1[3] = var_e8;
        let var_60: i64;
        *arg1.byte_offset(0x38) = var_60;
        arg1[2] = zmm2_2;
        *arg1.byte_offset(0x28) = *zmm2_2[8];
    }
    arg1
}
