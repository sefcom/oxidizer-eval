
  int64_t uu_pinky::platform::unix::Pinky::print_entry::h41deaa8dc6a9a73e(void* arg1, void* arg2)

{
    int64_t var_60;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf329c2e59eb871a4(&var_60, &data_418b9c, 4);
    void* const var_1a8;
    uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_1a8, arg2);
    int64_t var_1a0;
    std::path::PathBuf::push::had6f445dae3e5da7(&var_60, var_1a0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_1a8);
    int64_t var_58;
    std::fs::metadata::heb058fef4c2aae1a(&var_1a8, var_58);
    void* const rdi_5 = var_1a8;
    int32_t rax;
    int64_t r15;
    
    if (rdi_5 != 2)
    {
        int64_t var_140;
        r15 = var_140;
        rax = 0x20;
        char var_170;
        
        if (!(var_170 & 0x10))
            rax = 0x2a;
    }
    else
    {
        rax = 0x3f;
        r15 = 0;
    }
    
    int32_t var_f4 = rax;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h17b85d6b1e25795c(rdi_5, var_1a0);
    int64_t** var_1c0;
    uucore::features::utmpx::Utmpx::user::h7da4603721cbda8f(&var_1c0, arg2);
    int64_t* var_e8 = &var_1c0;
    int64_t (* var_e0)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    int64_t var_d8 = 0;
    int16_t var_d0 = 0x20;
    var_1a8 = &data_419240;
    int64_t var_1a0_1 = 1;
    char const* const var_188 = &data_41a668;
    int64_t var_180 = 1;
    int64_t** var_198_1 = &var_e8;
    int64_t var_190 = 2;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_1c0);
    
    if (*(arg1 + 0x1a))
    {
        uucore::features::utmpx::Utmpx::user::h7da4603721cbda8f(&var_1c0, arg2);
        char* var_1b8;
        uint64_t var_1b0;
        _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h4bb3a5c7c498e57d(&var_e8, var_1b8, var_1b0);
        
        if (!(0 + -(var_e8)))
        {
            int128_t var_78;
            int128_t var_138_1 = var_78;
            int128_t var_88;
            int128_t var_148_1 = var_88;
            int128_t var_98;
            int128_t var_158_1 = var_98;
            int128_t var_a8;
            int128_t var_168_1 = var_a8;
            int128_t var_b8;
            int128_t var_178_1 = var_b8;
            int64_t var_c8;
            var_188 = var_c8;
            var_198_1 = var_d8;
            var_1a8 = var_e8;
            int64_t var_48;
            uu_pinky::platform::unix::gecos_to_fullname::hc5cc590c8c5acc48(&var_48, &var_1a8);
            core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::h6a9a4c57811c6eeb(
                &var_1a8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_1c0);
            
            if (var_48 != -0x8000000000000000)
            {
                int64_t var_38;
                int64_t var_d8_1 = var_38;
                var_e8 = var_48;
                var_1c0 = &var_e8;
                int64_t (* var_1b8_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_1a8 = &data_4f8f60;
                int64_t var_1a0_4 = 1;
                void* const var_188_3 = &data_41a6d8;
                var_180 = 1;
                int64_t*** var_198_4 = &var_1c0;
                int64_t var_190_3 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_e8);
            }
            else
            {
                var_e8 = &data_4f8f80;
                int64_t (* var_e0_2)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2da38598e58e6190;
                var_1a8 = &data_4f8f60;
                int64_t var_1a0_3 = 1;
                void* const var_188_2 = &data_41a6a8;
                var_180 = 1;
                int64_t** var_198_3 = &var_e8;
                int64_t var_190_2 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Passwd$C$std..io..error..Error$GT$$GT$::h9dd5054bcb71dab2(&var_e8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_1c0);
            var_e8 = &data_4f8f80;
            int64_t (* var_e0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2da38598e58e6190;
            var_1a8 = &data_4f8f60;
            int64_t var_1a0_2 = 1;
            void* const var_188_1 = &data_41a6a8;
            var_180 = 1;
            int64_t** var_198_2 = &var_e8;
            int64_t var_190_1 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        }
    }
    
    uucore::features::utmpx::Utmpx::tty_device::h164f6e4ca04cfddc(&var_1c0, arg2);
    var_1a8 = &var_f4;
    int64_t (* var_1a0_5)(int32_t* arg1, int64_t* arg2) =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    int64_t*** var_198_5 = &var_1c0;
    int64_t (* var_190_4)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    int64_t var_188_4 = 0;
    var_180 = 0x20;
    var_e8 = &data_4f8f90;
    int64_t var_e0_3 = 2;
    void* const var_c8_1 = &data_41a708;
    int64_t var_c0 = 2;
    void* const* var_d8_2 = &var_1a8;
    var_d0 = 3;
    std::io::stdio::_print::h5e446ff973c02de6(&var_e8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_1c0);
    
    if (*(arg1 + 0x18))
    {
        if (!r15)
        {
            var_e8 = &data_4f8fb0;
            int64_t (* var_e0_4)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2da38598e58e6190;
            var_1a8 = &data_4f8f60;
            int64_t var_1a0_7 = 1;
            void* const var_188_6 = &data_41a770;
            int64_t var_180_2 = 1;
            int64_t** var_198_7 = &var_e8;
            int64_t var_190_6 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        }
        else
        {
            uu_pinky::platform::unix::idle_string::h2a0abac9e7d11a58(&var_e8, r15);
            var_1c0 = &var_e8;
            int64_t (* var_1b8_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_1a8 = &data_4f8f60;
            int64_t var_1a0_6 = 1;
            void* const var_188_5 = &data_41a770;
            int64_t var_180_1 = 1;
            int64_t*** var_198_6 = &var_1c0;
            int64_t var_190_5 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_e8);
        }
    }
    
    uu_pinky::platform::unix::time_string::h69285d7cb2498297(&var_e8, arg2);
    var_1c0 = &var_e8;
    int64_t (* var_1b8_3)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_1a8 = &data_4f8f60;
    int64_t result_1 = 1;
    int64_t var_188_7 = 0;
    int64_t*** var_198_8 = &var_1c0;
    int64_t var_190_7 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_e8);
    uucore::features::utmpx::Utmpx::host::hfb1a95bf3e0888e1(&var_e8, arg2);
    
    if (!*(arg1 + 0x1d) || !var_d8_2)
        goto label_4634dc;
    
    uucore::features::utmpx::Utmpx::canon_host::h6d7ae94323da986c(&var_1a8, arg2);
    void* const r13_1 = var_1a8;
    int64_t result = result_1;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_e8);
    
    if (-(r13_1) != -0x8000000000000000)
    {
        var_e8 = r13_1;
        int64_t result_2 = result;
        int64_t*** var_d8_3 = var_198_8;
        var_1c0 = &var_e8;
        int64_t (* var_1b8_4)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_1a8 = &data_4f8f60;
        int64_t var_1a0_8 = 1;
        int64_t var_188_8 = 0;
        int64_t*** var_198_9 = &var_1c0;
        var_190_7 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        label_4634dc:
        var_1a8 = &data_4f8f70;
        int64_t var_1a0_9 = 1;
        int64_t var_198_10 = 8;
        var_190_7 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_1a8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h14fcc68f829f922f(&var_e8);
        result = 0;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4cadf87e0dc5da61(var_60, var_58);
    return result;
}
