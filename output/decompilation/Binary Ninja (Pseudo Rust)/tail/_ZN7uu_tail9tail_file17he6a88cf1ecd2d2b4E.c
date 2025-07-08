
  fn uu_tail::tail_file::he6a88cf1ecd2d2b4(arg1: *mut i64, arg2: *mut i8, arg3: *mut *mut i64, arg4: *mut i8, arg5: size_t, arg6: *mut c_void, arg7: i64) -> *mut i128

{
    let mut var_e8: i32;
    std::fs::metadata::h5a76b0b01e9dc15d(&var_e8, arg4);
    let r13: i32 = var_e8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_e8);
    let mut rcx: i64;
    let mut rdi_4: *mut c_void;
    let mut r8: u64;
    let mut var_168: *mut *mut i64;
    let mut var_138: *mut i64;
    
    if r13 != 2
    {
        let mut var_120: *mut *mut c_void;
        let mut var_108: *const i8;
        
        if std::path::Path::is_dir::h9ac0db933706da51(arg4, arg5) != 0
        {
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            uu_tail::paths::HeaderPrinter::print_input::hd83f77d6875adb59(arg2, arg3);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(
                &var_138);
            let mut rax_3: *mut *mut i64;
            let mut rdx_3: i64;
            rax_3 = uucore::util_name::h60d842bf27b05e82();
            var_168 = rax_3;
            let var_160_3: i64 = rdx_3;
            var_120 = &var_168;
            let var_118_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            var_e8 = &data_5bb798;
            let var_e0_3: i64 = 2;
            let var_c8_3: i64 = 0;
            let var_d8_3: *mut *mut *mut c_void = &var_120;
            let var_d0_3: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
            var_168 = arg3;
            let var_160_4: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            let var_158_2: *mut *mut i64 = &var_138;
            let var_150_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_e8 = &data_5bb7e8;
            let var_e0_4: i64 = 3;
            let var_c8_4: i64 = 0;
            let var_d8_4: *mut *mut c_void = &var_168;
            let var_d0_4: i64 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
            
            if *arg1.byte_offset(0x4c) != 2
            {
                let temp0_1: i8 = arg1[9];
                let mut rdx_4: *const i8 = 1;
                
                if temp0_1 == 0
                {
                    rdx_4 = "; giving up on this nameNo such …";
                }
                
                let mut rcx_2: i64 = 0x18;
                
                if temp0_1 != 0
                {
                    rcx_2 = 0;
                }
                
                var_108 = rdx_4;
                let var_100_1: i64 = rcx_2;
                let mut rax_4: *mut *mut i64;
                let mut rdx_5: i64;
                rax_4 = uucore::util_name::h60d842bf27b05e82();
                var_168 = rax_4;
                let var_160_5: i64 = rdx_5;
                var_120 = &var_168;
                let var_118_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_e8 = &data_5bb798;
                let var_e0_5: i64 = 2;
                let var_c8_5: i64 = 0;
                let var_d8_5: *mut *mut *mut c_void = &var_120;
                let var_d0_5: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
                var_168 = arg3;
                let var_160_6: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                let var_158_3: *mut i64 = &var_108;
                let var_150_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_e8 = &data_5bb818;
                let var_e0_6: i64 = 3;
                let var_c8_6: i64 = 0;
                let var_d8_6: *mut *mut c_void = &var_168;
                let var_d0_6: i64 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
            }
            
            let mut rax_5: *mut i128 = nullptr;
            let mut rdx_7: fn(arg1: *mut c_void, arg2: i64) -> i64;
            
            if (*arg6.byte_offset(0x8e) & 1) != 0 && *arg6.byte_offset(0x8c) != 0
            {
                rax_5 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(arg6, 
                    arg4, arg5, arg3[1], arg3[2], 0);
            }
            
            if (*arg6.byte_offset(0x8e) & 1) != 0 && *arg6.byte_offset(0x8c) != 0 && rax_5 == 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&var_138);
                return nullptr;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&var_138);
            return rax_5;
        }
        
        if uu_tail::paths::Input::is_tailable::hb3d44ba0fa944896(arg3) != 0
        {
            std::fs::metadata::h5a76b0b01e9dc15d(&var_e8, arg4);
            let r12_2: i64 = var_e8;
            let mut var_38: i64;
            let var_88: i64;
            
            if r12_2 != 2
            {
                var_38 = var_88;
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_e8);
            }
            std::fs::File::open::hcbb28a04a46ba590(&var_120, arg4);
            
            if var_120 != 0
            {
                let var_118: i64;
                let mut rax_9: *mut i128;
                let mut rdi_19: *mut i64;
                let mut rdx_11: i64;
                
                if std::io::error::Error::kind::hb2ff5fa058639b3d(var_118) != 1
                {
                    var_e8 = var_118;
                    rax_9 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(arg6, 
                        arg4, arg5, arg3[1], arg3[2], 0);
                    
                    if rax_9 == 0
                    {
                        return _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h5dd0adcf7fd88ca2();
                    }
                    
                    rdi_19 = &var_e8;
                }
                else
                {
                    let mut var_f0: i64 = var_118;
                    rax_9 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(arg6, 
                        arg4, arg5, arg3[1], arg3[2], 0);
                    
                    if rax_9 == 0
                    {
                        var_108 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hf7330592f10927b5();
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                        let mut rax_14: *mut i64;
                        let mut rdx_19: i64;
                        rax_14 = uucore::util_name::h60d842bf27b05e82();
                        var_138 = rax_14;
                        let var_130_2: i64 = rdx_19;
                        var_168 = &var_138;
                        let var_160_7: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        let var_158_4: *const *const i8 = &var_108;
                        let var_150_4: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4b13273068b31414;
                        var_e8 = &data_5bb848;
                        let var_e0_7: i64 = 3;
                        let var_c8_7: i64 = 0;
                        let var_d8_7: *mut *mut c_void = &var_168;
                        let var_d0_7: i64 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h07296d4a29ad6a0f(var_108);
                        return nullptr;
                    }
                    
                    rdi_19 = &var_f0;
                }
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hadb3f722d4799b91(rdi_19);
                return rax_9;
            }
            
            var_138 = *var_120[4];
            uu_tail::paths::HeaderPrinter::print_input::hd83f77d6875adb59(arg2, arg3);
            
            if *arg1.byte_offset(0x4b) != 0
            {
                'label_5006a1:
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(
                    &var_168, 0x2000, var_138);
                let mut rax_11: *mut i128;
                let mut rdx_15: i64;
                rax_11 = uu_tail::unbounded_tail::hc66e4f3b3653bc33(&var_168, arg1);
                
                if rax_11 != 0
                {
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::ha419d633ac1ad1e3(&var_168);
                    return rax_11;
                }
            }
            else
            {
                let mut rsi_9: i64 = 0;
                
                if arg3[3] == -0x8000000000000000
                {
                    rsi_9 = arg7;
                }
                
                if _$LT$std..fs..File$u20$as$u20$uu_tail..paths..FileExtTail$GT$::is_seekable::hb604e85046bd781d(&var_138, rsi_9) == 0
                {
                    goto 'label_5006a1;
                }
                
                if r12_2 == 2
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                if var_38 == 0
                {
                    goto 'label_5006a1;
                }
                
                uu_tail::bounded_tail::hc4147e75324d37d5(&var_138, arg1);
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(
                    &var_168, 0x2000, var_138);
            }
            
            let var_148: i128;
            let mut var_c8: i64;
            var_c8 = var_148;
            let var_158: i64;
            let mut var_d8: i64;
            var_d8 = var_158;
            var_e8 = var_168;
            let rax_1: *mut i128 = uu_tail::follow::watch::Observer::add_path::h2539e8b9bde14502(
                arg6, arg4, arg5, arg3[1], arg3[2], 
                alloc::boxed::Box$LT$T$GT$::new::hf480b26787a6f5a3(&var_e8), &data_5bb890, 1);
            
            if rax_1 != 0
            {
                return rax_1;
            }
            
            return nullptr;
        }
        
        rcx = arg3[1];
        r8 = arg3[2];
        rdi_4 = arg6;
    }
    else
    {
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
        let mut rax: *mut *mut i64;
        let mut rdx_1: i64;
        rax = uucore::util_name::h60d842bf27b05e82();
        var_168 = rax;
        let var_160_1: i64 = rdx_1;
        var_138 = &var_168;
        let var_130_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        var_e8 = &data_5bb798;
        let var_e0_1: i64 = 2;
        let var_c8_1: i64 = 0;
        let var_d8_1: *mut *mut i64 = &var_138;
        let var_d0_1: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
        var_168 = arg3;
        let var_160_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_158_1: *mut *mut c_void = &data_5bb9c0;
        let var_150_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        var_e8 = &data_5bb7b8;
        let var_e0_2: i64 = 3;
        let var_c8_2: i64 = 0;
        let var_d8_2: *mut i64 = &var_168;
        let var_d0_2: i64 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
        rcx = arg3[1];
        r8 = arg3[2];
        rdi_4 = arg6;
    }
    uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(rdi_4, arg4, arg5, rcx, r8, 0)
}
