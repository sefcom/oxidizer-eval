
  void fd::fmt::FormatTemplate::replace_separator::ha44a6270c1ec8ca3(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    if (!arg4)
    {
        *(arg1 + 8) = arg2;
        arg1[1] = arg3;
        *arg1 = -0x8000000000000000;
        return;
    }
    
    int64_t rax_1;
    int64_t rdx;
    rax_1 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h48a23d67ea2efec0(arg3, 1, 1);
    int64_t var_148 = rax_1;
    int64_t var_140_1 = rdx;
    int64_t var_138_1 = 0;
    int128_t var_128;
    std::path::Path::components::hd0346d362206f2e9(&var_128, arg2, arg3);
    int128_t var_f8;
    int128_t var_40_1 = var_f8;
    int128_t var_108;
    int128_t var_50_1 = var_108;
    int128_t var_118;
    int128_t var_60_1 = var_118;
    int128_t var_70 = var_128;
    char rax_2 = 0xb;
    
    while (true)
    {
        char var_a8 = 0xb;
        
        if (rax_2 != 0xb)
        {
            int64_t var_78;
            var_f8 = var_78;
            int128_t var_87;
            var_108 = var_87;
            int128_t var_97;
            var_118 = var_97;
            int128_t var_a7;
            var_128 = var_a7;
            var_128 = rax_2;
            
            if (rax_2 == 0xa)
                break;
        }
        else
        {
            _$LT$std..path..Components$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h73ed8dd6f02f5cb4(&var_128, &var_70);
            
            if (var_128 == 0xa)
                break;
        }
        
        int128_t var_e8 = var_128;
        int64_t var_b8_1 = var_f8;
        uint64_t rax_5 = var_e8;
        int64_t rcx_3 = rax_5 - 5;
        
        if (rax_5 - 6 >= 4)
            rcx_3 = 0;
        
        if (!rcx_3)
        {
            int64_t rbx_2;
            int64_t r13_1;
            
            if (rax_5 != 4)
            {
                int64_t rax_7;
                int64_t rdx_9;
                rax_7 = std::path::Component::as_os_str::hf9025a90ab753f63(&var_e8);
                rbx_2 = rax_7;
                r13_1 = rdx_9;
            }
            else
            {
                int64_t r14_1 = *var_e8[8];
                rbx_2 = *var_118[8];
                r13_1 = var_108;
                std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, arg4, arg5);
                std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, arg4, arg5);
                std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, r14_1, var_118);
                std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, arg4, arg5);
            }
            
            std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, rbx_2, r13_1);
        }
        else
        {
            if (rcx_3 != 1)
            {
                int64_t rax_6;
                int64_t rdx_4;
                rax_6 = std::path::Component::as_os_str::hf9025a90ab753f63(&var_e8);
                std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, rax_6, rdx_4);
                core::option::Option$LT$T$GT$::get_or_insert_with::h7382d7627330a388(&var_a8, 
                    &var_70);
            }
            
            if (rcx_3 == 1 || var_a8 != 0xa)
                std::ffi::os_str::OsString::push::h6a19ccb6bfe997ac(&var_148, arg4, arg5);
        }
        
        rax_2 = var_a8;
    }
    
    arg1[1] = var_138_1;
    *arg1 = var_148;
}
