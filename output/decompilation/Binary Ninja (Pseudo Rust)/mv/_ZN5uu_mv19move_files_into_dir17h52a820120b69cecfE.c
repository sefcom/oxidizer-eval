
  fn uu_mv::move_files_into_dir::h52a820120b69cecf(arg1: i64, arg2: i64, arg3: *mut i8, arg4: u64, arg5: *mut c_void) -> u64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::h74a0374ad3b4d319();
    let mut var_60: ();
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::hb8b43496c1fc3f5b(&var_60, 
        arg2, rax, rdx);
    let mut result: u64;
    let mut var_250: i128;
    let mut var_240: *mut *mut *mut c_void;
    let mut var_1c8: *mut u64;
    let mut var_138: *mut *mut c_void;
    let mut var_130: i128;
    
    if std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4) == 0
    {
        var_1c8 = 1;
        let var_1c0_1: *mut i8 = arg3;
        let var_1b8_1: u64 = arg4;
        let var_1b0_1: i8 = 1;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(
            &var_250, &var_1c8);
        let var_120_1: *mut *mut *mut c_void = var_240;
        var_130 = var_250;
        var_138 = 6;
        result = alloc::boxed::Box$LT$T$GT$::new::h1fc079de2e7d2ae0(&var_138);
    }
    else
    {
        let mut var_230: *mut *mut c_void;
        let mut var_1e8: *mut c_void;
        
        if *arg5.byte_offset(0x33) == 0
        {
            var_230 = nullptr;
            'label_48c00d:
            var_1e8 = nullptr;
            
            if arg2 != 0
            {
                goto 'label_48c027;
            }
        }
        else
        {
            var_230 = indicatif::multi::MultiProgress::new::hc304bb66ea04ff14();
            
            if arg2 <= 1
            {
                goto 'label_48c00d;
            }
            
            indicatif::progress_bar::ProgressBar::new::h418645bcba389941(&var_250, arg2);
            indicatif::style::ProgressStyle::with_template::h894553d49f3431cc(&var_138, 
                "moving {msg} {wide_bar} {pos}/{l…", 0x23);
            core::result::Result$LT$T$C$E$GT$::unwrap::h5857c2b3993b5cd1(&var_1c8, &var_138);
            indicatif::multi::MultiProgress::add::h73b460dac8bde2c8(&var_1c8, &var_230, &var_138, 
                indicatif::progress_bar::ProgressBar::with_style::hca9219836070d110(&var_138, 
                    &var_250, &var_1c8));
            var_1e8 = var_1c8;
            let var_1b8: i64;
            let var_1d8_1: i64 = var_1b8;
            'label_48c027:
            let rcx_2: i8 = *arg5.byte_offset(0x36);
            let rdx_5: i64 = arg2 * 0x18;
            let mut rbp_1: i64 = 0;
            let rax_10: u32 = *arg5.byte_offset(0x30);
            
            loop
            {
                let rbx_2: *mut i8 = *(arg1 + rbp_1 + 8);
                let r14_1: u64 = *(arg1 + rbp_1 + 0x10);
                std::fs::metadata::h12bb7891128f5212(&var_138, rbx_2);
                let r15_1: i32 = var_138;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h6bf03d231ff2ee2d(&var_138);
                let mut var_228: i64;
                let mut var_220: i64;
                let mut var_1b0: i8;
                
                if r15_1 != 2
                {
                    if var_1e8 != 0
                    {
                        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_138, rbx_2, 
                            r14_1);
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h721788692edddc31(&var_1c8, var_130, *var_130[8]);
                        indicatif::progress_bar::ProgressBar::set_message::h07e47f81a78777d2(
                            var_1e8, &var_1c8);
                        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h0ec8a001aa281541(&var_138);
                    }
                    
                    let mut rax_14: i64;
                    let mut rdx_10: i64;
                    rax_14 = std::path::Path::file_name::h6d40d88bf3fb287a(rbx_2, r14_1);
                    let mut var_260: u64;
                    
                    if rax_14 == 0
                    {
                        var_1c8 = 1;
                        let var_1c0_5: *mut i8 = rbx_2;
                        let var_1b8_5: u64 = r14_1;
                        var_1b0 = 1;
                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(&var_250, &var_1c8);
                        let var_120_4: *mut *mut *mut c_void = var_240;
                        var_130 = var_250;
                        var_138 = nullptr;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                        let mut rax_21: u64;
                        let mut rdx_15: i64;
                        rax_21 = uucore::util_name::h074417a1e6395129();
                        var_260 = rax_21;
                        let var_258_2: i64 = rdx_15;
                        var_250 = &var_260;
                        *var_250[8] =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
                        var_240 = &var_138;
                        let var_238_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::hd5391f0b6b6b4353;
                        var_1c8 = &data_5416a0;
                        let var_1c0_6: i64 = 3;
                        let var_1a8_2: i64 = 0;
                        let var_1b8_6: *mut i128 = &var_250;
                        var_1b0 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_1c8);
                    }
                    else
                    {
                        std::path::Path::join::h2b3f1fa38f5fea2a(&var_228, arg3, arg4, rax_14);
                        let mut rax_15: *mut c_void;
                        rax_15 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h845c6ea64d3adcbc(&var_60, &var_228) == 0;
                        rax_15 |= rcx_2 == 2;
                        
                        if rax_15 == 0
                        {
                            var_260 = var_220;
                            var_250 = rbx_2;
                            *var_250[8] = r14_1;
                            var_1c8 = &var_260;
                            let var_1c0_7: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                            let var_1b8_7: *mut i128 = &var_250;
                            var_1b0 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                            var_138 = &data_541958;
                            var_130 = 3;
                            let var_118_2: i64 = 0;
                            *var_130[8] = &var_1c8;
                            let mut var_120_5: i64 = 2;
                            let mut var_78: i128;
                            core::option::Option$LT$T$GT$::map_or_else::h26cd0638306e3785(&var_78, 
                                &var_138);
                            var_120_5 = 1;
                            var_138 = var_78;
                            let var_68: i64;
                            *var_130[8] = var_68;
                            let rax_23: u64 =
                                alloc::boxed::Box$LT$T$GT$::new::hbfa620bc4db9cfd6(&var_138);
                            var_260 = rax_23;
                            let var_258_3: *mut i64 = &data_541810;
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(_$LT$uucore..mods..error..UUsageError$u20$as$u20$uucore..mods..error..UError$GT$::code::h8679b4fbf35c6f91(rax_23));
                            let mut rax_25: i64;
                            let mut rdx_16: i64;
                            rax_25 = uucore::util_name::h074417a1e6395129();
                            var_250 = rax_25;
                            *var_250[8] = rdx_16;
                            var_1c8 = &var_250;
                            let var_1c0_8: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
                            let var_1b8_8: *mut u64 = &var_260;
                            var_1b0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4dc8bd895e28ea5e;
                            var_138 = &data_5416a0;
                            var_130 = 3;
                            let var_118_3: i64 = 0;
                            *var_130[8] = &var_1c8;
                            let var_120_6: i64 = 2;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h72819e63495e4e03(var_260, var_258_3);
                        }
                        else
                        {
                            let mut rax_17: u64;
                            let mut rdx_13: *mut i64;
                            rax_17 = uu_mv::assert_not_same_file::hb2a62158ed5fb73d(rbx_2, r14_1, 
                                arg3, arg4, 1, rax_10, rcx_2);
                            
                            if rax_17 == 0
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h67f2bf7536cb2259(0, rdx_13);
                                let mut r9_2: *mut *mut c_void = var_230;
                                
                                if r9_2 != 0
                                {
                                    r9_2 = &var_230;
                                }
                                
                                let var_218: u64;
                                let mut rax_26: *mut *mut c_void;
                                let mut rdx_18: i64;
                                rax_26 = uu_mv::rename::h274fbdeb4e433295(rbx_2, r14_1, var_220, 
                                    var_218, arg5, r9_2);
                                let mut var_210: *mut *mut c_void = rax_26;
                                
                                if rax_26 != 0
                                {
                                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hce76bd1bb4908539(&var_138, &var_210, rdx_18);
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8db761034a9103d6(&var_138);
                                    
                                    if *var_130[8] == 0
                                    {
                                        var_138 = var_210;
                                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h96abb429d2198cc4(&var_138);
                                    }
                                    else
                                    {
                                        let rax_27: u64 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h9288aab652e89fb1();
                                        let rdi_38: *mut *mut c_void = var_230;
                                        
                                        if rdi_38 == 0
                                        {
                                            var_260 = rax_27;
                                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(
                                                1);
                                            let mut rax_29: i64;
                                            let mut rdx_20: i64;
                                            rax_29 = uucore::util_name::h074417a1e6395129();
                                            var_250 = rax_29;
                                            *var_250[8] = rdx_20;
                                            var_1c8 = &var_250;
                                            let var_1c0_9: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
                                            let var_1b8_9: *mut u64 = &var_260;
                                            var_1b0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hba62e9a38ac19092;
                                            var_138 = &data_5416a0;
                                            var_130 = 3;
                                            let var_118_4: i64 = 0;
                                            *var_130[8] = &var_1c8;
                                            let var_120_7: i64 = 2;
                                            std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h3366d4c01e86c110(var_260);
                                        }
                                        else
                                        {
                                            indicatif::multi::MultiProgress::suspend::h799f6401970c1a0f(rdi_38, rax_27);
                                        }
                                    }
                                }
                                
                                if var_1e8 != 0
                                {
                                    indicatif::progress_bar::ProgressBar::inc::h6821cd6efd4a2245(
                                        &var_1e8, 1);
                                }
                                
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h721788692edddc31(&var_138, var_220, var_218);
                                let var_1b8_10: i64 = *var_130[8];
                                var_1c8 = var_138;
                                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he7e3cb341437ecbb(&var_60, &var_1c8);
                            }
                            else
                            {
                                var_260 = rax_17;
                                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdx_13[0xb](
                                    rax_17));
                                let mut rax_19: i64;
                                let mut rdx_14: i64;
                                rax_19 = uucore::util_name::h074417a1e6395129();
                                var_250 = rax_19;
                                *var_250[8] = rdx_14;
                                var_1c8 = &var_250;
                                let var_1c0_4: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
                                let var_1b8_4: *mut u64 = &var_260;
                                var_1b0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4dc8bd895e28ea5e;
                                var_138 = &data_5416a0;
                                var_130 = 3;
                                let var_118_1: i64 = 0;
                                *var_130[8] = &var_1c8;
                                let var_120_3: i64 = 2;
                                std::io::stdio::_eprint::h57899770eacec2ad(&var_138);
                                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h72819e63495e4e03(var_260, rdx_13);
                            }
                        }
                        
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7ff9893d52172353(
                            var_228, var_220);
                        rbp_1 += 0x18;
                        
                        if rdx_5 == rbp_1
                        {
                            break;
                        }
                        
                        continue;
                    }
                }
                else
                {
                    var_1c8 = 1;
                    let var_1c0_2: *mut i8 = rbx_2;
                    let var_1b8_2: u64 = r14_1;
                    var_1b0 = 1;
                    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h72cb907f66b31c22(&var_250, &var_1c8);
                    let var_120_2: *mut *mut *mut c_void = var_240;
                    var_130 = var_250;
                    var_138 = nullptr;
                    uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                    let mut rax_13: i64;
                    let mut rdx_7: i64;
                    rax_13 = uucore::util_name::h074417a1e6395129();
                    var_228 = rax_13;
                    var_220 = rdx_7;
                    var_250 = &var_228;
                    *var_250[8] =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h553019366b827b87;
                    var_240 = &var_138;
                    let var_238_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$uu_mv..error..MvError$u20$as$u20$core..fmt..Display$GT$::fmt::hd5391f0b6b6b4353;
                    var_1c8 = &data_5416a0;
                    let var_1c0_3: i64 = 3;
                    let var_1a8_1: i64 = 0;
                    let var_1b8_3: *mut i128 = &var_250;
                    var_1b0 = 2;
                    std::io::stdio::_eprint::h57899770eacec2ad(&var_1c8);
                }
                core::ptr::drop_in_place$LT$uu_mv..error..MvError$GT$::hc3655abd5fe82822(&var_138);
                rbp_1 += 0x18;
                
                if rdx_5 == rbp_1
                {
                    break;
                }
            }
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..progress_bar..ProgressBar$GT$$GT$::h1e5753e0444693da(&var_1e8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$indicatif..multi..MultiProgress$GT$$GT$::h57497905bd7a541a(&var_230);
        result = 0;
    }
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$std..path..PathBuf$GT$$GT$::h08b3702a79272395(&var_60);
    result
}
