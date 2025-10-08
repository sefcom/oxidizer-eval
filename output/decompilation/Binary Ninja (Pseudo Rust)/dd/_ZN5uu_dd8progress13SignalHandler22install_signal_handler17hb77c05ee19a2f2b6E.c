
  fn uu_dd::progress::SignalHandler::install_signal_handler::hb77c05ee19a2f2b6(arg1: *mut i128, arg2: i64) -> i64

{
    let mut var_118: i64;
    signal_hook::iterator::SignalsInfo$LT$E$GT$::new::hd8417989ae65a609(&var_118);
    let rcx: i64 = var_118;
    let var_110: i64;
    
    if rcx == 0
    {
        *arg1.byte_offset(8) = var_110;
        *arg1 = 0;
        /* tailcall */
        return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::he6a5b66802892929(arg2, &data_53dc30);
    }
    
    let mut var_d0: i64 = rcx;
    let var_c8: i64 = var_110;
    let mut var_98: i128;
    _$LT$signal_hook..iterator..backend..Handle$u20$as$u20$core..clone..Clone$GT$::clone::hccb9524075a443b6(&var_98, &var_d0);
    let var_f8: i128;
    let mut var_f8_1: i128 = var_f8;
    let var_108: i128;
    let var_108_1: i128 = var_108;
    var_118 = var_d0;
    let var_e0: i64 = arg2;
    let var_d8: *mut *mut c_void = &data_53dc30;
    let var_30: i64 = -0x8000000000000000;
    let mut var_40: i64 = 0;
    let var_18: i8 = 0;
    let mut var_58: ();
    std::thread::Builder::spawn_unchecked::hc7245a19c3e4d7e1(&var_58, &var_40, &var_118);
    let mut var_70: i128;
    core::result::Result$LT$T$C$E$GT$::expect::hde2740aff8c517d5(&var_70, &var_58);
    let var_78: i64;
    var_f8_1 = var_78;
    let zmm0_2: i128 = var_98;
    let var_88: i128;
    let var_108_2: i128 = var_88;
    var_118 = zmm0_2;
    let zmm2_1: i128 = var_70;
    arg1[1] = var_88;
    *arg1 = zmm0_2;
    let var_e8: i64;
    arg1[3] = var_e8;
    let var_60: i64;
    *arg1.byte_offset(0x38) = var_60;
    arg1[2] = zmm2_1;
    let result: i64 = *zmm2_1[8];
    *arg1.byte_offset(0x28) = result;
    result
}
