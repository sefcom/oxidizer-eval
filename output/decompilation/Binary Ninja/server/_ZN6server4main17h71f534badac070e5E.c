
  int64_t server::main::h71f534badac070e5()

{
    char const (** const var_b0)[0x80];
    std::net::tcp::TcpListener::bind::h6878a6b6f0b0ddd4(&var_b0);
    int32_t fd = core::result::Result$LT$T$C$E$GT$::expect::h9fdd00db71c10f1a(&var_b0);
    var_b0 = &data_46b688;
    int64_t var_a8 = 1;
    char const* const var_a0 = "/rustc/3b1717c052de4a2dbdd3badb0…";
    int128_t var_98 = {0};
    std::io::stdio::_print::h64077f6090d28911(&var_b0);
    int32_t var_bc = 0;
    int32_t* var_b8 = &fd;
    
    while (true)
    {
        int32_t var_60;
        _$LT$std..net..tcp..Incoming$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf6f55b5493f73e35(&var_60, &var_b8);
        
        if (var_60 == 2)
            break;
        
        int32_t var_c0 = core::result::Result$LT$T$C$E$GT$::expect::h3dae975375e4873f(&var_60);
        std::net::tcp::TcpStream::peer_addr::h16381829ee6ca785(&var_b0, &var_c0);
        void var_50;
        core::result::Result$LT$T$C$E$GT$::unwrap::h37345e45b95a9fad(&var_50, &var_b0);
        void* var_80 = &var_50;
        int64_t (* var_78_1)(int16_t* arg1) = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::h08ec6da075bafa7b;
        int32_t* var_70_1 = &var_bc;
        uint64_t (* var_68_1)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h55f9e13eb244e3e4;
        var_b0 = &data_46b6b0;
        int64_t var_a8_1 = 3;
        *var_98[8] = 0;
        void** var_a0_1 = &var_80;
        var_98 = 2;
        std::io::stdio::_print::h64077f6090d28911(&var_b0);
        std::thread::spawn::hd809fa612a707511(&var_b0, var_c0);
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h99b68376bec15c1a(
            &var_b0);
        var_bc += 1;
    }
    
    return core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::haee64bd767160edc(fd);
}
