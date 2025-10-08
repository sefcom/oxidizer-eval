
  fn uu_chmod::Chmoder::chmod_file::h265d0431d919c569(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> u64

{
    let rbx: i8 = *arg1.byte_offset(0x25);
    let mut var_e0: i32;
    uucore::features::perms::get_metadata::hae67a64c0bebe863(&var_e0, arg2, arg3, rbx);
    let mut result: u64;
    let mut var_238: *mut i128;
    let mut var_218: i128;
    let mut var_1d8: *mut *mut c_void;
    let mut var_1d0: i128;
    let mut var_158: i64;
    
    if var_e0 != 2
    {
        let var_a8: i32;
        let mut rbp_1: i32 = 0xfff & var_a8;
        
        if arg1[3] == 1
        {
            if (uu_chmod::Chmoder::change_file::ha40cda8af2f327da(arg1, rbp_1, 
                *arg1.byte_offset(0x1c), arg2, arg3) & 1) == 0
            {
                return 0;
            }
            
            return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
        }
        
        let mut rax_4: *mut *mut c_void;
        
        if !(0 + -(*arg1))
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_1d8, arg1);
            rax_4 = var_1d8;
            var_218 = var_1d0;
        }
        
        if 0 + -(*arg1) || rax_4 == -0x8000000000000000
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let mut var_170: *mut *mut c_void = rax_4;
        let zmm0_1: i128 = var_218;
        let rbx_1: i64 = *zmm0_1[8];
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
            &*var_1d0[8], zmm0_1, rbx_1);
        var_1d8 = nullptr;
        var_1d0 = rbx_1;
        let var_198_1: i16 = 1;
        let mut r13_1: i32 = rbp_1;
        let var_184_1: i32 = rbp_1;
        
        loop
        {
            let mut rax_6: *mut c_void;
            let mut rdx_2: *mut c_void;
            rax_6 = core::str::iter::SplitInternal$LT$P$GT$::next::h00c44235cf8bba42(&var_1d8);
            let mut result_1: u64;
            let mut var_200: i8;
            
            if rax_6 == 0
            {
                if (uu_chmod::Chmoder::change_file::ha40cda8af2f327da(arg1, var_184_1, rbp_1, arg2, 
                    arg3) & 1) != 0
                {
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
                    break;
                }
                
                if (rbp_1 & !r13_1) == 0
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(
                        &var_170);
                    return 0;
                }
                
                var_238 = 1;
                let var_230_4: *mut i8 = arg2;
                let var_228_3: u64 = arg3;
                let mut var_220: i64;
                var_220 = 0;
                let mut var_f8: ();
                uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_f8, rbp_1, 
                    0);
                uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_158, r13_1, 
                    0);
                var_1d8 = &var_238;
                var_1d0 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                *var_1d0[8] = &var_f8;
                let mut var_1c0_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                let var_1b8_4: *mut i64 = &var_158;
                let var_1b0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_218 = &data_4ebad0;
                *var_218[8] = 3;
                let var_1f8_1: i64 = 0;
                let var_208_4: *const *mut *mut c_void = &var_1d8;
                var_200 = 3;
                let mut var_110: i128;
                core::option::Option$LT$T$GT$::map_or_else::h0f2f61c7a16737e3(&var_110, &var_218);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_158);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_f8);
                var_1c0_4 = 1;
                var_1d8 = var_110;
                let var_100: i64;
                *var_1d0[8] = var_100;
                result_1 = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_1d8);
            }
            else
            {
                var_218 = rax_6;
                *var_218[8] = rax_6.byte_offset(rdx_2);
                let mut var_230: i64;
                let mut var_178: i64;
                let mut rbx_2: *mut i128;
                
                if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h3a7fa2694c3e6340(core::iter::traits::iterator::Iterator::try_fold::h2b9d08646a37d2f9(&var_218))
                    == 0
                {
                    uucore::features::mode::parse_symbolic::h506995bac3fe2fa2(&var_238, rbp_1, 
                        rax_6, rdx_2, uucore::features::mode::get_umask::h22fe72fd4e3f2e99(), 
                        std::path::Path::is_dir::h02edbc48c38d7d9e(arg2, arg3));
                    rbx_2 = var_238;
                    rbp_1 = var_230;
                    
                    if rbx_2 != -0x8000000000000000
                    {
                        r13_1 = *var_230[4];
                        let var_228: i64;
                        var_178 = var_228;
                    }
                    else
                    {
                        uucore::features::mode::parse_symbolic::h506995bac3fe2fa2(&var_218, r13_1, 
                            rax_6, rdx_2, 0, 
                            std::path::Path::is_dir::h02edbc48c38d7d9e(arg2, arg3));
                        r13_1 =
                            core::result::Result$LT$T$C$E$GT$::unwrap::h3da0837ef6d99752(&var_218);
                    }
                }
                else
                {
                    uucore::features::mode::parse_numeric::hf54e809090b43181(&var_218, rbp_1, 
                        rax_6, rdx_2, std::path::Path::is_dir::h02edbc48c38d7d9e(arg2, arg3));
                    rbx_2 = var_218;
                    rbp_1 = *var_218[8];
                    r13_1 = rbp_1;
                    
                    if rbx_2 != -0x8000000000000000
                    {
                        let var_208: i64;
                        var_178 = var_208;
                        r13_1 = *var_218[0xc];
                    }
                }
                
                if rbx_2 != -0x8000000000000000
                {
                    var_238 = rbx_2;
                    var_230 = rbp_1;
                    *var_230[4] = r13_1;
                    
                    if *arg1.byte_offset(0x21) != 0
                    {
                        result = uucore::mods::error::ExitCode::new::hdcf0963f6fc7caed(1);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(
                            &var_238);
                        break;
                    }
                    
                    let var_208_5: i64 = var_178;
                    var_218 = var_238;
                    *var_218[8] = var_230;
                    *var_218[0xc] = *var_230[4];
                    var_200 = 1;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_218);
                }
                else
                {
                    continue;
                }
            }
            result = result_1;
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3560958025c3e8c7(&var_170);
    }
    else
    {
        let var_d8: i64;
        let mut r12_1: i64 = var_d8;
        var_158 = r12_1;
        
        if rbx != 0 || std::path::Path::is_symlink::h004cfac91d04dbc0(arg2, arg3) != 1
        {
            if std::io::error::Error::kind::h135fe00c4e7365f3(r12_1) != 1
            {
                var_218 = 1;
                *var_218[8] = arg2;
                let var_208_3: u64 = arg3;
                let var_200_3: i8 = 1;
                var_238 = &var_218;
                let var_230_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let var_228_1: *mut i64 = &var_158;
                let var_220_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_1d8 = &data_4ebab0;
                var_1d0 = 2;
                let var_1b8_3: i64 = 0;
                *var_1d0[8] = &var_238;
                let mut var_1c0_3: i64 = 2;
                let mut var_128: i128;
                core::option::Option$LT$T$GT$::map_or_else::h0f2f61c7a16737e3(&var_128, &var_1d8);
                var_1c0_3 = 1;
                var_1d8 = var_128;
                let var_118: i64;
                *var_1d0[8] = var_118;
                result = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_1d8);
                r12_1 = var_158;
            }
            else
            {
                var_218 = 1;
                *var_218[8] = arg2;
                let var_208_2: u64 = arg3;
                let var_200_2: i8 = 1;
                var_238 = &var_218;
                let var_230_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_1d8 = &data_4eba90;
                var_1d0 = 2;
                let var_1b8_2: i64 = 0;
                *var_1d0[8] = &var_238;
                let mut var_1c0_2: i64 = 1;
                let mut var_140: i128;
                core::option::Option$LT$T$GT$::map_or_else::h0f2f61c7a16737e3(&var_140, &var_1d8);
                var_1c0_2 = 1;
                var_1d8 = var_140;
                let var_130: i64;
                *var_1d0[8] = var_130;
                result = alloc::boxed::Box$LT$T$GT$::new::h3f0686e8f75aaa9d(&var_1d8);
            }
        }
        else
        {
            if *arg1.byte_offset(0x22) == 1
            {
                var_218 = 1;
                *var_218[8] = arg2;
                let var_208_1: u64 = arg3;
                let var_200_1: i8 = 1;
                var_238 = &var_218;
                let var_230_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_1d8 = &data_4eba70;
                var_1d0 = 2;
                let var_1b8_1: i64 = 0;
                *var_1d0[8] = &var_238;
                let var_1c0_1: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_1d8);
            }
            
            result = 0;
        }
        
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::he4a0a2b91febee14(r12_1);
    }
    result
}
