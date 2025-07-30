
  int64_t binary::install::drop_library::h6c2d6da60051269a(int128_t* arg1)

{
    char const* const var_b8;
    char const (** const var_90)[0x0];
    int128_t var_78;
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
    {
        var_90 = &data_1ce6d38;
        int64_t var_88_1 = 1;
        int64_t var_80_1 = 8;
        var_78 = {0};
        int64_t rax_1 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6d78);
        var_b8 = &data_45022a[0x15];
        int64_t var_b0_1 = 0xf;
        char const* const var_a8_1 = &data_45022a[0x15];
        int64_t var_a0_1 = 0xf;
        int64_t var_98_1 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_90, 3, &var_b8);
    }
    
    void var_28;
    binary::install::find_library_path::h2e217bf23a93cdc7(&var_28);
    int128_t var_50;
    int64_t var_20;
    uint64_t var_18;
    std::path::Path::join::hdfe81d13f7920fb5(&var_50, var_20, var_18, &data_45046e);
    int32_t var_60;
    std::fs::File::create::hbeb4c25cf05a2d0f(&var_60, &var_50);
    int128_t* var_c8;
    int64_t var_40;
    int128_t var_38;
    
    if (var_60 != 1)
    {
        int32_t fd_1;
        int32_t fd = fd_1;
        int64_t rax_6;
        int64_t rdx_4;
        rax_6 = _$LT$std..fs..File$u20$as$u20$std..io..Write$GT$::write::h0b55fe44774eb156(&fd, 
            &data_45047a, "eric23Slim$LT$V$C$4_usize$GT$4fi…");
        var_60 = rax_6;
        int64_t var_58_1 = rdx_4;
        
        if (rax_6 && core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
        {
            var_38 = var_50;
            var_c8 = &var_38;
            uint64_t (* var_c0_2)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
            var_90 = &data_1ce6d58;
            int64_t var_88_3 = 1;
            *var_78[8] = 0;
            int128_t** var_80_3 = &var_c8;
            var_78 = 1;
            int64_t rax_8 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6d90);
            var_b8 = &data_45022a[0x15];
            int64_t var_b0_3 = 0xf;
            char const* const var_a8_3 = &data_45022a[0x15];
            int64_t var_a0_3 = 0xf;
            int64_t var_98_3 = rax_8;
            log::__private_api::log::h450dfdf51a11f9e0(&var_90, 1, &var_b8);
        }
        
        char const (** rax_9)[0x0] = std::fs::set_permissions::hdbf67fe33a3ba539(&var_50, 0x1ff);
        var_90 = rax_9;
        
        if (!rax_9)
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_90);
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hc96c7bae30b6e291(&var_90);
            
            if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
            {
                var_38 = var_50;
                var_c8 = &var_38;
                uint64_t (* var_c0_3)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
                var_90 = &data_1ce6c70;
                int64_t var_88_4 = 1;
                *var_78[8] = 0;
                int128_t** var_80_4 = &var_c8;
                var_78 = 1;
                int64_t rax_11 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6da8);
                var_b8 = &data_45022a[0x15];
                int64_t var_b0_4 = 0xf;
                char const* const var_a8_4 = &data_45022a[0x15];
                int64_t var_a0_4 = 0xf;
                int64_t var_98_4 = rax_11;
                log::__private_api::log::h450dfdf51a11f9e0(&var_90, 1, &var_b8);
            }
        }
        
        if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 2)
        {
            var_38 = var_50;
            var_c8 = &var_38;
            uint64_t (* var_c0_4)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
            var_90 = &data_1ce6d68;
            int64_t var_88_5 = 1;
            *var_78[8] = 0;
            int128_t** var_80_5 = &var_c8;
            var_78 = 1;
            int64_t rax_13 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6dc0);
            var_b8 = &data_45022a[0x15];
            int64_t var_b0_5 = 0xf;
            char const* const var_a8_5 = &data_45022a[0x15];
            int64_t var_a0_5 = 0xf;
            int64_t var_98_5 = rax_13;
            log::__private_api::log::h450dfdf51a11f9e0(&var_90, 3, &var_b8);
        }
        
        arg1[1] = var_40;
        *arg1 = var_50;
        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$std..io..error..Error$GT$$GT$::h36b83b7aa703e08b(&var_60);
        core::ptr::drop_in_place$LT$std..fs..File$GT$::h0d00817cc0df8c52(fd);
    }
    else
    {
        if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6())
        {
            var_38 = var_50;
            var_c8 = &var_38;
            uint64_t (* var_c0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
            var_90 = &data_1ce6d48;
            int64_t var_88_2 = 1;
            *var_78[8] = 0;
            int128_t** var_80_2 = &var_c8;
            var_78 = 1;
            int64_t rax_3 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6dd8);
            var_b8 = &data_45022a[0x15];
            int64_t var_b0_2 = 0xf;
            char const* const var_a8_2 = &data_45022a[0x15];
            int64_t var_a0_2 = 0xf;
            int64_t var_98_2 = rax_3;
            log::__private_api::log::h450dfdf51a11f9e0(&var_90, 1, &var_b8);
        }
        
        arg1[1] = var_40;
        *arg1 = var_50;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..File$C$std..io..error..Error$GT$$GT$::h9c58f2ca93495b32(&var_60);
    }
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h11842ea3b2390ec0(&var_28);
}
