
  fn uu_tac::tac::h53155ed94a8f718f(arg1: *mut i64, arg2: i64, arg3: i8, arg4: i32, arg5: i64, arg6: i64) -> u64

{
    let mut r12: *mut i64 = arg1;
    let mut var_58: *mut c_void;
    let mut var_1b8: *mut i64;
    let mut var_1b0: i128;
    let mut var_1a0: fn(arg1: *mut i64) -> i64;
    let mut var_118_1: i64;
    let mut var_110_1: i64;
    let mut var_108: *mut c_void;
    
    if arg4 == 0
    {
        var_118_1 = arg5;
        var_110_1 = arg6;
        var_58 = nullptr;
        
        if arg2 != 0
        {
            'label_512a3b:
            let r15_2: *mut c_void = &r12[arg2 * 2];
            let mut rax_1: *mut c_void = &r12[2];
            
            loop
            {
                let mut r14_1: *mut i8 = *r12;
                let mut rbp_1: u64 = r12[1];
                r12 = rax_1;
                let mut var_160: u64;
                let mut var_158: *mut *mut c_void;
                let mut var_100: i128;
                let mut rax_20: ssize_t;
                let mut var_198: u64;
                let mut var_180: u64;
                let mut var_170: i64;
                let mut var_150: *mut c_void;
                let mut var_140: u64;
                let mut var_138: *mut *mut c_void;
                let var_50: *mut c_void;
                let mut rdx_10: *mut c_void;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hab8282a0c369e8db(r14_1, rbp_1) == 0
                {
                    if std::path::Path::is_dir::h02edbc48c38d7d9e(r14_1, rbp_1) == 0
                    {
                        std::fs::metadata::h977e770cf0475bd2(&var_108, r14_1);
                        let rdi_16: *mut c_void = var_108;
                        let rsi_9: i64 = var_100;
                        
                        if rdi_16 == 2
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h87d9e5201f238624(2, rsi_9);
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hebdd75b9ead1e834(&var_1b8, r14_1, rbp_1);
                            let var_f0_5: i64 = *var_1b0[8];
                            var_100 = var_1b8;
                            var_108 = -0x8000000000000002;
                            var_198 = alloc::boxed::Box$LT$T$GT$::new::ha672082e776b9639(&var_108);
                            let var_190_3: *mut i64 = &data_633b90;
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                            let mut rax_13: u64;
                            let mut rdx_6: i64;
                            rax_13 = uucore::util_name::h074417a1e6395129();
                            var_180 = rax_13;
                            let var_178_3: i64 = rdx_6;
                            var_1b8 = &var_180;
                            var_1b0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hec198cae7a81ca5e;
                            *var_1b0[8] = &var_198;
                            var_1a0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hae86aa71df6110f8;
                            var_108 = &data_633b40;
                            var_100 = 3;
                            let var_e8_3: i64 = 0;
                            *var_100[8] = &var_1b8;
                            let var_f0_6: i64 = 2;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h1e65bce94a748903(var_198, var_190_3);
                            goto 'label_512ff0;
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h87d9e5201f238624(rdi_16, rsi_9);
                        uu_tac::try_mmap_path::h5a76dff90b159c96(&var_108, r14_1);
                        
                        if var_108 == 1
                        {
                            goto 'label_513003;
                        }
                        
                        core::ptr::drop_in_place$LT$core..option..Option$LT$memmap2..Mmap$GT$$GT$::h2c73f4b2e023142d(&var_108);
                        std::fs::read::h7a6d15f52b675d8c(&var_140, r14_1);
                        let rax_14: u64 = var_140;
                        
                        if rax_14 == -0x8000000000000000
                        {
                            var_1b8 = nullptr;
                            var_1b0 = r14_1;
                            *var_1b0[8] = rbp_1;
                            var_1a0 = 1;
                            var_198 = &var_1b8;
                            let var_190_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            var_108 = &data_451860;
                            var_100 = 1;
                            let var_e8_4: i64 = 0;
                            *var_100[8] = &var_198;
                            let var_f0_7: i64 = 1;
                            core::option::Option$LT$T$GT$::map_or_else::hdb7bb3d97b3e4765(&var_180, 
                                &var_108);
                            var_198 = var_180;
                            let var_188_1: i64 = var_170;
                            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_1b8, &var_198);
                            *var_100[8] = *var_1b0[8];
                            var_108 = var_1b8;
                            let var_f0_8: *mut *mut c_void = var_138;
                            var_150 = alloc::boxed::Box$LT$T$GT$::new::ha672082e776b9639(&var_108);
                            let var_148_1: *mut i64 = &data_633b90;
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                            let mut rax_18: u64;
                            let mut rdx_9: i64;
                            rax_18 = uucore::util_name::h074417a1e6395129();
                            var_180 = rax_18;
                            let var_178_4: i64 = rdx_9;
                            var_1b8 = &var_180;
                            var_1b0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hec198cae7a81ca5e;
                            *var_1b0[8] = &var_150;
                            var_1a0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hae86aa71df6110f8;
                            var_108 = &data_633b40;
                            var_100 = 3;
                            let var_e8_5: i64 = 0;
                            *var_100[8] = &var_1b8;
                            let var_f0_9: i64 = 2;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h1e65bce94a748903(var_150, var_148_1);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h249ab6a2cb081814(&var_198);
                            goto 'label_512ff0;
                        }
                        
                        r14_1 = 1;
                        rbp_1 = 0;
                        var_158 = var_138;
                        var_160 = rax_14;
                        rdx_10 = var_58;
                        let var_130: i64;
                        
                        if rdx_10 != 0
                        {
                            rax_20 = uu_tac::buffer_tac_regex::hd38e8f998c56a138(var_138, var_130, 
                                rdx_10, var_50, arg3);
                        }
                        else
                        {
                            rax_20 = uu_tac::buffer_tac::hf0c4fec0ee1a5c50(var_138, var_130, arg3, 
                                var_118_1, var_110_1);
                        }
                    }
                    else
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hebdd75b9ead1e834(&var_1b8, r14_1, rbp_1);
                        let var_f0_3: i64 = *var_1b0[8];
                        var_100 = var_1b8;
                        var_108 = -0x8000000000000001;
                        var_198 = alloc::boxed::Box$LT$T$GT$::new::ha672082e776b9639(&var_108);
                        let var_190_2: *mut i64 = &data_633b90;
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                        let mut rax_10: u64;
                        let mut rdx_3: i64;
                        rax_10 = uucore::util_name::h074417a1e6395129();
                        var_180 = rax_10;
                        let var_178_2: i64 = rdx_3;
                        var_1b8 = &var_180;
                        var_1b0 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hec198cae7a81ca5e;
                        *var_1b0[8] = &var_198;
                        var_1a0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hae86aa71df6110f8;
                        var_108 = &data_633b40;
                        var_100 = 3;
                        let var_e8_2: i64 = 0;
                        *var_100[8] = &var_1b8;
                        let var_f0_4: i64 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h1e65bce94a748903(var_198, var_190_2);
                        'label_512ff0:
                        rax_1 = &r12[2];
                        
                        if r12 == r15_2
                        {
                            break;
                        }
                        
                        continue;
                    }
                }
                else
                {
                    uu_tac::try_mmap_stdin::h0be38b2086ba8d6a(&var_108);
                    
                    if var_108 == 1
                    {
                        'label_513003:
                        let rbx_2: *mut *mut c_void = var_100;
                        let rsi_17: i64 = *var_100[8];
                        let var_128_1: *mut *mut c_void = rbx_2;
                        let var_120_1: i64 = rsi_17;
                        rbp_1 = 1;
                        r14_1 = nullptr;
                        rdx_10 = var_58;
                        
                        if rdx_10 != 0
                        {
                            rax_20 = uu_tac::buffer_tac_regex::hd38e8f998c56a138(rbx_2, rsi_17, 
                                rdx_10, var_50, arg3);
                        }
                        else
                        {
                            rax_20 = uu_tac::buffer_tac::hf0c4fec0ee1a5c50(rbx_2, rsi_17, arg3, 
                                var_118_1, var_110_1);
                        }
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$core..option..Option$LT$memmap2..Mmap$GT$$GT$::h2c73f4b2e023142d(&var_108);
                        var_180 = 0;
                        let var_178_1: *mut *mut c_void = 1;
                        var_170 = 0;
                        std::io::stdio::stdin::h9a05a2c3e7544b2a();
                        var_150 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
                        let mut rax_3: u64;
                        let mut rdx: i64;
                        rax_3 = _$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_to_end::h3553e0b49d623411(&var_150, &var_180);
                        
                        if (rax_3 & 1) == 0
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd261040404132a2b(rax_3, rdx);
                            var_160 = var_180;
                            r14_1 = 1;
                            rbp_1 = 0;
                            var_158 = var_178_1;
                            rdx_10 = var_58;
                            
                            if rdx_10 == 0
                            {
                                rax_20 = uu_tac::buffer_tac::hf0c4fec0ee1a5c50(var_178_1, var_170, 
                                    arg3, var_118_1, var_110_1);
                            }
                            else
                            {
                                rax_20 = uu_tac::buffer_tac_regex::hd38e8f998c56a138(var_178_1, 
                                    var_170, rdx_10, var_50, arg3);
                            }
                        }
                        else
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hebdd75b9ead1e834(&var_1b8, "stdin: \nInvalidRegexInvalidArgu…", 5);
                            *var_100[8] = *var_1b0[8];
                            var_108 = var_1b8;
                            let var_f0_1: i64 = rdx;
                            var_140 = alloc::boxed::Box$LT$T$GT$::new::ha672082e776b9639(&var_108);
                            var_138 = &data_633b90;
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                            let mut rax_6: u64;
                            let mut rdx_1: i64;
                            rax_6 = uucore::util_name::h074417a1e6395129();
                            var_198 = rax_6;
                            let var_190_1: i64 = rdx_1;
                            var_1b8 = &var_198;
                            var_1b0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hec198cae7a81ca5e;
                            *var_1b0[8] = &var_140;
                            var_1a0 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hae86aa71df6110f8;
                            var_108 = &data_633b40;
                            var_100 = 3;
                            let var_e8_1: i64 = 0;
                            *var_100[8] = &var_1b8;
                            let var_f0_2: i64 = 2;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_108);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h1e65bce94a748903(var_140, var_138);
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2c72cf2befd5329d(var_180, var_178_1);
                            rax_1 = &r12[2];
                            
                            if r12 == r15_2
                            {
                                break;
                            }
                            
                            continue;
                        }
                    }
                }
                
                if rax_20 != 0
                {
                    var_100 = rax_20;
                    var_108 = -0x8000000000000004;
                    let result: u64 = alloc::boxed::Box$LT$T$GT$::new::ha672082e776b9639(&var_108);
                    
                    if r14_1 != 0
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2c72cf2befd5329d(var_160, var_158);
                    }
                    
                    if rbp_1 != 0
                    {
                        core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h0d402d1e5054a59d();
                    }
                    
                    core::ptr::drop_in_place$LT$core..option..Option$LT$regex..regex..bytes..Regex$GT$$GT$::h079d4eb58debb0ff(&var_58);
                    return result;
                }
                
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::ha68f9a356af3219d(0);
                
                if r14_1 != 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h2c72cf2befd5329d(
                        var_160, var_158);
                }
                
                if rbp_1 != 0
                {
                    core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h0d402d1e5054a59d();
                }
                
                let mut rax_21: i32;
                rax_21 = r12 != r15_2;
                rax_1 = (rax_21 << 4) + r12;
                
                if r12 == r15_2
                {
                    break;
                }
            }
        }
    }
    else
    {
        regex::regex::bytes::Regex::new::h4d38d31a13e212fd(&var_1b8, arg5);
        
        if var_1b8 == 0
        {
            let var_f0_10: fn(arg1: *mut i64) -> i64 = var_1a0;
            let var_100_1: i128 = var_1b0;
            var_108 = -0x8000000000000000;
            return alloc::boxed::Box$LT$T$GT$::new::ha672082e776b9639(&var_108);
        }
        
        var_118_1 = arg5;
        var_110_1 = arg6;
        let var_48_1: i128 = var_1b0;
        var_58 = var_1b8;
        
        if arg2 != 0
        {
            goto 'label_512a3b;
        }
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$regex..regex..bytes..Regex$GT$$GT$::h079d4eb58debb0ff(&var_58);
    0
}
