
  fn just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::install_signal_handler::hba26c624466e5775(arg1: *mut i8) -> i64

{
    let mut var_e0: i8;
    just::signals::Signals::new::he7a9f7e370667484(&var_e0);
    let rax: i8 = var_e0;
    let var_dc: i32;
    let mut var_d8: i128;
    let mut var_b8: i128;
    
    if rax != 0x38
    {
        let var_dd: i8;
        arg1[3] = var_dd;
        let var_df: i16;
        *arg1.byte_offset(1) = var_df;
        let var_c8: i128;
        *arg1.byte_offset(0x18) = var_c8;
        *arg1.byte_offset(0x28) = var_b8;
        let var_a8: i128;
        *arg1.byte_offset(0x38) = var_a8;
        let var_98: i128;
        *arg1.byte_offset(0x48) = var_98;
        let var_88: i128;
        *arg1.byte_offset(0x58) = var_88;
        *arg1.byte_offset(8) = var_d8;
        *arg1 = rax;
        *arg1.byte_offset(4) = var_dc;
        return rax;
    }
    
    *var_d8[8] = -0x8000000000000000;
    var_e0 = 0;
    var_b8 = 0;
    let mut var_40: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_40, "signal handlerwarning: I/O error…", 0xe);
    let var_30: i64;
    let var_68: i64 = var_30;
    let mut var_78: i128 = var_40;
    std::thread::Builder::name::h9a7df364061ccb51(&var_40, &var_e0, &var_78);
    let mut var_f8: i64;
    std::thread::Builder::spawn_unchecked::heb5620ad3f347fb2(&var_f8, &var_40, var_dc);
    let rax_2: i64 = var_f8;
    let var_f0: i64;
    
    if rax_2 == 0
    {
        *arg1 = 0x2f;
        *arg1.byte_offset(8) = var_f0;
        return var_f0;
    }
    
    let var_50: i128 = var_f0;
    let mut var_58: i64 = rax_2;
    let rax_3: i64 =
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h74a671e0500e173c(
        &var_58);
    *arg1 = 0x38;
    rax_3
}
