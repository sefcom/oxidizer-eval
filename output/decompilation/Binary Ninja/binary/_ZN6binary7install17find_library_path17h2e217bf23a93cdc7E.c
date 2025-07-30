
  int64_t binary::install::find_library_path::h2e217bf23a93cdc7(int64_t* arg1)

{
    char const* const var_e0;
    void** const var_b8;
    int128_t var_a0;
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
    {
        var_b8 = &data_1ce6df0;
        int64_t var_b0_1 = 1;
        int64_t var_a8_1 = 8;
        var_a0 = {0};
        int64_t rax_1 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6e20);
        var_e0 = &data_45022a[0x15];
        int64_t var_d8_1 = 0xf;
        char const* const var_d0_1 = &data_45022a[0x15];
        int64_t var_c8_1 = 0xf;
        int64_t var_c0_1 = rax_1;
        log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 3, &var_e0);
    }
    
    int128_t s;
    __builtin_memset(&s, 0, 0x20);
    int32_t rax_2;
    rax_2 = !dladdr(strerror, &s);
    char* r14 = s;
    
    if ((!r14 | rax_2) != 1)
    {
        int32_t var_60;
        core::ffi::c_str::CStr::to_str::hfff95a411164d6f7(&var_60, r14, strlen(r14) + 1);
        
        if (var_60 != 1)
        {
            int128_t var_88;
            int64_t var_58;
            uint64_t var_50;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he316f2bb80969970(&var_88, var_58, var_50);
            std::path::PathBuf::pop::h1b25675dc618eb21(&var_88);
            
            if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() >= 3)
            {
                int128_t var_20 = var_88;
                int128_t* var_70 = &var_20;
                uint64_t (* var_68_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h16169839c0f0229e;
                var_b8 = &data_1ce6e00;
                int64_t var_b0_3 = 1;
                *var_a0[8] = 0;
                int128_t** var_a8_3 = &var_70;
                var_a0 = 1;
                int64_t rax_8 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6e38);
                var_e0 = &data_45022a[0x15];
                int64_t var_d8_3 = 0xf;
                char const* const var_d0_3 = &data_45022a[0x15];
                int64_t var_c8_3 = 0xf;
                int64_t var_c0_3 = rax_8;
                log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 3, &var_e0);
            }
            
            int64_t result;
            arg1[2] = result;
            *arg1 = var_88;
            return result;
        }
    }
    
    if (core::sync::atomic::atomic_load::hd7b4c98b0ffd57c6() > 1)
    {
        var_b8 = &data_1ce6e10;
        int64_t var_b0_2 = 1;
        int64_t var_a8_2 = 8;
        int128_t var_a0_1 = {0};
        int64_t rax_5 = log::__private_api::loc::h72c33e8a02a7057c(&data_1ce6e50);
        var_e0 = &data_45022a[0x15];
        int64_t var_d8_2 = 0xf;
        char const* const var_d0_2 = &data_45022a[0x15];
        int64_t var_c8_2 = 0xf;
        int64_t var_c0_2 = rax_5;
        log::__private_api::log::h450dfdf51a11f9e0(&var_b8, 2, &var_e0);
    }
    
    return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he316f2bb80969970(arg1, "/libweekQ", 4);
}
