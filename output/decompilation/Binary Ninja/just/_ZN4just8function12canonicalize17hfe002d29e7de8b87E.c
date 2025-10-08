
  int64_t* just::function::canonicalize::hfe002d29e7de8b87(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    void* rax = *arg2;
    void var_70;
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_70, 
        *(rax + 0x10), *(rax + 0x18));
    int32_t var_a0;
    int64_t var_68;
    uint64_t var_60;
    std::path::Path::join::h1eac0ae5e7efa361(&var_a0, var_68, var_60, arg3);
    int64_t var_88;
    uint64_t rdx_2 = std::fs::canonicalize::h0e68419a5b222fcb(&var_88, &var_a0);
    void* rdi_4;
    uint64_t var_90;
    char* var_80;
    
    if (!(0 + -(var_88)))
    {
        int128_t zmm0 = var_88;
        int128_t var_58_1 = zmm0;
        uint64_t var_78;
        uint64_t var_48_1 = var_78;
        var_88 = zmm0;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_70);
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_a0, var_80, var_78);
        
        if (var_a0 != 1)
        {
            int64_t var_98;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_a0, var_98, var_90);
            int64_t rax_4 = var_a0;
            *(arg1 + 0x10) = var_98;
            arg1[1] = rax_4;
            *arg1 = 0;
        }
        else
        {
            just::function::canonicalize::_$u7b$$u7b$closure$u7d$$u7d$::h5fc101f594e3c7cd(&var_a0, 
                var_80, var_78);
            arg1[3] = var_90;
            *(arg1 + 8) = var_a0;
            *arg1 = 1;
        }
        
        rdi_4 = &var_88;
    }
    else
    {
        just::function::canonicalize::_$u7b$$u7b$closure$u7d$$u7d$::h74a6ba135ea1e9ad(&var_a0, 
            var_80, rdx_2);
        int128_t zmm0_1 = var_a0;
        int128_t var_58 = zmm0_1;
        uint64_t var_48 = var_90;
        arg1[3] = var_90;
        *(arg1 + 8) = zmm0_1;
        *arg1 = 1;
        rdi_4 = &var_70;
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(rdi_4);
    return arg1;
}
