
  int64_t* flealib::fleaserver::FleaServer::start::h683ff1272e8cc23d(int64_t arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    int64_t var_68 = arg2;
    int64_t var_60 = arg3;
    char const (** const var_e8)[0xc7];
    std::net::tcp::TcpListener::bind::h5f9b679d47e0f779(&var_e8);
    int32_t fd = core::result::Result$LT$T$C$E$GT$::unwrap::hc9ff85dc871ee6ff(&var_e8);
    core::result::Result$LT$T$C$E$GT$::expect::h97b316d058ec8231(
        std::os::unix::net::stream::UnixStream::set_nonblocking::h2f9d712ba68e5608(&fd, 1));
    int128_t var_48;
    flealib::fileserver::FileServer::new::h6bacdb3658abb825(&var_48);
    int128_t var_10d = var_48;
    var_e8 = 1;
    int64_t var_e0 = 1;
    int32_t var_d8 = 0;
    char var_d4 = 0;
    int128_t var_110;
    int128_t var_d3 = var_110;
    *var_d3[0xb] = *var_10d[8];
    int64_t var_38;
    int64_t var_c0 = var_38;
    int128_t* var_118 = alloc::boxed::Box$LT$T$GT$::new::h4e00f722ec7a6567(&var_e8);
    int64_t var_fd;
    int64_t* var_98;
    
    if (core::sync::atomic::atomic_load::h8980141092664382() >= 4)
    {
        var_98 = &var_68;
        int64_t (* var_90_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e99a2697242919d;
        var_e8 = &data_b0b3c0;
        int64_t var_e0_1 = 1;
        *var_d3[0xb] = 0;
        var_d8 = &var_98;
        *var_d3[3] = 1;
        int64_t rax_7 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b420);
        var_110 = "flealib::fleaserverReceived comm…";
        *var_10d[5] = 0x13;
        *var_10d[0xd] = "flealib::fleaserverReceived comm…";
        var_fd = 0x13;
        int64_t var_f0_1 = rax_7;
        log::__private_api::log::hd2d1d5843cf283e9(&var_e8, 4, &var_110);
    }
    
    int32_t* var_70 = &fd;
    int64_t* r15 = *arg4;
    
    while (true)
    {
        int32_t var_58;
        _$LT$std..net..tcp..Incoming$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0d557571d3ab98d(&var_58, &var_70);
        
        if (var_58 == 2)
            break;
        
        int128_t var_b8 = var_58;
        int64_t** var_a8;
        
        if (!var_b8)
        {
            int32_t var_11c = *var_b8[4];
            
            if (core::sync::atomic::atomic_load::h8980141092664382() >= 4)
            {
                std::net::tcp::TcpStream::peer_addr::h9ccf6949693ba95c(&var_e8, &var_11c);
                core::result::Result$LT$T$C$E$GT$::unwrap::h87ce7ab9bcf554f6(&var_98, &var_e8);
                var_a8 = &var_98;
                int64_t (* var_a0_1)(char* arg1) = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::hb8f0b665671134da;
                var_e8 = &data_b0b3d0;
                int64_t var_e0_3 = 1;
                *var_d3[0xb] = 0;
                var_d8 = &var_a8;
                *var_d3[3] = 1;
                int64_t rax_14 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b450);
                var_110 = "flealib::fleaserverReceived comm…";
                *var_10d[5] = 0x13;
                *var_10d[0xd] = "flealib::fleaserverReceived comm…";
                var_fd = 0x13;
                int64_t var_f0_3 = rax_14;
                log::__private_api::log::hd2d1d5843cf283e9(&var_e8, 4, &var_110);
            }
            
            int128_t* rax_15 = var_118;
            int64_t temp0_1 = *rax_15;
            *rax_15 += 1;
            int128_t* rax_16;
            int64_t temp1_1;
            
            if (temp0_1 > -1)
            {
                rax_16 = var_118;
                temp1_1 = *r15;
                *r15 += 1;
            }
            
            if (temp0_1 <= -1 || temp1_1 <= -1)
                trap(6);
            
            int32_t var_88_1 = var_11c;
            var_98 = rax_16;
            int64_t* var_90_3 = r15;
            var_d8 = -0x8000000000000000;
            var_e8 = nullptr;
            var_c0 = 0;
            std::thread::Builder::spawn_unchecked::h45926584b1cfb2db(&var_110, &var_e8, &var_98);
            core::result::Result$LT$T$C$E$GT$::expect::hba870ccf999f6cfd(&var_e8, &var_110);
            core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h3bc8a69c7987d810(&var_e8);
        }
        else
        {
            int64_t** r13_1 = *var_b8[8];
            char rax_9 = std::io::error::Error::kind::h7f0d5435ec1cf07f(r13_1);
            rbp = rax_9 != 0xd;
            
            if (rax_9 == 0xd)
            {
                if (!core::sync::atomic::atomic_load::h6dcfa43fca71c16d(&r15[2], 4))
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(
                        &*var_b8[8]);
                    break;
                }
                
                std::thread::sleep::h1a6eeffe1c923e1f(0, 0x5f5e100);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(
                    &*var_b8[8]);
            }
            else
            {
                var_a8 = r13_1;
                
                if (core::sync::atomic::atomic_load::h8980141092664382())
                {
                    var_98 = &var_a8;
                    int64_t (* var_90_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
                    var_e8 = &data_b0b3e0;
                    int64_t var_e0_2 = 1;
                    *var_d3[0xb] = 0;
                    var_d8 = &var_98;
                    *var_d3[3] = 1;
                    int64_t rax_11 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b480);
                    var_110 = "flealib::fleaserverReceived comm…";
                    *var_10d[5] = 0x13;
                    *var_10d[0xd] = "flealib::fleaserverReceived comm…";
                    var_fd = 0x13;
                    int64_t var_f0_2 = rax_11;
                    log::__private_api::log::hd2d1d5843cf283e9(&var_e8, 1, &var_110);
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_a8);
            }
        }
    }
    
    core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::ha1973ae5d6a4418d(fd);
    return core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..mutex..Mutex$LT$flealib..fileserver..FileServer$GT$$GT$$GT$::h4c49b4b49a1ee763(&var_118);
}
