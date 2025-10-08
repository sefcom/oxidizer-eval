
  int64_t alacritty::ipc::spawn_ipc_socket::h71ea705a2a85995b(int128_t* arg1, void* arg2, char* arg3)

{
    char const (** const var_90)[0xde];
    int128_t var_88;
    char const (** const var_78)[0xde];
    int128_t var_70;
    
    if (!(0 + -(*(arg2 + 0x1c8))))
    {
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_78, *(arg2 + 0x1d0), *(arg2 + 0x1d8));
        var_88 = var_70;
        var_90 = var_78;
    }
    else
        alacritty::ipc::spawn_ipc_socket::_$u7b$$u7b$closure$u7d$$u7d$::h90ec401eeb5ba0d2(&var_90);
    
    std::os::unix::net::listener::UnixListener::bind::h0d7793f5f7fb1ed2(&var_78, &var_90);
    
    if (var_78 == 1)
    {
        *(arg1 + 8) = var_70;
        *arg1 = -0x8000000000000000;
        core::mem::drop::ha42964a555fb617b(&var_90);
        return core::ptr::drop_in_place$LT$winit..event_loop..EventLoopProxy$LT$alacritty..event..Event$GT$$GT$::h24ae1d3a938ce77b(arg3);
    }
    
    int32_t rbp_1 = *var_78[4];
    std::env::set_var::hd696746618852d1e("ALACRITTY_SOCKETglObjectLabelKHR", 0x10, var_88);
    int128_t var_38;
    
    if (*(arg2 + 0x1e2))
    {
        var_38 = var_88;
        int128_t* var_48 = &var_38;
        uint64_t (* var_40_1)(int64_t* arg1, int64_t arg2) =
            _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
        var_78 = &data_c82ec8;
        var_70 = 2;
        int32_t var_58;
        var_58 = 0;
        *var_70[8] = &var_48;
        int64_t var_60_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_78);
    }
    
    int32_t var_58_1 = rbp_1;
    var_78 = *arg3;
    var_70 = *(arg3 + 0x10);
    alacritty_terminal::thread::spawn_named::h24574652a96280a1(&var_38, &var_78);
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h883787786a0c6ec5(
        &var_38);
    int64_t result = *var_88[8];
    arg1[1] = result;
    *arg1 = var_90;
    return result;
}
