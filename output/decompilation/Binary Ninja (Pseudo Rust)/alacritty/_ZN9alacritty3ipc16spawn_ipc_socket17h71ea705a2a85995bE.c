
  fn alacritty::ipc::spawn_ipc_socket::h71ea705a2a85995b(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i8) -> i64

{
    let mut var_90: *mut *mut [i8; 0xde];
    let mut var_88: i128;
    let mut var_78: *mut *mut [i8; 0xde];
    let mut var_70: i128;
    
    if !(0 + -(*arg2.byte_offset(0x1c8)))
    {
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_78, *arg2.byte_offset(0x1d0), *arg2.byte_offset(0x1d8));
        var_88 = var_70;
        var_90 = var_78;
    }
    else
    {
        alacritty::ipc::spawn_ipc_socket::_$u7b$$u7b$closure$u7d$$u7d$::h90ec401eeb5ba0d2(&var_90);
    }
    
    std::os::unix::net::listener::UnixListener::bind::h0d7793f5f7fb1ed2(&var_78, &var_90);
    
    if var_78 == 1
    {
        *arg1.byte_offset(8) = var_70;
        *arg1 = -0x8000000000000000;
        core::mem::drop::ha42964a555fb617b(&var_90);
        return core::ptr::drop_in_place$LT$winit..event_loop..EventLoopProxy$LT$alacritty..event..Event$GT$$GT$::h24ae1d3a938ce77b(arg3);
    }
    
    let rbp_1: i32 = *var_78[4];
    std::env::set_var::hd696746618852d1e("ALACRITTY_SOCKETglObjectLabelKHR", 0x10, var_88);
    let mut var_38: i128;
    
    if *arg2.byte_offset(0x1e2) != 0
    {
        var_38 = var_88;
        let mut var_48: *mut i128 = &var_38;
        let var_40_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        var_78 = &data_c82ec8;
        var_70 = 2;
        let mut var_58: i32;
        var_58 = 0;
        *var_70[8] = &var_48;
        let var_60_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    }
    
    let var_58_1: i32 = rbp_1;
    var_78 = *arg3;
    var_70 = *arg3.byte_offset(0x10);
    alacritty_terminal::thread::spawn_named::h24574652a96280a1(&var_38, &var_78);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h883787786a0c6ec5(
        &var_38);
    let result: i64 = *var_88[8];
    arg1[1] = result;
    *arg1 = var_90;
    result
}
