
  int64_t uvx::get_uv_path::h0750ce6cdeed20ac(int64_t* arg1, int64_t arg2, uint64_t arg3, int64_t arg4)

{
    void** const r14 = -0x8000000000000000;
    int64_t rbx;
    rbx = 1;
    int64_t* var_120;
    void** const var_110;
    int64_t* var_e0;
    char var_d0;
    int64_t* var_c8;
    void* const var_b8;
    int64_t** var_a8;
    uint64_t var_98;
    int64_t* var_90;
    
    if (arg4)
    {
        uvx::get_uv_path::_$u7b$$u7b$closure$u7d$$u7d$::hb3af74d129f8e8a0(&var_110, arg2, arg3, 
            arg4);
        r14 = var_110;
        int64_t* var_108;
        uint64_t var_100;
        
        if (r14 != -0x8000000000000000)
        {
            std::fs::exists::h9cadd70709e452ac(&var_d0, var_108);
            char var_cf;
            
            if (var_d0 == 1)
            {
                var_e0 = var_c8;
                var_90 = var_108;
                uint64_t var_88_1 = var_100;
                var_b8 = &var_90;
                uint64_t (* var_b0_1)(int64_t* arg1, int64_t arg2) = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
                var_a8 = &var_e0;
                int64_t (* var_a0_1)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_110 = &data_463010;
                int64_t var_108_1 = 3;
                int64_t var_f0_1 = 0;
                void* const* var_100_1 = &var_b8;
                int64_t var_f8_1 = 2;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_110);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h65e5ef1b69c12763(var_e0);
            }
            else if (var_cf)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hb5df393ff8a371b0(&var_110, var_108, var_100);
                arg1[2] = var_100;
                *arg1 = var_110;
                /* tailcall */
                return core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h1594e359a3e45c89(r14, var_108);
            }
            var_98 = var_100;
            var_120 = var_108;
            rbx = 0;
        }
        else
        {
            var_98 = var_100;
            var_120 = var_108;
            r14 = -0x8000000000000000;
        }
    }
    
    void** const var_118 = r14;
    var_b8 = &data_4097f0;
    int64_t (* var_b0_2)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5eeb34b393a656f6;
    var_110 = &data_463040;
    int64_t var_108_2 = 1;
    int64_t var_f0_2 = 0;
    void* const* var_100_2 = &var_b8;
    int64_t var_f8_2 = 1;
    void var_48;
    core::option::Option$LT$T$GT$::map_or_else::h3d837e6f33a5f387(&var_48, &var_110);
    std::path::Path::join::h73505886d6b9b383(&var_d0, arg2, arg3, &var_48);
    r14 = 1;
    std::fs::exists::h9cadd70709e452ac(&var_110, var_c8);
    char rax_4 = var_110;
    int64_t result;
    int64_t result_1;
    
    if (rax_4 || *var_110[1] & 1)
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h990fa02aacbdfeb0(rax_4, var_108_2);
        result = result_1;
        arg1[2] = result;
        *arg1 = var_d0;
        rbx = rbx;
        
        if (!(rbx & 1))
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h8f4b31d99210b02c(var_118, 
                var_120);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$std..io..error..Error$GT$$GT$::h990fa02aacbdfeb0(rax_4, var_108_2);
        int128_t var_78;
        
        if (!rbx)
        {
            int64_t* var_58 = var_120;
            uint64_t var_50_1 = var_98;
            var_e0 = var_c8;
            int64_t result_2 = result_1;
            var_b8 = &var_58;
            uint64_t (* var_b0_3)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            int64_t** var_a8_1 = &var_e0;
            uint64_t (* var_a0_2)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            var_110 = &data_463050;
            int64_t var_108_4 = 2;
            int64_t var_f0_4 = 0;
            void* const* var_100_4 = &var_b8;
            int64_t var_f8_4 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h3d837e6f33a5f387(&var_90, &var_110);
            var_78 = var_90;
            int64_t var_80;
            int64_t var_68_2 = var_80;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h8f4b31d99210b02c(var_118, var_120);
            r14 = nullptr;
        }
        else
        {
            var_90 = var_c8;
            int64_t result_3 = result_1;
            var_e0 = &var_90;
            uint64_t (* var_d8_1)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            var_110 = &data_463070;
            int64_t var_108_3 = 1;
            int64_t var_f0_3 = 0;
            int64_t** var_100_3 = &var_e0;
            int64_t var_f8_3 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h3d837e6f33a5f387(&var_b8, &var_110);
            var_78 = var_b8;
            int64_t** var_68_1 = var_a8;
            r14 = 1;
        }
        
        arg1[1] = std::io::error::Error::new::hdf72be64d8c57d1c(&var_78);
        *arg1 = -0x8000000000000000;
        result =
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h8f4b31d99210b02c(var_d0, var_c8);
        r14 ^= 1;
        rbx |= r14;
        
        if (!(rbx & 1))
            return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h8f4b31d99210b02c(var_118, 
                var_120);
    }
    return result;
}
