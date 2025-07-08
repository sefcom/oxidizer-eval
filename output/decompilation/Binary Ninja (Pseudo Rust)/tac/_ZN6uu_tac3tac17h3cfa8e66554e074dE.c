
  fn uu_tac::tac::h3cfa8e66554e074d(arg1: i64, arg2: i64, arg3: i8, arg4: i32, arg5: i64, arg6: i64) -> *mut i128

{
    let mut var_210: *mut *mut i128;
    let mut var_208: i128;
    let mut var_1f8: fn(arg1: *mut i64) -> i64;
    let mut var_140_1: i64;
    let mut var_138: *mut c_void;
    let mut var_88: *mut c_void;
    
    if arg4 == 0
    {
        var_140_1 = arg6;
        var_88 = nullptr;
    }
    else
    {
        regex::regex::bytes::Regex::new::h0f09d91ae51aad3e(&var_210, arg5);
        
        if var_210 == 0
        {
            let var_120_10: fn(arg1: *mut i64) -> i64 = var_1f8;
            let var_130_1: i128 = var_208;
            var_138 = -0x8000000000000000;
            return alloc::boxed::Box$LT$T$GT$::new::h8d1d49c9faffb5d7(&var_138);
        }
        
        var_140_1 = arg6;
        let var_78_1: i128 = var_208;
        var_88 = var_210;
    }
    
    let mut var_58: i64 = arg1;
    let var_50_1: i64 = (arg2 << 4) + arg1;
    
    for let mut i: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7ad9d1140a17634c(&var_58); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7ad9d1140a17634c(&var_58)
    {
        let mut rbp_2: *mut i8 = *i;
        let r13_1: u64 = i[1];
        let mut var_1f0: *mut i128;
        let mut var_1e8: *mut i64;
        let var_1e0: i64;
        let mut var_1d8: *mut i128;
        let mut var_1b0: *mut i128;
        let mut var_1a0: *mut c_void;
        let mut var_190: *mut i128;
        let mut var_188: *mut i64;
        let mut var_168: i128;
        let mut var_130: *mut *mut c_void;
        let mut rbp_1: *mut i64;
        let mut r12_1: i8;
        let mut r13_2: i64;
        let mut r14_1: i8;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2c09e257dce780d1(rbp_2, r13_1, "-InvalidRegexInvalidArgumentFile…", 1) == 0
        {
            if std::path::Path::is_dir::h9ac0db933706da51(rbp_2, r13_1) == 0
            {
                std::fs::metadata::haf90637f419ddc57(&var_138, rbp_2);
                let rdi_11: *mut c_void = var_138;
                
                if rdi_11 != 2
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h896ad78236a10e00(rdi_11, var_130);
                    uu_tac::try_mmap_path::h01ee297263e394e5(&var_190);
                    
                    if var_190 != 0
                    {
                        rbp_1 = var_188;
                        let var_180: i64;
                        r13_2 = var_180;
                        goto 'label_59fff9;
                    }
                    
                    std::fs::read::hfdbc770825310844(&var_1f0, rbp_2);
                    
                    if var_1f0 != -0x8000000000000000
                    {
                        var_168 = var_1f0;
                        r13_2 = var_1e0;
                        let var_158_2: i64 = r13_2;
                        rbp_1 = *var_168[8];
                        r12_1 = 1;
                        
                        if var_190 != 0
                        {
                            core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h9c73bf5007d11635();
                        }
                        
                        'label_5a041a:
                        r14_1 = 0;
                        goto 'label_5a041d;
                    }
                    
                    var_210 = nullptr;
                    var_208 = rbp_2;
                    *var_208[8] = r13_1;
                    var_1f8 = 1;
                    var_1d8 = &var_210;
                    let var_1d0_4: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_138 = &data_4636b0;
                    var_130 = 1;
                    let var_118_4: i64 = 0;
                    var_130 = &var_1d8;
                    let var_120_7: i64 = 1;
                    let mut var_48: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h375669e800639459(&var_48, 
                        &var_138);
                    var_1d8 = var_48;
                    let var_38: i64;
                    let var_1c8_2: i64 = var_38;
                    rbp_2 = 1;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_210, &var_1d8);
                    var_130 = *var_208[8];
                    var_138 = var_210;
                    let var_120_8: *mut i64 = var_1e8;
                    var_1a0 = alloc::boxed::Box$LT$T$GT$::new::h8d1d49c9faffb5d7(&var_138);
                    let var_198_1: *mut i64 = &data_6c8b70;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    let mut rax_18: *mut i128;
                    let mut rdx_12: i64;
                    rax_18 = uucore::util_name::h60d842bf27b05e82();
                    var_1b0 = rax_18;
                    let var_1a8_2: i64 = rdx_12;
                    var_210 = &var_1b0;
                    var_208 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9ea929f45edcb0d0;
                    *var_208[8] = &var_1a0;
                    var_1f8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4f1ed2bd277e0642;
                    var_138 = &data_6c8b08;
                    var_130 = 3;
                    let var_118_5: i64 = 0;
                    var_130 = &var_210;
                    let var_120_9: i64 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_138);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h5aa08d1e1bf905c3(var_1a0, var_198_1);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2febd99232a4a33f(
                        &var_1d8);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$memmap2..Mmap$GT$$GT$::hce1e60b57f82e2de(&var_190);
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h896ad78236a10e00(2, var_130);
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3d9e818b85d2e5c6(
                        &var_210, rbp_2, r13_1);
                    let var_120_3: i64 = *var_208[8];
                    var_130 = var_210;
                    var_138 = -0x8000000000000002;
                    var_1f0 = alloc::boxed::Box$LT$T$GT$::new::h8d1d49c9faffb5d7(&var_138);
                    var_1e8 = &data_6c8b70;
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    let mut rax_7: *mut i128;
                    let mut rdx_5: i64;
                    rax_7 = uucore::util_name::h60d842bf27b05e82();
                    var_1d8 = rax_7;
                    let var_1d0_2: i64 = rdx_5;
                    var_210 = &var_1d8;
                    var_208 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9ea929f45edcb0d0;
                    *var_208[8] = &var_1f0;
                    var_1f8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4f1ed2bd277e0642;
                    var_138 = &data_6c8b08;
                    var_130 = 3;
                    let var_118_2: i64 = 0;
                    var_130 = &var_210;
                    let var_120_4: i64 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_138);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h5aa08d1e1bf905c3(var_1f0, var_1e8);
                }
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3d9e818b85d2e5c6(
                    &var_210, rbp_2, r13_1);
                let var_120_1: i64 = *var_208[8];
                var_130 = var_210;
                var_138 = -0x8000000000000001;
                var_1f0 = alloc::boxed::Box$LT$T$GT$::new::h8d1d49c9faffb5d7(&var_138);
                var_1e8 = &data_6c8b70;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                let mut rax_4: *mut i128;
                let mut rdx_2: i64;
                rax_4 = uucore::util_name::h60d842bf27b05e82();
                var_1d8 = rax_4;
                let var_1d0_1: i64 = rdx_2;
                var_210 = &var_1d8;
                var_208 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9ea929f45edcb0d0;
                *var_208[8] = &var_1f0;
                var_1f8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4f1ed2bd277e0642;
                var_138 = &data_6c8b08;
                var_130 = 3;
                let var_118_1: i64 = 0;
                var_130 = &var_210;
                let var_120_2: i64 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_138);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h5aa08d1e1bf905c3(var_1f0, var_1e8);
            }
        }
        else
        {
            uu_tac::try_mmap_stdin::hfe59da374b4e6932(&var_1f0);
            
            if var_1f0 == 0
            {
                var_1d8 = nullptr;
                let var_1d0_3: i64 = 1;
                let var_1c8_1: i64 = 0;
                std::io::stdio::stdin::h7215cc131abb55d8();
                var_1a0 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
                let mut rax_8: i64;
                let mut rdx_6: i64;
                rax_8 = _$LT$std..io..stdio..Stdin$u20$as$u20$std..io..Read$GT$::read_to_end::hc18c61afec27b79c(&var_1a0, &var_1d8);
                
                if rax_8 != 1
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h44dea3211d38b6c1(rax_8, rdx_6);
                    var_168 = var_1d8;
                    r13_2 = var_1c8_1;
                    let var_158_1: i64 = r13_2;
                    rbp_1 = *var_168[8];
                    r12_1 = 1;
                    
                    if var_1f0 != 0
                    {
                        core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h9c73bf5007d11635();
                    }
                    
                    goto 'label_5a041a;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h3d9e818b85d2e5c6(
                    &var_210, "stdin: \n-InvalidRegexInvalidArg…", 5);
                var_130 = *var_208[8];
                var_138 = var_210;
                let var_120_5: i64 = rdx_6;
                var_1b0 = alloc::boxed::Box$LT$T$GT$::new::h8d1d49c9faffb5d7(&var_138);
                let var_1a8_1: *mut *mut c_void = &data_6c8b70;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                let mut rax_11: *mut i128;
                let mut rdx_7: *mut i64;
                rax_11 = uucore::util_name::h60d842bf27b05e82();
                var_190 = rax_11;
                var_188 = rdx_7;
                var_210 = &var_190;
                var_208 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9ea929f45edcb0d0;
                *var_208[8] = &var_1b0;
                var_1f8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4f1ed2bd277e0642;
                var_138 = &data_6c8b08;
                var_130 = 3;
                let var_118_3: i64 = 0;
                var_130 = &var_210;
                let var_120_6: i64 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_138);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h5aa08d1e1bf905c3(var_1b0, var_1a8_1);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6e91106de20a5c98(
                    &var_1d8);
                core::ptr::drop_in_place$LT$core..option..Option$LT$memmap2..Mmap$GT$$GT$::hce1e60b57f82e2de(&var_1f0);
            }
            else
            {
                rbp_1 = var_1e8;
                r13_2 = var_1e0;
                'label_59fff9:
                let var_178_1: *mut i64 = rbp_1;
                let var_170_1: i64 = r13_2;
                r14_1 = 1;
                r12_1 = 0;
                'label_5a041d:
                let rdx_9: *mut c_void = var_88;
                let mut rax_12: *mut *mut c_void;
                let var_80: *mut c_void;
                
                if rdx_9 == 0
                {
                    rax_12 =
                        uu_tac::buffer_tac::h5d70b4a3a838e71b(rbp_1, r13_2, arg3, arg5, var_140_1);
                }
                else
                {
                    rax_12 = uu_tac::buffer_tac_regex::ha3032000df62e130(rbp_1, r13_2, rdx_9, 
                        var_80, arg3);
                }
                
                if rax_12 != 0
                {
                    var_130 = rax_12;
                    var_138 = -0x8000000000000004;
                    let result: *mut i128 =
                        alloc::boxed::Box$LT$T$GT$::new::h8d1d49c9faffb5d7(&var_138);
                    
                    if r12_1 != 0
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6e91106de20a5c98(&var_168);
                    }
                    
                    if r14_1 != 0
                    {
                        core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h9c73bf5007d11635();
                    }
                    
                    core::ptr::drop_in_place$LT$core..option..Option$LT$regex..regex..bytes..Regex$GT$$GT$::h8038a3a4482dc4a5(&var_88);
                    return result;
                }
                
                if r12_1 != 0
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6e91106de20a5c98(
                        &var_168);
                }
                
                if r14_1 != 0
                {
                    core::ptr::drop_in_place$LT$memmap2..Mmap$GT$::h9c73bf5007d11635();
                }
            }
        }
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$regex..regex..bytes..Regex$GT$$GT$::h8038a3a4482dc4a5(&var_88);
    nullptr
}
