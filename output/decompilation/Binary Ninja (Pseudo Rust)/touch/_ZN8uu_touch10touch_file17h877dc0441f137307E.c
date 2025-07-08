
  fn uu_touch::touch_file::h877dc0441f137307(arg1: i64, arg2: u64, arg3: i32, arg4: *mut i64, arg5: *mut i128, arg6: i32, arg7: i64, arg8: i32) -> *mut i128

{
    let rbp: u64 = arg6;
    let rbx: u64 = arg3;
    let mut var_120: ();
    let mut var_e0: i64;
    let mut var_d8: u64;
    
    if arg3 == 0
    {
        var_e0 = arg1;
        var_d8 = arg2;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7b6c1f916f50a915(&var_120, 
            &var_e0);
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(&var_120, 
            "-setting times of : No such file…", 1);
    }
    
    let r13: i8 = *arg4.byte_offset(0x31);
    
    if r13 == 0
    {
        std::fs::metadata::h73b841bac6708bdf(&var_e0, arg1);
    }
    else
    {
        std::fs::symlink_metadata::ha4686baccc39e49a(&var_e0, arg1);
    }
    
    let mut result: *mut i128;
    let mut result_2: *mut i128;
    let mut rdx_7: *mut i64;
    
    if var_e0 != 2
    {
        result_2 = uu_touch::update_times::h392cecc13adcf2b7(arg1, arg2, rbx, r13, 
            *arg4.byte_offset(0x33), arg5, rbp, arg7, arg8);
        result = result_2;
    }
    else if std::io::error::Error::kind::hb2ff5fa058639b3d(var_d8) != 0
    {
        result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h8e02b6420ed2dfd1(var_d8, &var_120);
    }
    else if arg4[6] != 0
    {
        result = nullptr;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(var_d8);
    }
    else
    {
        let mut var_1a8: i32;
        let mut var_198: *mut *mut c_void;
        let mut var_150: *mut i64;
        let mut var_140: *mut *mut i64;
        
        if r13 == 0
        {
            std::fs::File::create::h17c7edca8c2f4ade(&var_1a8, arg1);
            
            if var_1a8 == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h4e160d05a3d73f48(&var_1a8);
                
                if _$LT$uu_touch..Source$u20$as$u20$core..cmp..PartialEq$GT$::eq::h078dd8660d87ce4c(
                    arg4[3]) == 0 || *arg4 != -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(
                        var_d8);
                    result_2 = uu_touch::update_times::h392cecc13adcf2b7(arg1, arg2, rbx, r13, 
                        *arg4.byte_offset(0x33), arg5, rbp, arg7, arg8);
                    result = result_2;
                }
                else
                {
                    result = nullptr;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(
                        var_d8);
                }
            }
            else
            {
                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_198, arg1, 
                    arg2);
                let var_190: *mut *mut i64;
                var_140 = var_190;
                let var_188: *mut c_void;
                let mut var_138: i128;
                var_138 = var_188.byte_offset(var_190);
                let mut rax_6: i32;
                let mut rdx_4: i32;
                rax_6 = core::str::validations::next_code_point_reverse::h49d445a14546f521(
                    &var_140, rbx);
                
                if rax_6 == 0 || rdx_4 == 0x110000
                {
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha48c95cb1b2b0ecd(&var_198);
                    'label_5c2e5d:
                    result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h0cde622ef2849830();
                    
                    if *arg4.byte_offset(0x32) == 0
                    {
                        let mut result_1: *mut i128 = result;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                        let mut rax_15: *mut i64;
                        let mut rdx_10: i64;
                        rax_15 = uucore::util_name::h60d842bf27b05e82();
                        var_150 = rax_15;
                        let var_148_3: i64 = rdx_10;
                        var_140 = &var_150;
                        var_138 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
                        *var_138[8] = &result_1;
                        let mut var_128: i8;
                        var_128 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h576a242cd5c5fa7b;
                        var_198 = &data_710d68;
                        let var_190_3: i64 = 3;
                        let var_178_3: i64 = 0;
                        let var_188_4: *mut i64 = &var_140;
                        let var_180_3: i64 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_198);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h5ee190ea3c79983b(result_1);
                        result = nullptr;
                    }
                }
                else
                {
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha48c95cb1b2b0ecd(&var_198);
                    
                    if rdx_4 != 0x2f
                    {
                        goto 'label_5c2e5d;
                    }
                    
                    result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h65951a50c2dce01b(
                        std::io::error::Error::new::hffe4f6be3d139c83(0x27, 
                            "No such file or directory%a %b %…", 0x19), 
                        &var_120);
                    let var_1a0: i64;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(
                        var_1a0);
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(var_d8);
            }
        }
        else
        {
            var_140 = nullptr;
            let var_118: i128;
            let mut var_138_1: i128 = var_118;
            let mut var_128_1: i8 = 1;
            var_150 = &var_140;
            let var_148_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_198 = &data_710d48;
            let var_190_1: i64 = 2;
            let var_178_1: i64 = 0;
            let var_188_1: *mut *mut i64 = &var_150;
            let mut var_180_1: i64 = 1;
            let mut var_f8: i128;
            core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&var_f8, &var_198);
            var_180_1 = 1;
            var_198 = var_f8;
            let var_e8: i64;
            let var_188_2: i64 = var_e8;
            result = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&var_198);
            
            if *arg4.byte_offset(0x32) == 0
            {
                var_1a8 = result;
                let var_1a0_1: *mut *mut c_void = &data_710e78;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(result));
                let mut rax_10: *mut i64;
                let mut rdx_5: i64;
                rax_10 = uucore::util_name::h60d842bf27b05e82();
                var_150 = rax_10;
                let var_148_2: i64 = rdx_5;
                var_140 = &var_150;
                var_138_1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
                *var_138_1[8] = &var_1a8;
                var_128_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hbcad17bef5b674a6;
                var_198 = &data_710d68;
                let var_190_2: i64 = 3;
                let var_178_2: i64 = 0;
                let var_188_3: *mut i64 = &var_140;
                let var_180_2: i64 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_198);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h2858b8dcb4cc330f(var_1a8, var_1a0_1);
                result = nullptr;
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(var_d8);
            }
            else
            {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(var_d8);
            }
        }
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb41aa8b20f891843(&var_120);
    result
}
