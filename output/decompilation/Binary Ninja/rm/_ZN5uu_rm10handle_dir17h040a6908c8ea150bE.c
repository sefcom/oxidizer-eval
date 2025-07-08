
  uint64_t uu_rm::handle_dir::h040a6908c8ea150b(int64_t arg1, int64_t arg2, void* arg3)

{
    void* const var_1d8;
    std::path::Path::components::h4f3217acf0fc8653(&var_1d8, arg1, arg2);
    char var_1c8;
    char var_19e;
    uint64_t rax_1;
    
    if (!var_19e)
        rax_1 = var_1c8 - 5;
    
    uint64_t rbp;
    int64_t* var_228;
    int64_t* var_128;
    bool rcx_1;
    
    if (var_19e || rax_1 >= 2)
    {
        int64_t rdx;
        rax_1 = std::path::Path::parent::h65c9a340a6266f2d(arg1, arg2);
        rcx_1 = !rax_1;
        
        if (*(arg3 + 3))
        {
            if (rax_1 || !*(arg3 + 2))
                goto label_4b7273;
            
            rax_1 = 0;
            rcx_1 = true;
            
            if (*(arg3 + 4))
                goto label_4b73f5;
            
            goto label_4b7405;
        }
        
        rax_1 = 1;
        
        if (!*(arg3 + 4))
        {
            label_4b7405:
            void** const rax_8;
            
            if (!rax_1)
            {
                int64_t* rax_9;
                int64_t rdx_3;
                rax_9 = uucore::util_name::h60d842bf27b05e82();
                var_228 = rax_9;
                int64_t var_220_5 = rdx_3;
                var_128 = &var_228;
                int64_t (* var_120_5)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_1d8 = &data_527970;
                int64_t var_1d0_4 = 2;
                int64_t var_1b8_4 = 0;
                var_1c8 = &var_128;
                int64_t var_1c0_4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
                var_228 = 1;
                int64_t var_220_6 = arg1;
                int64_t var_218_3 = arg2;
                char var_210_3 = 1;
                var_128 = &var_228;
                int64_t (* var_120_6)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                rax_8 = &data_527a30;
            }
            else
            {
                int64_t* rax_7;
                int64_t rdx_2;
                rax_7 = uucore::util_name::h60d842bf27b05e82();
                var_228 = rax_7;
                int64_t var_220_3 = rdx_2;
                var_128 = &var_228;
                int64_t (* var_120_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_1d8 = &data_527970;
                int64_t var_1d0_3 = 2;
                int64_t var_1b8_3 = 0;
                var_1c8 = &var_128;
                int64_t var_1c0_3 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
                var_228 = 1;
                int64_t var_220_4 = arg1;
                int64_t var_218_2 = arg2;
                char var_210_2 = 1;
                var_128 = &var_228;
                int64_t (* var_120_4)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                rax_8 = &data_527a50;
            }
            
            var_1d8 = rax_8;
            int64_t var_1d0_5 = 2;
            int64_t var_1b8_5 = 0;
            var_1c8 = &var_128;
            int64_t var_1c0_5 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
            rbp = 1;
        }
        else
        {
            label_4b73f5:
            rdx = *(arg3 + 2);
            
            if (rcx_1 & rdx)
                goto label_4b7405;
            
            rbp = uu_rm::remove_dir::h7d132cab7d9f675c(arg1, arg2, arg3);
        }
    }
    else
    {
        if (!*(arg3 + 3))
        {
            rax_1 = 1;
            rcx_1 = false;
            
            if (*(arg3 + 4))
                goto label_4b73f5;
            
            goto label_4b7405;
        }
        
        label_4b7273:
        char rbx_1 = *(arg3 + 5);
        char r14_1 = *(arg3 + 6);
        void* const var_268;
        int128_t var_110;
        
        if (r14_1 == 2 || rbx_1)
        {
            int64_t var_c8 = 0;
            int128_t var_b8_1 = {0};
            int64_t var_c0_1 = 8;
            int64_t var_e8 = 0;
            int64_t* var_e0_1 = 8;
            int64_t var_d8_1 = 0;
            walkdir::WalkDir::new::h94b43d608c112e6d(&var_228, arg1);
            int128_t var_1f0;
            int128_t var_148_1 = var_1f0;
            int128_t var_200;
            int128_t var_158_1 = var_200;
            char var_210;
            int128_t var_168_1 = var_210;
            int128_t var_180_1 = var_228;
            int64_t var_218;
            int64_t var_170_1 = var_218;
            var_1d8 = nullptr;
            var_1c8 = 0;
            int64_t var_1c0_6 = 8;
            int64_t var_1b8;
            var_1b8 = {0};
            int64_t var_1a8_1 = 8;
            int128_t var_1a0_1 = {0};
            int64_t var_190_1 = 8;
            int64_t var_188_1 = 0;
            int128_t var_138_1 = {0};
            rbp = 0;
            
            while (true)
            {
                char* var_260;
                size_t var_258;
                int64_t var_248;
                int128_t var_68_1;
                int128_t var_58_1;
                int128_t var_48_1;
                int64_t* rax_14;
                int32_t var_240;
                int64_t var_120;
                int128_t var_100;
                
                if (r14_1 == 2)
                {
                    label_4b77f0:
                    _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h918699d9fecda50e(&var_128, &var_1d8);
                    rax_14 = var_128;
                    
                    if (rax_14 == 3)
                        break;
                    
                    var_48_1 = var_100;
                    var_58_1 = var_110;
                    var_68_1 = var_120;
                    
                    if (rax_14 == 2)
                    {
                        var_248 = var_100;
                        var_258 = var_110;
                        var_268 = var_120;
                        var_228 = var_e0_1;
                        
                        while (true)
                        {
                            void* rax_18 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h401dddcc1f8bca7a(&var_228);
                            
                            if (!rax_18)
                                break;
                            
                            if (std::path::Path::starts_with::h2e2f372e672a1657(var_260, var_258, 
                                rax_18))
                            {
                                core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h372f3c80b2dcbfec(&var_268);
                                goto label_4b77f0;
                            }
                        }
                        
                        if ((var_240 & 0xf000) != 0x4000)
                            goto label_4b796d;
                        
                        std::fs::read_dir::h67bbb91b5f22fd39(&var_228, var_260);
                        int64_t rax_22;
                        char rdx_8;
                        rax_22 = core::result::Result$LT$T$C$E$GT$::unwrap::h16565dcf888e9ebf(
                            var_228, var_e0_1 + var_d8_1 * 0x18);
                        
                        if (!core::iter::traits::iterator::Iterator::fold::h676339c190ac643e(
                                rax_22))
                            goto label_4b771e;
                        
                        if (!uu_rm::prompt_descend::h39295f8defb4b16a())
                        {
                            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(
                                &var_228, var_260, var_258);
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hc1adebded84362db(&var_e8, 
                                &var_228);
                        }
                        else
                        {
                            int128_t var_208_2 = var_248;
                            var_218 = var_258;
                            var_228 = var_268;
                            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::ha11ee268e055e361(&var_c8, &var_228);
                            continue;
                        }
                        
                        core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h372f3c80b2dcbfec(
                            &var_268);
                        continue;
                    }
                }
                else
                {
                    _$LT$walkdir..IntoIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h918699d9fecda50e(&var_128, &var_1d8);
                    rax_14 = var_128;
                    
                    if (rax_14 == 3)
                        break;
                    
                    var_48_1 = var_100;
                    var_58_1 = var_110;
                    var_68_1 = var_120;
                    
                    if (rax_14 == 2)
                    {
                        var_248 = var_100;
                        var_258 = var_110;
                        var_268 = var_120;
                        
                        if ((var_240 & 0xf000) == 0x4000)
                        {
                            label_4b771e:
                            int128_t var_208_1 = var_248;
                            var_218 = var_258;
                            var_228 = var_268;
                            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::ha11ee268e055e361(&var_c8, &var_228);
                            continue;
                        }
                        else
                        {
                            label_4b796d:
                            rbp |= uu_rm::remove_file::hfb41d07f759de271(var_260, var_258, rbx_1, 
                                r14_1);
                            rbp &= 1;
                            core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h372f3c80b2dcbfec(&var_268);
                            continue;
                        }
                    }
                }
                var_228 = rax_14;
                int128_t var_200_1 = var_48_1;
                var_210 = var_58_1;
                int32_t var_220 = var_68_1;
                int64_t var_f0;
                var_1f0 = var_f0;
                int64_t rax_26;
                int64_t rdx_10;
                rax_26 = uucore::util_name::h60d842bf27b05e82();
                int64_t var_88 = rax_26;
                int64_t var_80_1 = rdx_10;
                int64_t* var_a8 = &var_88;
                int64_t (* var_a0_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                var_268 = &data_527970;
                int64_t var_260_1 = 2;
                int64_t var_248_1 = 0;
                int64_t** var_258_1 = &var_a8;
                int64_t var_250_1 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_268);
                var_88 = 1;
                int64_t var_80_2 = arg1;
                int64_t var_78_1 = arg2;
                char var_70_1 = 1;
                var_a8 = &var_88;
                int64_t (* var_a0_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                int64_t** var_98_1 = &var_228;
                int64_t (* var_90_1)(int64_t* arg1, void* arg2) = _$LT$walkdir..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h133db1da499347d6;
                var_268 = &data_527a00;
                var_260 = 3;
                var_248 = 0;
                var_258 = &var_a8;
                int64_t var_250_2 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_268);
                core::ptr::drop_in_place$LT$walkdir..error..Error$GT$::hc1425b400c799960(&var_228);
                rbp = 1;
            }
            
            core::ptr::drop_in_place$LT$walkdir..IntoIter$GT$::h3761202ee7f4baa7(&var_1d8);
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h7ec7afdb8ff5890d(&var_228, 
                &var_c8);
            var_1c8 = var_218;
            var_1d8 = var_228;
            
            while (true)
            {
                void* rax_28 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hc080de13743d3b84(&var_1c8);
                
                if (!rax_28)
                {
                    var_1d8 = var_1c8;
                    var_1c8 = var_1d8;
                    rax_28 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::hc080de13743d3b84(&var_1c8);
                    
                    if (!rax_28)
                        break;
                }
                
                rbp |= uu_rm::remove_dir::h7d132cab7d9f675c(*(rax_28 + 8), *(rax_28 + 0x10), arg3);
                rbp &= 1;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::h0424e9eb358fe413(&var_e8);
            core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$walkdir..dent..DirEntry$GT$$GT$::hf45a67b5be4375a6(&var_c8);
        }
        else
        {
            void* rax_2 = std::fs::remove_dir_all::ha0bf453026099f20(arg1);
            
            if (!rax_2)
                rbp = 0;
            else
            {
                var_268 = rax_2;
                void* rax_3 = std::fs::remove_dir::h3ace2cb00c00de8e(arg1);
                var_1d8 = rax_3;
                
                if (!rax_3)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc630b8980b1a585c(&var_1d8);
                    rbp = 0;
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc630b8980b1a585c(&var_1d8);
                    
                    if (std::io::error::Error::kind::hb2ff5fa058639b3d(rax_2) != 1)
                    {
                        int64_t* rax_30;
                        int64_t rdx_13;
                        rax_30 = uucore::util_name::h60d842bf27b05e82();
                        var_228 = rax_30;
                        int64_t var_220_7 = rdx_13;
                        var_128 = &var_228;
                        int64_t (* var_120_7)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                        var_1d8 = &data_527970;
                        int64_t var_1d0_6 = 2;
                        int64_t var_1b8_6 = 0;
                        var_1c8 = &var_128;
                        int64_t var_1c0_7 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
                        var_228 = 1;
                        int64_t var_220_8 = arg1;
                        int64_t var_218_4 = arg2;
                        char var_210_4 = 1;
                        var_128 = &var_228;
                        int64_t (* var_120_8)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        int64_t* var_118_1 = &var_268;
                        var_110 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        var_1d8 = &data_5279d0;
                        int64_t var_1d0_7 = 3;
                        int64_t var_1b8_7 = 0;
                        var_1c8 = &var_128;
                        int64_t var_1c0_8 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
                    }
                    else
                    {
                        int64_t* rax_5;
                        int64_t rdx_1;
                        rax_5 = uucore::util_name::h60d842bf27b05e82();
                        var_228 = rax_5;
                        int64_t var_220_1 = rdx_1;
                        var_128 = &var_228;
                        int64_t (* var_120_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                        var_1d8 = &data_527970;
                        int64_t var_1d0_1 = 2;
                        int64_t var_1b8_1 = 0;
                        var_1c8 = &var_128;
                        int64_t var_1c0_1 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
                        var_228 = 1;
                        int64_t var_220_2 = arg1;
                        int64_t var_218_1 = arg2;
                        char var_210_1 = 1;
                        var_128 = &var_228;
                        int64_t (* var_120_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                        var_1d8 = &data_5279b0;
                        int64_t var_1d0_2 = 2;
                        int64_t var_1b8_2 = 0;
                        var_1c8 = &var_128;
                        int64_t var_1c0_2 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_1d8);
                    }
                    
                    rbp = 1;
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&var_268);
            }
        }
    }
    rbp &= 1;
    return rbp;
}
