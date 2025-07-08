
  int128_t* uu_touch::touch_file::h877dc0441f137307(int64_t arg1, uint64_t arg2, int32_t arg3, int64_t* arg4, int128_t* arg5, int32_t arg6, int64_t arg7, int32_t arg8)

{
    uint64_t rbp = arg6;
    uint64_t rbx = arg3;
    void var_120;
    int64_t var_e0;
    uint64_t var_d8;
    
    if (!arg3)
    {
        var_e0 = arg1;
        var_d8 = arg2;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7b6c1f916f50a915(&var_120, 
            &var_e0);
    }
    else
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(&var_120, 
            "-setting times of : No such file…", 1);
    
    char r13 = *(arg4 + 0x31);
    
    if (!r13)
        std::fs::metadata::h73b841bac6708bdf(&var_e0, arg1);
    else
        std::fs::symlink_metadata::ha4686baccc39e49a(&var_e0, arg1);
    
    int128_t* result;
    int128_t* result_2;
    int64_t* rdx_7;
    
    if (var_e0 != 2)
    {
        result_2 = uu_touch::update_times::h392cecc13adcf2b7(arg1, arg2, rbx, r13, *(arg4 + 0x33), 
            arg5, rbp, arg7, arg8);
        result = result_2;
    }
    else if (std::io::error::Error::kind::hb2ff5fa058639b3d(var_d8))
        result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h8e02b6420ed2dfd1(var_d8, &var_120);
    else if (arg4[6])
    {
        result = nullptr;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(var_d8);
    }
    else
    {
        int32_t var_1a8;
        void** const var_198;
        int64_t* var_150;
        int64_t** var_140;
        
        if (!r13)
        {
            std::fs::File::create::h17c7edca8c2f4ade(&var_1a8, arg1);
            
            if (!var_1a8)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h4e160d05a3d73f48(&var_1a8);
                
                if (!_$LT$uu_touch..Source$u20$as$u20$core..cmp..PartialEq$GT$::eq::h078dd8660d87ce4c(arg4[3]) || *arg4 != -0x8000000000000000)
                {
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(
                        var_d8);
                    result_2 = uu_touch::update_times::h392cecc13adcf2b7(arg1, arg2, rbx, r13, 
                        *(arg4 + 0x33), arg5, rbp, arg7, arg8);
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
                int64_t** var_190;
                var_140 = var_190;
                void* var_188;
                int128_t var_138;
                var_138 = var_188 + var_190;
                int32_t rax_6;
                int32_t rdx_4;
                rax_6 = core::str::validations::next_code_point_reverse::h49d445a14546f521(
                    &var_140, rbx);
                
                if (!rax_6 || rdx_4 == 0x110000)
                {
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha48c95cb1b2b0ecd(&var_198);
                    label_5c2e5d:
                    result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h0cde622ef2849830();
                    
                    if (!*(arg4 + 0x32))
                    {
                        int128_t* result_1 = result;
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                        int64_t* rax_15;
                        int64_t rdx_10;
                        rax_15 = uucore::util_name::h60d842bf27b05e82();
                        var_150 = rax_15;
                        int64_t var_148_3 = rdx_10;
                        var_140 = &var_150;
                        var_138 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
                        *var_138[8] = &result_1;
                        char var_128;
                        var_128 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h576a242cd5c5fa7b;
                        var_198 = &data_710d68;
                        int64_t var_190_3 = 3;
                        int64_t var_178_3 = 0;
                        int64_t* var_188_4 = &var_140;
                        int64_t var_180_3 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_198);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::h5ee190ea3c79983b(result_1);
                        result = nullptr;
                    }
                }
                else
                {
                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha48c95cb1b2b0ecd(&var_198);
                    
                    if (rdx_4 != 0x2f)
                        goto label_5c2e5d;
                    
                    result = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h65951a50c2dce01b(
                        std::io::error::Error::new::hffe4f6be3d139c83(0x27, 
                            "No such file or directory%a %b %…", 0x19), 
                        &var_120);
                    int64_t var_1a0;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(
                        var_1a0);
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(var_d8);
            }
        }
        else
        {
            var_140 = nullptr;
            int128_t var_118;
            int128_t var_138_1 = var_118;
            char var_128_1 = 1;
            var_150 = &var_140;
            int64_t (* var_148_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_198 = &data_710d48;
            int64_t var_190_1 = 2;
            int64_t var_178_1 = 0;
            int64_t** var_188_1 = &var_150;
            int64_t var_180_1 = 1;
            int128_t var_f8;
            core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&var_f8, &var_198);
            var_180_1 = 1;
            var_198 = var_f8;
            int64_t var_e8;
            int64_t var_188_2 = var_e8;
            result = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&var_198);
            
            if (!*(arg4 + 0x32))
            {
                var_1a8 = result;
                void** const var_1a0_1 = &data_710e78;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(result));
                int64_t* rax_10;
                int64_t rdx_5;
                rax_10 = uucore::util_name::h60d842bf27b05e82();
                var_150 = rax_10;
                int64_t var_148_2 = rdx_5;
                var_140 = &var_150;
                var_138_1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
                *var_138_1[8] = &var_1a8;
                var_128_1 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hbcad17bef5b674a6;
                var_198 = &data_710d68;
                int64_t var_190_2 = 3;
                int64_t var_178_2 = 0;
                int64_t* var_188_3 = &var_140;
                int64_t var_180_2 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_198);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h2858b8dcb4cc330f(var_1a8, var_1a0_1);
                result = nullptr;
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(var_d8);
            }
            else
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h1df6aa363d0c4337(var_d8);
        }
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb41aa8b20f891843(&var_120);
    return result;
}
