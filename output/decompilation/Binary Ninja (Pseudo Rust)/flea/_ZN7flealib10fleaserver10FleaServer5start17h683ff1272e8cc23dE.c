
  fn flealib::fleaserver::FleaServer::start::h683ff1272e8cc23d(arg1: i64, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut i64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut var_68: i64 = arg2;
    let var_60: i64 = arg3;
    let mut var_e8: *mut *mut [i8; 0xc7];
    std::net::tcp::TcpListener::bind::h5f9b679d47e0f779(&var_e8);
    let mut fd: i32 = core::result::Result$LT$T$C$E$GT$::unwrap::hc9ff85dc871ee6ff(&var_e8);
    core::result::Result$LT$T$C$E$GT$::expect::h97b316d058ec8231(
        std::os::unix::net::stream::UnixStream::set_nonblocking::h2f9d712ba68e5608(&fd, 1));
    let mut var_48: i128;
    flealib::fileserver::FileServer::new::h6bacdb3658abb825(&var_48);
    let mut var_10d: i128 = var_48;
    var_e8 = 1;
    let var_e0: i64 = 1;
    let mut var_d8: i32 = 0;
    let var_d4: i8 = 0;
    let mut var_110: i128;
    let mut var_d3: i128 = var_110;
    *var_d3[0xb] = *var_10d[8];
    let var_38: i64;
    let mut var_c0: i64 = var_38;
    let mut var_118: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h4e00f722ec7a6567(&var_e8);
    let mut var_fd: i64;
    let mut var_98: *mut i64;
    
    if core::sync::atomic::atomic_load::h8980141092664382() >= 4
    {
        var_98 = &var_68;
        let var_90_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e99a2697242919d;
        var_e8 = &data_b0b3c0;
        let var_e0_1: i64 = 1;
        *var_d3[0xb] = 0;
        var_d8 = &var_98;
        *var_d3[3] = 1;
        let rax_7: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b420);
        var_110 = "flealib::fleaserverReceived comm…";
        *var_10d[5] = 0x13;
        *var_10d[0xd] = "flealib::fleaserverReceived comm…";
        var_fd = 0x13;
        let var_f0_1: i64 = rax_7;
        log::__private_api::log::hd2d1d5843cf283e9(&var_e8, 4, &var_110);
    }
    
    let mut var_70: *mut i32 = &fd;
    let r15: *mut i64 = *arg4;
    
    loop
    {
        let mut var_58: i32;
        _$LT$std..net..tcp..Incoming$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0d557571d3ab98d(&var_58, &var_70);
        
        if var_58 == 2
        {
            break;
        }
        
        let mut var_b8: i128 = var_58;
        let mut var_a8: *mut *mut i64;
        
        if var_b8 == 0
        {
            let mut var_11c: i32 = *var_b8[4];
            
            if core::sync::atomic::atomic_load::h8980141092664382() >= 4
            {
                std::net::tcp::TcpStream::peer_addr::h9ccf6949693ba95c(&var_e8, &var_11c);
                core::result::Result$LT$T$C$E$GT$::unwrap::h87ce7ab9bcf554f6(&var_98, &var_e8);
                var_a8 = &var_98;
                let var_a0_1: fn(arg1: *mut i8) -> i64 = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::hb8f0b665671134da;
                var_e8 = &data_b0b3d0;
                let var_e0_3: i64 = 1;
                *var_d3[0xb] = 0;
                var_d8 = &var_a8;
                *var_d3[3] = 1;
                let rax_14: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b450);
                var_110 = "flealib::fleaserverReceived comm…";
                *var_10d[5] = 0x13;
                *var_10d[0xd] = "flealib::fleaserverReceived comm…";
                var_fd = 0x13;
                let var_f0_3: i64 = rax_14;
                log::__private_api::log::hd2d1d5843cf283e9(&var_e8, 4, &var_110);
            }
            
            let rax_15: *mut i128 = var_118;
            let temp0_1: i64 = *rax_15;
            *rax_15 += 1;
            let mut rax_16: *mut i128;
            let mut temp1_1: i64;
            
            if temp0_1 > -1
            {
                rax_16 = var_118;
                temp1_1 = *r15;
                *r15 += 1;
            }
            
            if temp0_1 <= -1 || temp1_1 <= -1
            {
                trap(6);
            }
            
            let var_88_1: i32 = var_11c;
            var_98 = rax_16;
            let var_90_3: *mut i64 = r15;
            var_d8 = -0x8000000000000000;
            var_e8 = nullptr;
            var_c0 = 0;
            std::thread::Builder::spawn_unchecked::h45926584b1cfb2db(&var_110, &var_e8, &var_98);
            core::result::Result$LT$T$C$E$GT$::expect::hba870ccf999f6cfd(&var_e8, &var_110);
            core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h3bc8a69c7987d810(&var_e8);
        }
        else
        {
            let r13_1: *mut *mut i64 = *var_b8[8];
            let rax_9: i8 = std::io::error::Error::kind::h7f0d5435ec1cf07f(r13_1);
            rbp = rax_9 != 0xd;
            
            if rax_9 == 0xd
            {
                if core::sync::atomic::atomic_load::h6dcfa43fca71c16d(&r15[2], 4) == 0
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
                
                if core::sync::atomic::atomic_load::h8980141092664382() != 0
                {
                    var_98 = &var_a8;
                    let var_90_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
                    var_e8 = &data_b0b3e0;
                    let var_e0_2: i64 = 1;
                    *var_d3[0xb] = 0;
                    var_d8 = &var_98;
                    *var_d3[3] = 1;
                    let rax_11: i64 = log::__private_api::loc::he6f33e710a34adaf(&data_b0b480);
                    var_110 = "flealib::fleaserverReceived comm…";
                    *var_10d[5] = 0x13;
                    *var_10d[0xd] = "flealib::fleaserverReceived comm…";
                    var_fd = 0x13;
                    let var_f0_2: i64 = rax_11;
                    log::__private_api::log::hd2d1d5843cf283e9(&var_e8, 1, &var_110);
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96b79424257da29d(&var_a8);
            }
        }
    }
    
    core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::ha1973ae5d6a4418d(fd);
    core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..mutex..Mutex$LT$flealib..fileserver..FileServer$GT$$GT$$GT$::h4c49b4b49a1ee763(&var_118)
}
