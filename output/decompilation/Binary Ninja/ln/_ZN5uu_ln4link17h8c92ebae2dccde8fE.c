
  int128_t* uu_ln::link::h8c92ebae2dccde8f(char* arg1, void** arg2, char* arg3, uint64_t arg4, void* arg5)

{
    void** const var_140 = -0x8000000000000000;
    void* var_128;
    char* var_120;
    void** var_118;
    void** const r12;
    
    if (!*(arg5 + 0x31))
    {
        var_120 = arg1;
        r12 = arg2;
        var_118 = arg2;
        var_128 = -0x8000000000000000;
    }
    else
    {
        int64_t r13;
        r13 = 1;
        r12 = arg2;
        uu_ln::relative_path::ha14d8bdd96810d1d(&var_128, arg1, arg2, arg3, arg4);
    }
    
    int32_t rax;
    rax = 1;
    int32_t var_18c = rax;
    size_t r13_1 = r12;
    char var_18d;
    int128_t var_188;
    uint64_t var_178;
    int128_t var_168;
    void** const var_158;
    int128_t var_138;
    void** var_108;
    int128_t var_f0;
    void** rdx_10;
    int128_t* result;
    int64_t var_100;
    char rbp_1;
    
    if (!std::path::Path::is_symlink::h6ab8b58756c51c6b(arg3, arg4))
    {
        std::fs::metadata::hebad4fc3d3e825b8(&var_108, arg3);
        void** rdi_3 = var_108;
        
        if (rdi_3 != 2)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(rdi_3, var_100);
            rbp_1 = *(arg5 + 0x37);
            r12 = -0x8000000000000000;
            
            switch (rbp_1)
            {
                case 0:
                {
                    goto label_4ba5d7;
                }
                case 1:
                {
                    goto label_4ba586;
                }
                case 2:
                {
                    goto label_4ba59b;
                }
                case 3:
                {
                    goto label_4ba5b8;
                }
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h834abcfa2f925b76(2, var_100);
            var_18d = *(arg5 + 0x30);
        }
    }
    else
    {
        rbp_1 = *(arg5 + 0x37);
        r12 = -0x8000000000000000;
        
        switch (rbp_1)
        {
            case 0:
            {
                goto label_4ba5d7;
            }
            case 1:
            {
                label_4ba586:
                uu_ln::simple_backup_path::hd90ca54508e22200(&var_108, arg3, arg4, *(arg5 + 8), 
                    *(arg5 + 0x10));
                break;
            }
            case 2:
            {
                label_4ba59b:
                uu_ln::numbered_backup_path::h43f0286cb18b9b8f(&var_108, arg3, arg4);
                break;
            }
            case 3:
            {
                label_4ba5b8:
                uu_ln::existing_backup_path::h0afbac2781d33cab(&var_108, arg3, arg4, *(arg5 + 8), 
                    *(arg5 + 0x10));
                break;
            }
        }
        
        r12 = var_108;
        var_188 = var_100;
        label_4ba5d7:
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h31d4f7ecf091fd1c(&var_140);
        var_140 = r12;
        var_138 = var_188;
        char rax_9 = *(arg5 + 0x30);
        var_18d = rax_9;
        
        if (rbp_1 != 3 || rax_9)
            goto label_4ba6a5;
        
        int128_t* result_1;
        
        if (uucore::features::fs::paths_refer_to_same_file::h61a2a035fa043eb8(arg1, r13_1, arg3, 
            arg4, 1))
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_168, arg1, 
                r13_1);
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_188, arg3, 
                arg4);
            void** const var_f8_1 = var_158;
            var_108 = var_168;
            int128_t var_f0_1 = var_188;
            uint64_t var_e0_1 = var_178;
            result_1 = alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&var_108);
            label_4bab88:
            result = result_1;
            goto label_4bab92;
        }
        
        r12 = var_140;
        label_4ba6a5:
        int128_t* result_2;
        
        if (r12 != -0x8000000000000000)
        {
            result_2 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h1dfb1dde0f611983(std::fs::rename::ha4b087830bbb39e7(arg3, arg4, &var_140));
            result = result_2;
        }
        
        if (r12 != -0x8000000000000000 && result_2)
            goto label_4bab92;
        
        uint32_t rax_14 = *(arg5 + 0x36);
        
        if (rax_14)
        {
            int64_t rax_17;
            
            if (rax_14 != 1)
            {
                char rax_18 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg3, arg4);
                char rax_19;
                
                if (!rax_18)
                    rax_19 = uucore::features::fs::paths_refer_to_same_file::h61a2a035fa043eb8(
                        arg1, r13_1, arg3, arg4, 1);
                
                if (!rax_18 && rax_19)
                {
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(
                        &var_168, arg1, r13_1);
                    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(
                        &var_188, arg3, arg4);
                    void** const var_f8_5 = var_158;
                    var_108 = var_168;
                    int128_t var_f0_2 = var_188;
                    uint64_t var_e0_2 = var_178;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&var_108);
                    goto label_4bab88;
                }
                
                rax_17 = std::fs::remove_file::h49bdff741c081dc5(arg3);
            }
            else
            {
                int64_t rax_15;
                int64_t rdx_11;
                rax_15 = uucore::util_name::h60d842bf27b05e82();
                var_188 = rax_15;
                *var_188[8] = rdx_11;
                var_168 = &var_188;
                *var_168[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1743bab71917fc0b;
                var_108 = &data_52cf68;
                int64_t var_100_1 = 2;
                *var_f0[8] = 0;
                int128_t* var_f8_2 = &var_168;
                var_f0 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_108);
                var_188 = 1;
                *var_188[8] = arg3;
                var_178 = arg4;
                char var_170_1 = 1;
                var_168 = &var_188;
                *var_168[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_108 = &data_52d058;
                int64_t var_100_2 = 2;
                *var_f0[8] = 0;
                int128_t* var_f8_3 = &var_168;
                var_f0 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_108);
                var_108 = &data_52d078;
                int64_t var_100_3 = 1;
                int64_t var_f8_4 = 8;
                var_f0 = {0};
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_108);
                void* var_38 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
                _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
                    &var_38);
                
                if (!uucore::read_yes::hc350e858ab85cf03())
                {
                    var_f0 = -0x7fffffffffffffff;
                    result_1 = alloc::boxed::Box$LT$T$GT$::new::hf17afba5cd7396c5(&var_108);
                    goto label_4bab88;
                }
                
                rax_17 = std::fs::remove_file::h49bdff741c081dc5(arg3);
            }
            
            if (rax_17)
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h315362d87e341519(rax_17);
        }
    }
    
    if (!var_18d)
    {
        char rax_23;
        
        if (*(arg5 + 0x32))
            rax_23 = std::path::Path::is_symlink::h6ab8b58756c51c6b(var_120, var_118);
        
        if (*(arg5 + 0x32) && rax_23)
        {
            std::fs::canonicalize::h9984b9af66694330(&var_108, &var_128);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9a2705f0495ff63b(&var_188, &var_108, &var_128);
            int64_t rax_24 = var_188;
            result = *var_188[8];
            
            if (rax_24 == -0x8000000000000000)
                goto label_4bab92;
            
            var_168 = rax_24;
            *var_168[8] = result;
            var_158 = var_178;
            goto label_4ba9d2;
        }
        
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_168, var_120, 
            var_118);
        label_4ba9d2:
        void** const var_f8_6 = var_158;
        var_108 = var_168;
        int64_t var_100_4 = *var_168[8];
        void** rax_28 = std::fs::hard_link::hedb4a065c044017d(&var_108, arg3);
        var_108 = &var_128;
        char* var_100_5 = arg3;
        uint64_t var_f8_7 = arg4;
        int128_t* result_4;
        result_4 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h35311f61e0a1e46b(rax_28, &var_108);
        result = result_4;
        
        if (result_4)
            goto label_4bab92;
    }
    else if (std::os::unix::fs::symlink::ha8160bb27397fc33(&var_128, arg3))
    {
        int128_t* result_3;
        result_3 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        result = result_3;
        label_4bab92:
        r13_1 = 1;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::h64f669095bad1067(&var_128);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h31d4f7ecf091fd1c(&var_140);
        return result;
    }
    
    char rbx_1;
    
    if (!*(arg5 + 0x35))
    {
        r13_1 = 1;
        rbx_1 = 0;
    }
    else
    {
        var_168 = 1;
        *var_168[8] = arg3;
        uint64_t var_158_1 = arg4;
        char var_150_1 = 1;
        var_188 = 1;
        var_188 = var_120;
        char var_170_2 = 1;
        int128_t* var_58 = &var_168;
        int64_t (* var_50_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        int128_t* var_48_1 = &var_188;
        int64_t (* var_40_1)(void* arg1, void* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_108 = &data_52d088;
        int64_t var_100_6 = 2;
        *var_f0[8] = 0;
        int128_t** var_f8_8 = &var_58;
        var_f0 = 2;
        int32_t var_18c_1 = &data_52d001;
        std::io::stdio::_print::he918bceb0c89db46(&var_108);
        
        if (var_140 != -0x8000000000000000)
        {
            var_168 = var_140;
            var_188 = 1;
            *var_188[8] = *var_168[8];
            int64_t var_178_1 = *var_138[8];
            char var_170_3 = 1;
            var_58 = &var_188;
            int64_t (* var_50_2)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_108 = &data_52d0b8;
            int64_t var_100_8 = 2;
            *var_f0[8] = 0;
            int128_t** var_f8_10 = &var_58;
            var_f0 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&var_108);
            int32_t var_18c_2 = 0;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&var_168);
            rbx_1 = 1;
        }
        else
        {
            var_108 = &data_52d0a8;
            int64_t var_100_7 = 1;
            int64_t var_f8_9 = 8;
            int128_t var_f0_3 = {0};
            std::io::stdio::_print::he918bceb0c89db46(&var_108);
            r13_1 = 1;
            rbx_1 = 0;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$std..path..Path$GT$$GT$::h64f669095bad1067(
        &var_128);
    
    if (~rbx_1 & var_140 != -0x8000000000000000)
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&var_140);
    
    return nullptr;
}
