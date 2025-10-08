
  fn uu_tail::tail_file::h810e2a2864f554f6(arg1: *mut i64, arg2: *mut i8, arg3: *mut *mut i64, arg4: *mut i8, arg5: u64, arg6: *mut c_void, arg7: i64) -> u64

{
    let mut var_e8: i32;
    std::fs::metadata::h5c248dd9820946eb(&var_e8, arg4);
    let r13: i32 = var_e8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_e8);
    let mut rax_1: u64;
    let mut var_178: *mut *mut i64;
    let mut var_120: *mut i64;
    
    if r13 != 2
    {
        let mut var_130: *mut *mut c_void;
        let mut var_100: *const i8;
        
        if std::path::Path::is_dir::h02edbc48c38d7d9e(arg4, arg5) != 0
        {
            let var_108_1: u64 = arg5;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            let var_180_1: i64 = arg3[2];
            uu_tail::paths::HeaderPrinter::print_input::hb7a0117faf5241cb(arg2, arg3[1]);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_120, "Is a directoryerror reading '': …", 0xe);
            let mut rax_3: *mut *mut i64;
            let mut rdx_4: i64;
            rax_3 = uucore::util_name::h074417a1e6395129();
            var_178 = rax_3;
            let var_170_3: i64 = rdx_4;
            var_130 = &var_178;
            let var_128_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
            var_e8 = &data_5734a0;
            let var_e0_3: i64 = 2;
            let var_c8_3: i64 = 0;
            let var_d8_3: *mut *mut *mut c_void = &var_130;
            let var_d0_3: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e8);
            var_178 = arg3;
            let var_170_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_168_2: *mut *mut i64 = &var_120;
            let var_160_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_e8 = &data_5739b0;
            let var_e0_4: i64 = 3;
            let var_c8_4: i64 = 0;
            let var_d8_4: *mut *mut c_void = &var_178;
            let var_d0_4: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_e8);
            
            if *arg1.byte_offset(0x4c) != 2
            {
                let temp0_1: i8 = arg1[9];
                let mut rdx_6: *const i8 = 1;
                
                if temp0_1 == 0
                {
                    rdx_6 = "; giving up on this name' for re…";
                }
                
                let mut rax_4: i64 = 0x18;
                
                if temp0_1 != 0
                {
                    rax_4 = 0;
                }
                
                var_100 = rdx_6;
                let var_f8_1: i64 = rax_4;
                let mut rax_5: *mut *mut i64;
                let mut rdx_7: i64;
                rax_5 = uucore::util_name::h074417a1e6395129();
                var_178 = rax_5;
                let var_170_5: i64 = rdx_7;
                var_130 = &var_178;
                let var_128_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                var_e8 = &data_5734a0;
                let var_e0_5: i64 = 2;
                let var_c8_5: i64 = 0;
                let var_d8_5: *mut *mut *mut c_void = &var_130;
                let var_d0_5: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_e8);
                var_178 = arg3;
                let var_170_6: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                let var_168_3: *mut i64 = &var_100;
                let var_160_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                var_e8 = &data_5739e0;
                let var_e0_6: i64 = 3;
                let var_c8_6: i64 = 0;
                let var_d8_6: *mut *mut c_void = &var_178;
                let var_d0_6: i64 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_e8);
            }
            
            let rax_6: i8 = *arg6.byte_offset(0x8e);
            let mut rbx_1: u64;
            
            if rax_6 == 2 || (rax_6 & 1) == 0 || *arg6.byte_offset(0x8c) != 1
            {
                rbx_1 = 0;
            }
            else
            {
                let mut rax_7: u64;
                let mut rdx_9: *mut i8;
                rax_7 =
                    uu_tail::follow::watch::Observer::add_bad_path::h8be109911ee417aa(arg6, arg4);
                
                if rax_7 == 0
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(
                        &var_120);
                    return 0;
                }
                
                rbx_1 = rax_7;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::ha5fed46387940267(&var_120);
            return rbx_1;
        }
        
        if uu_tail::paths::Input::is_tailable::h4da1a9f07b663fa3(arg3) == 0
        {
            arg3[1];
            arg3[2];
            rax_1 = uu_tail::follow::watch::Observer::add_bad_path::h8be109911ee417aa(arg6, arg4);
        }
        else
        {
            std::fs::metadata::h5c248dd9820946eb(&var_e8, arg4);
            let r15_1: i64 = var_e8;
            let mut var_108: bool;
            let var_88: i64;
            
            if r15_1 != 2
            {
                var_108 = var_88 == 0;
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_e8);
            }
            std::fs::File::open::h45183e62b5972047(&var_130, arg4);
            
            if var_130 == 1
            {
                let var_128: i64;
                let mut rax_10: u64;
                let mut rdi_20: *mut i64;
                let mut rdx_14: i64;
                
                if std::io::error::Error::kind::h135fe00c4e7365f3(var_128) != 1
                {
                    var_e8 = var_128;
                    arg3[1];
                    arg3[2];
                    rax_10 = uu_tail::follow::watch::Observer::add_bad_path::h8be109911ee417aa(
                        arg6, arg4);
                    
                    if rax_10 == 0
                    {
                        return _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h5bae8a26a18f45c5();
                    }
                    
                    rdi_20 = &var_e8;
                }
                else
                {
                    let mut var_f0: i64 = var_128;
                    arg3[1];
                    arg3[2];
                    rax_10 = uu_tail::follow::watch::Observer::add_bad_path::h8be109911ee417aa(
                        arg6, arg4);
                    
                    if rax_10 == 0
                    {
                        var_100 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h5bae8a26a18f45c5();
                        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                        let mut rax_15: *mut i64;
                        let mut rdx_20: i64;
                        rax_15 = uucore::util_name::h074417a1e6395129();
                        var_120 = rax_15;
                        let var_118_2: i64 = rdx_20;
                        var_178 = &var_120;
                        let var_170_7: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                        let var_168_4: *const *const i8 = &var_100;
                        let var_160_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h3afc98c8e5846cc3;
                        var_e8 = &data_5736e0;
                        let var_e0_7: i64 = 3;
                        let var_c8_7: i64 = 0;
                        let var_d8_7: *mut *mut c_void = &var_178;
                        let var_d0_7: i64 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_e8);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::ha62dc2678d196b5c(var_100);
                        return 0;
                    }
                    
                    rdi_20 = &var_f0;
                }
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf9bb92bdb8e06921(rdi_20);
                return rax_10;
            }
            
            var_120 = *var_130[4];
            let rsi_8: i64 = arg3[1];
            let rdx_15: u64 = arg3[2];
            uu_tail::paths::HeaderPrinter::print_input::hb7a0117faf5241cb(arg2, rsi_8);
            let mut var_168: i64;
            let mut var_158_1: i128;
            let mut var_d8: i64;
            let mut var_c8: i64;
            
            if *arg1.byte_offset(0x4b) != 0
            {
                'label_4a702d:
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h293b79a640eb5f10(
                    &var_e8, var_120);
                var_158_1 = var_c8;
                var_168 = var_d8;
                var_178 = var_e8;
                let mut rax_13: u64;
                let mut rdx_17: i64;
                rax_13 = uu_tail::unbounded_tail::h4476cde5dd10c477(&var_178, arg1);
                
                if rax_13 != 0
                {
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::hdd2cb84096b06aab(&var_178);
                    return rax_13;
                }
            }
            else
            {
                let mut rsi_9: i64 = 0;
                
                if 0 + -(arg3[3])
                {
                    rsi_9 = arg7;
                }
                
                let mut rax_12: i8;
                let mut rdx_16: i64;
                rax_12 = _$LT$std..fs..File$u20$as$u20$uu_tail..paths..FileExtTail$GT$::is_seekable::h88acdb1e21fcb8bf(&var_120, rsi_9);
                
                if rax_12 == 0
                {
                    goto 'label_4a702d;
                }
                
                if r15_1 == 2
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                if (var_108 & 1) != 0
                {
                    goto 'label_4a702d;
                }
                
                uu_tail::bounded_tail::hbf5073ecc1238535(&var_120, arg1, rdx_16);
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h293b79a640eb5f10(
                    &var_e8, var_120);
                var_158_1 = var_c8;
                var_168 = var_d8;
                var_178 = var_e8;
            }
            
            var_c8 = var_158_1;
            var_d8 = var_168;
            var_e8 = var_178;
            rax_1 = uu_tail::follow::watch::Observer::add_path::h2513ec520b230a37(arg6, arg4, arg5, 
                rsi_8, rdx_15, alloc::boxed::Box$LT$T$GT$::new::hf1e01b4c89005b4b(&var_e8), 
                &data_573408, 1);
        }
    }
    else
    {
        uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
        let mut rax: *mut *mut i64;
        let mut rdx_1: i64;
        rax = uucore::util_name::h074417a1e6395129();
        var_178 = rax;
        let var_170_1: i64 = rdx_1;
        var_120 = &var_178;
        let var_118_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
        var_e8 = &data_5734a0;
        let var_e0_1: i64 = 2;
        let var_c8_1: i64 = 0;
        let var_d8_1: *mut *mut i64 = &var_120;
        let var_d0_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_e8);
        var_178 = arg3;
        let var_170_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let var_168_1: *mut *mut [i8; 0x98] = &data_573800;
        let var_160_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
        var_e8 = &data_573980;
        let var_e0_2: i64 = 3;
        let var_c8_2: i64 = 0;
        let var_d8_2: *mut i64 = &var_178;
        let var_d0_2: i64 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_e8);
        arg3[1];
        arg3[2];
        rax_1 = uu_tail::follow::watch::Observer::add_bad_path::h8be109911ee417aa(arg6, arg4);
    }
    
    if rax_1 != 0
    {
        return rax_1;
    }
    
    0
}
