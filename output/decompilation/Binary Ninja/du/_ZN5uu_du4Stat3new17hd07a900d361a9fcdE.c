
  int64_t* uu_du::Stat::new::hd07a900d361a9fcd(int64_t* arg1, int64_t arg2, uint64_t arg3, int64_t* arg4, void* arg5)

{
    int64_t rdx = -0x8000000000000000 ^ *(arg5 + 0x18);
    int64_t rax = 1;
    
    if (rdx < 3)
        rax = rdx;
    
    uint64_t var_190;
    char rax_1;
    
    if (rax && rax == 1)
    {
        int64_t r13_1 = *(arg5 + 0x20);
        int64_t rbp_1 = *(arg5 + 0x28);
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_190, arg2, 
            arg3);
        rax_1 = _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5291ddcb580e955f(&var_190, r13_1, rbp_1);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_190);
    }
    
    int64_t var_188;
    int64_t rax_2;
    uint64_t rcx;
    
    if (rax && (rax != 1 || !rax_1))
    {
        uint64_t* rdi_4 = &var_190;
        
        if (arg4)
        {
            std::fs::DirEntry::metadata::h185bce2ef1f407a2(rdi_4, arg4);
            rcx = var_190;
            rax_2 = var_188;
            
            if (rcx != 2)
                goto label_4964a0;
            
            goto label_496468;
        }
        
        std::fs::symlink_metadata::h3ef288d09f993fad(rdi_4, arg2);
        rcx = var_190;
        rax_2 = var_188;
        
        if (rcx == 2)
            goto label_496468;
        
        goto label_4964a0;
    }
    
    std::fs::metadata::h856c52e7943c3d38(&var_190, arg2);
    rcx = var_190;
    rax_2 = var_188;
    
    if (rcx == 2)
    {
        label_496468:
        arg1[2] = rax_2;
        arg1[1] = 0;
        *arg1 = 2;
    }
    else
    {
        label_4964a0:
        int128_t var_180;
        int128_t var_d0_1 = var_180;
        int128_t var_154;
        int128_t var_a4_1 = var_154;
        int32_t var_144;
        int32_t var_94_1 = var_144;
        int128_t var_110;
        int128_t var_60_1 = var_110;
        int128_t var_100;
        int128_t var_50_1 = var_100;
        int128_t var_f0;
        int128_t var_40_1 = var_f0;
        int128_t var_140;
        int64_t r13_2 = var_140;
        uint64_t var_e0 = rcx;
        int64_t var_d8_1 = rax_2;
        int64_t var_170;
        int64_t var_c0_1 = var_170;
        int128_t var_168;
        int128_t var_b8_1 = var_168;
        int32_t var_158;
        int32_t var_a8_1 = var_158;
        int128_t var_90_1 = var_140;
        int64_t var_130;
        int64_t var_80_1 = var_130;
        int128_t var_128;
        int128_t var_78_1 = var_128;
        int64_t var_118;
        int64_t var_68_1 = var_118;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_190, arg2, 
            arg3);
        int64_t rax_3;
        int64_t rdx_8;
        rax_3 = uu_du::birth_u64::h1d347758d1f93929(&var_e0);
        int32_t rbp_4 = var_158 & 0xf000;
        
        if (rbp_4 == 0x4000)
            r13_2 = 0;
        
        arg1[0xa] = var_180;
        *(arg1 + 0x40) = var_190;
        arg1[1] = 0;
        *arg1 = 1;
        arg1[2] = var_168;
        arg1[3] = 0;
        arg1[4] = var_170;
        arg1[6] = rax_3;
        arg1[7] = rdx_8;
        arg1[0xb] = r13_2;
        arg1[0xc] = var_130;
        arg1[0xd] = 1;
        arg1[0xe] = var_128;
        arg1[0xf] = var_118;
        arg1[0x10] = rbp_4 == 0x4000;
    }
    
    return arg1;
}
