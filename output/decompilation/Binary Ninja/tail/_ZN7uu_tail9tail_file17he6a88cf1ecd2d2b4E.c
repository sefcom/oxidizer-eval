
  int128_t* uu_tail::tail_file::he6a88cf1ecd2d2b4(int64_t* arg1, char* arg2, int64_t** arg3, char* arg4, size_t arg5, void* arg6, int64_t arg7)

{
    int32_t var_e8;
    std::fs::metadata::h5a76b0b01e9dc15d(&var_e8, arg4);
    int32_t r13 = var_e8;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_e8);
    int64_t rcx;
    void* rdi_4;
    uint64_t r8;
    int64_t** var_168;
    int64_t* var_138;
    
    if (r13 != 2)
    {
        void** var_120;
        char const* const var_108;
        
        if (std::path::Path::is_dir::h9ac0db933706da51(arg4, arg5))
        {
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
            uu_tail::paths::HeaderPrinter::print_input::hd83f77d6875adb59(arg2, arg3);
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h8732f121b58e7ba0(
                &var_138);
            int64_t** rax_3;
            int64_t rdx_3;
            rax_3 = uucore::util_name::h60d842bf27b05e82();
            var_168 = rax_3;
            int64_t var_160_3 = rdx_3;
            var_120 = &var_168;
            int64_t (* var_118_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            var_e8 = &data_5bb798;
            int64_t var_e0_3 = 2;
            int64_t var_c8_3 = 0;
            void*** var_d8_3 = &var_120;
            int64_t var_d0_3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
            var_168 = arg3;
            int64_t (* var_160_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            int64_t** var_158_2 = &var_138;
            int64_t (* var_150_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_e8 = &data_5bb7e8;
            int64_t var_e0_4 = 3;
            int64_t var_c8_4 = 0;
            void** var_d8_4 = &var_168;
            int64_t var_d0_4 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
            
            if (*(arg1 + 0x4c) != 2)
            {
                char temp0_1 = arg1[9];
                char const* const rdx_4 = 1;
                
                if (!temp0_1)
                    rdx_4 = "; giving up on this nameNo such …";
                
                int64_t rcx_2 = 0x18;
                
                if (temp0_1)
                    rcx_2 = 0;
                
                var_108 = rdx_4;
                int64_t var_100_1 = rcx_2;
                int64_t** rax_4;
                int64_t rdx_5;
                rax_4 = uucore::util_name::h60d842bf27b05e82();
                var_168 = rax_4;
                int64_t var_160_5 = rdx_5;
                var_120 = &var_168;
                int64_t (* var_118_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_e8 = &data_5bb798;
                int64_t var_e0_5 = 2;
                int64_t var_c8_5 = 0;
                void*** var_d8_5 = &var_120;
                int64_t var_d0_5 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
                var_168 = arg3;
                int64_t (* var_160_6)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                int64_t* var_158_3 = &var_108;
                int64_t (* var_150_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                var_e8 = &data_5bb818;
                int64_t var_e0_6 = 3;
                int64_t var_c8_6 = 0;
                void** var_d8_6 = &var_168;
                int64_t var_d0_6 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
            }
            
            int128_t* rax_5 = nullptr;
            int64_t (* rdx_7)(void* arg1, int64_t arg2);
            
            if (*(arg6 + 0x8e) & 1 && *(arg6 + 0x8c))
                rax_5 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(arg6, 
                    arg4, arg5, arg3[1], arg3[2], 0);
            
            if (*(arg6 + 0x8e) & 1 && *(arg6 + 0x8c) && !rax_5)
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&var_138);
                return nullptr;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e81f59885851d09(&var_138);
            return rax_5;
        }
        
        if (uu_tail::paths::Input::is_tailable::hb3d44ba0fa944896(arg3))
        {
            std::fs::metadata::h5a76b0b01e9dc15d(&var_e8, arg4);
            int64_t r12_2 = var_e8;
            int64_t var_38;
            int64_t var_88;
            
            if (r12_2 != 2)
                var_38 = var_88;
            else
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he6af43ab7f514533(&var_e8);
            std::fs::File::open::hcbb28a04a46ba590(&var_120, arg4);
            
            if (var_120)
            {
                int64_t var_118;
                int128_t* rax_9;
                int64_t* rdi_19;
                int64_t rdx_11;
                
                if (std::io::error::Error::kind::hb2ff5fa058639b3d(var_118) != 1)
                {
                    var_e8 = var_118;
                    rax_9 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(arg6, 
                        arg4, arg5, arg3[1], arg3[2], 0);
                    
                    if (!rax_9)
                        return _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h5dd0adcf7fd88ca2();
                    
                    rdi_19 = &var_e8;
                }
                else
                {
                    int64_t var_f0 = var_118;
                    rax_9 = uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(arg6, 
                        arg4, arg5, arg3[1], arg3[2], 0);
                    
                    if (!rax_9)
                    {
                        var_108 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::hf7330592f10927b5();
                        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                        int64_t* rax_14;
                        int64_t rdx_19;
                        rax_14 = uucore::util_name::h60d842bf27b05e82();
                        var_138 = rax_14;
                        int64_t var_130_2 = rdx_19;
                        var_168 = &var_138;
                        int64_t (* var_160_7)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
                        char const* const* var_158_4 = &var_108;
                        int64_t (* var_150_4)(int64_t* arg1, void* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h4b13273068b31414;
                        var_e8 = &data_5bb848;
                        int64_t var_e0_7 = 3;
                        int64_t var_c8_7 = 0;
                        void** var_d8_7 = &var_168;
                        int64_t var_d0_7 = 2;
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
            
            if (*(arg1 + 0x4b))
            {
                label_5006a1:
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(
                    &var_168, 0x2000, var_138);
                int128_t* rax_11;
                int64_t rdx_15;
                rax_11 = uu_tail::unbounded_tail::hc66e4f3b3653bc33(&var_168, arg1);
                
                if (rax_11)
                {
                    core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$std..fs..File$GT$$GT$::ha419d633ac1ad1e3(&var_168);
                    return rax_11;
                }
            }
            else
            {
                int64_t rsi_9 = 0;
                
                if (arg3[3] == -0x8000000000000000)
                    rsi_9 = arg7;
                
                if (!_$LT$std..fs..File$u20$as$u20$uu_tail..paths..FileExtTail$GT$::is_seekable::hb604e85046bd781d(&var_138, rsi_9))
                    goto label_5006a1;
                
                if (r12_2 == 2)
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                if (!var_38)
                    goto label_5006a1;
                
                uu_tail::bounded_tail::hc4147e75324d37d5(&var_138, arg1);
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(
                    &var_168, 0x2000, var_138);
            }
            
            int128_t var_148;
            int64_t var_c8;
            var_c8 = var_148;
            int64_t var_158;
            int64_t var_d8;
            var_d8 = var_158;
            var_e8 = var_168;
            int128_t* rax_1 = uu_tail::follow::watch::Observer::add_path::h2539e8b9bde14502(arg6, 
                arg4, arg5, arg3[1], arg3[2], 
                alloc::boxed::Box$LT$T$GT$::new::hf480b26787a6f5a3(&var_e8), &data_5bb890, 1);
            
            if (rax_1)
                return rax_1;
            
            return nullptr;
        }
        
        rcx = arg3[1];
        r8 = arg3[2];
        rdi_4 = arg6;
    }
    else
    {
        uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
        int64_t** rax;
        int64_t rdx_1;
        rax = uucore::util_name::h60d842bf27b05e82();
        var_168 = rax;
        int64_t var_160_1 = rdx_1;
        var_138 = &var_168;
        int64_t (* var_130_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        var_e8 = &data_5bb798;
        int64_t var_e0_1 = 2;
        int64_t var_c8_1 = 0;
        int64_t** var_d8_1 = &var_138;
        int64_t var_d0_1 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
        var_168 = arg3;
        int64_t (* var_160_2)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        void** const var_158_1 = &data_5bb9c0;
        int64_t (* var_150_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        var_e8 = &data_5bb7b8;
        int64_t var_e0_2 = 3;
        int64_t var_c8_2 = 0;
        int64_t* var_d8_2 = &var_168;
        int64_t var_d0_2 = 2;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_e8);
        rcx = arg3[1];
        r8 = arg3[2];
        rdi_4 = arg6;
    }
    return uu_tail::follow::watch::Observer::add_bad_path::h4375069fa57482bb(rdi_4, arg4, arg5, 
        rcx, r8, 0);
}
