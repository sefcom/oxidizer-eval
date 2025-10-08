
  uint64_t uu_mv::move_files_into_dir::h52a820120b69cecf(int64_t arg1, int64_t arg2, char* arg3, uint64_t arg4, void* arg5)

{
    int64_t rax;
    int64_t rdx;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::h74a0374ad3b4d319();
    void var_60;
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hb8b43496c1fc3f5b(&var_60, 
        arg2, rax, rdx);
    uint64_t result;
    int128_t var_250;
    void*** var_240;
    uint64_t* var_1c8;
    void** var_138;
    int128_t var_130;
    
    if (!std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4))
    {
        var_1c8 = 1;
        char* var_1c0_1 = arg3;
        uint64_t var_1b8_1 = arg4;
        char var_1b0_1 = 1;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(
            &var_250, &var_1c8);
        void*** var_120_1 = var_240;
        var_130 = var_250;
        var_138 = 6;
        result = alloc::boxed::Box$LT$T$GT$::new::h1fc079de2e7d2ae0(&var_138);
    }
    else
    {
        void** var_230;
        void* const var_1e8;
        
        if (!*(arg5 + 0x33))
        {
            var_230 = nullptr;
            label_48c00d:
            var_1e8 = nullptr;
            
            if (arg2)
                goto label_48c027;
        }
        else
        {
            var_230 = indicatif::multi::MultiProgress::new::hc304bb66ea04ff14();
            
            if (arg2 <= 1)
                goto label_48c00d;
            
            indicatif::progress_bar::ProgressBar::new::h418645bcba389941(&var_250, arg2);
            indicatif::style::ProgressStyle::with_template::h894553d49f3431cc(&var_138, 
                "moving {msg} {wide_bar} {pos}/{l…", 0x23);
            core::result::Result$LT$T$C$E$GT$::unwrap::h5857c2b3993b5cd1(&var_1c8, &var_138);
            indicatif::multi::MultiProgress::add::h73b460dac8bde2c8(&var_1c8, &var_230, &var_138, 
                indicatif::progress_bar::ProgressBar::with_style::hca9219836070d110(&var_138, 
                    &var_250, &var_1c8));
            var_1e8 = var_1c8;
            int64_t var_1b8;
            int64_t var_1d8_1 = var_1b8;
            label_48c027:
            char rcx_2 = *(arg5 + 0x36);
            int64_t rdx_5 = arg2 * 0x18;
            int64_t rbp_1 = 0;
            uint32_t rax_10 = *(arg5 + 0x30);
            
            while (true)
            {
                char* rbx_2 = *(arg1 + rbp_1 + 8);
                uint64_t r14_1 = *(arg1 + rbp_1 + 0x10);
                std::fs::metadata::h12bb7891128f5212(&var_138, rbx_2);
                int32_t r15_1 = var_138;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6bf03d231ff2ee2d(&var_138);
                int64_t var_228;
                int64_t var_220;
                char var_1b0;
                
                if (r15_1 != 2)
                {
                    if (var_1e8)
                    {
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_138, rbx_2, 
                            r14_1);
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h721788692edddc31(&var_1c8, var_130, *var_130[8]);
                        indicatif::progress_bar::ProgressBar::set_message::h07e47f81a78777d2(
                            var_1e8, &var_1c8);
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h0ec8a001aa281541(&var_138);
                    }
                    
                    int64_t rax_14;
                    int64_t rdx_10;
                    rax_14 = std::path::Path::file_name::h6d40d88bf3fb287a(rbx_2, r14_1);
                    uint64_t var_260;
                    
                    if (!rax_14)
                    {
                        var_1c8 = 1;
                        char* var_1c0_5 = rbx_2;
                        uint64_t var_1b8_5 = r14_1;
                        var_1b0 = 1;
                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(&var_250, &var_1c8);
                        void*** var_120_4 = var_240;
                        var_130 = var_250;
                        var_138 = nullptr;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                        uint64_t rax_21;
                        int64_t rdx_15;
                        rax_21 = uucore::util_name::h074417a1e6395129();
                        var_260 = rax_21;
                        int64_t var_258_2 = rdx_15;
                        var_250 = &var_260;
                        *var_250[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
                        var_240 = &var_138;
                        int64_t (* var_238_2)(int64_t* arg1, int64_t* arg2) = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::hd5391f0b6b6b4353;
                        var_1c8 = &data_5416a0;
                        int64_t var_1c0_6 = 3;
                        int64_t var_1a8_2 = 0;
                        int128_t* var_1b8_6 = &var_250;
                        var_1b0 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_1c8);
                    }
                    else
                    {
                        std::path::Path::join::h2b3f1fa38f5fea2a(&var_228, arg3, arg4, rax_14);
                        void* rax_15;
                        rax_15 = !hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h845c6ea64d3adcbc(&var_60, &var_228);
                        rax_15 |= rcx_2 == 2;
                        
                        if (!rax_15)
                        {
                            var_260 = var_220;
                            var_250 = rbx_2;
                            *var_250[8] = r14_1;
                            var_1c8 = &var_260;
                            uint64_t (* var_1c0_7)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                            int128_t* var_1b8_7 = &var_250;
                            var_1b0 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                            var_138 = &data_541958;
                            var_130 = 3;
                            int64_t var_118_2 = 0;
                            *var_130[8] = &var_1c8;
                            int64_t var_120_5 = 2;
                            int128_t var_78;
                            core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_78, 
                                &var_138);
                            var_120_5 = 1;
                            var_138 = var_78;
                            int64_t var_68;
                            *var_130[8] = var_68;
                            uint64_t rax_23 =
                                alloc::boxed::Box$LT$T$GT$::new::hbfa620bc4db9cfd6(&var_138);
                            var_260 = rax_23;
                            int64_t* var_258_3 = &data_541810;
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::h8679b4fbf35c6f91(rax_23));
                            int64_t rax_25;
                            int64_t rdx_16;
                            rax_25 = uucore::util_name::h074417a1e6395129();
                            var_250 = rax_25;
                            *var_250[8] = rdx_16;
                            var_1c8 = &var_250;
                            int64_t (* var_1c0_8)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
                            uint64_t* var_1b8_8 = &var_260;
                            var_1b0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4dc8bd895e28ea5e;
                            var_138 = &data_5416a0;
                            var_130 = 3;
                            int64_t var_118_3 = 0;
                            *var_130[8] = &var_1c8;
                            int64_t var_120_6 = 2;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h72819e63495e4e03(var_260, var_258_3);
                        }
                        else
                        {
                            uint64_t rax_17;
                            int64_t* rdx_13;
                            rax_17 = uu_mv::assert_not_same_file::hb2a62158ed5fb73d(rbx_2, r14_1, 
                                arg3, arg4, 1, rax_10, rcx_2);
                            
                            if (!rax_17)
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h67f2bf7536cb2259(0, rdx_13);
                                void** r9_2 = var_230;
                                
                                if (r9_2)
                                    r9_2 = &var_230;
                                
                                uint64_t var_218;
                                void** rax_26;
                                int64_t rdx_18;
                                rax_26 = uu_mv::rename::h274fbdeb4e433295(rbx_2, r14_1, var_220, 
                                    var_218, arg5, r9_2);
                                void** var_210 = rax_26;
                                
                                if (rax_26)
                                {
                                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hce76bd1bb4908539(&var_138, &var_210, rdx_18);
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8db761034a9103d6(&var_138);
                                    
                                    if (!*var_130[8])
                                    {
                                        var_138 = var_210;
                                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96abb429d2198cc4(&var_138);
                                    }
                                    else
                                    {
                                        uint64_t rax_27 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h9288aab652e89fb1();
                                        void** rdi_38 = var_230;
                                        
                                        if (!rdi_38)
                                        {
                                            var_260 = rax_27;
                                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(
                                                1);
                                            int64_t rax_29;
                                            int64_t rdx_20;
                                            rax_29 = uucore::util_name::h074417a1e6395129();
                                            var_250 = rax_29;
                                            *var_250[8] = rdx_20;
                                            var_1c8 = &var_250;
                                            int64_t (* var_1c0_9)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
                                            uint64_t* var_1b8_9 = &var_260;
                                            var_1b0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hba62e9a38ac19092;
                                            var_138 = &data_5416a0;
                                            var_130 = 3;
                                            int64_t var_118_4 = 0;
                                            *var_130[8] = &var_1c8;
                                            int64_t var_120_7 = 2;
                                            std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h3366d4c01e86c110(var_260);
                                        }
                                        else
                                            indicatif::multi::MultiProgress::suspend::h799f6401970c1a0f(rdi_38, rax_27);
                                    }
                                }
                                
                                if (var_1e8)
                                    indicatif::progress_bar::ProgressBar::inc::h6821cd6efd4a2245(
                                        &var_1e8, 1);
                                
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h721788692edddc31(&var_138, var_220, var_218);
                                int64_t var_1b8_10 = *var_130[8];
                                var_1c8 = var_138;
                                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he7e3cb341437ecbb(&var_60, &var_1c8);
                            }
                            else
                            {
                                var_260 = rax_17;
                                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdx_13[0xb](
                                    rax_17));
                                int64_t rax_19;
                                int64_t rdx_14;
                                rax_19 = uucore::util_name::h074417a1e6395129();
                                var_250 = rax_19;
                                *var_250[8] = rdx_14;
                                var_1c8 = &var_250;
                                int64_t (* var_1c0_4)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
                                uint64_t* var_1b8_4 = &var_260;
                                var_1b0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4dc8bd895e28ea5e;
                                var_138 = &data_5416a0;
                                var_130 = 3;
                                int64_t var_118_1 = 0;
                                *var_130[8] = &var_1c8;
                                int64_t var_120_3 = 2;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h72819e63495e4e03(var_260, rdx_13);
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(
                            var_228, var_220);
                        rbp_1 += 0x18;
                        
                        if (rdx_5 == rbp_1)
                            break;
                        
                        continue;
                    }
                }
                else
                {
                    var_1c8 = 1;
                    char* var_1c0_2 = rbx_2;
                    uint64_t var_1b8_2 = r14_1;
                    var_1b0 = 1;
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(&var_250, &var_1c8);
                    void*** var_120_2 = var_240;
                    var_130 = var_250;
                    var_138 = nullptr;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                    int64_t rax_13;
                    int64_t rdx_7;
                    rax_13 = uucore::util_name::h074417a1e6395129();
                    var_228 = rax_13;
                    var_220 = rdx_7;
                    var_250 = &var_228;
                    *var_250[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
                    var_240 = &var_138;
                    int64_t (* var_238_1)(int64_t* arg1, int64_t* arg2) = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::hd5391f0b6b6b4353;
                    var_1c8 = &data_5416a0;
                    int64_t var_1c0_3 = 3;
                    int64_t var_1a8_1 = 0;
                    int128_t* var_1b8_3 = &var_250;
                    var_1b0 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_1c8);
                }
                core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hc3655abd5fe82822(&var_138);
                rbp_1 += 0x18;
                
                if (rdx_5 == rbp_1)
                    break;
            }
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h1e5753e0444693da(&var_1e8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..multi..MultiProgress$GT$$GT$::h57497905bd7a541a(&var_230);
        result = 0;
    }
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h08b3702a79272395(&var_60);
    return result;
}
