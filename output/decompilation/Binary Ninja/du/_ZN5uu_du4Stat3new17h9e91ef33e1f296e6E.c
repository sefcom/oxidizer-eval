
  int64_t* uu_du::Stat::new::h9e91ef33e1f296e6(int64_t* arg1, char* arg2, size_t arg3, int64_t* arg4, void* arg5)

{
    int64_t rdx = -0x8000000000000000 ^ *(arg5 + 0x18);
    int64_t rax = 1;
    
    if (rdx < 3)
        rax = rdx;
    
    size_t var_1b8;
    char rax_1;
    
    if (rax && rax == 1)
    {
        int64_t r12_1 = *(arg5 + 0x20);
        int64_t r13_1 = *(arg5 + 0x28);
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_1b8, arg2, 
            arg3);
        rax_1 = _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0e47005068e24dd(&var_1b8, r12_1, r13_1);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&var_1b8);
    }
    
    if (rax && (rax != 1 || !rax_1))
    {
        int64_t* rdi_4 = &var_1b8;
        
        if (!arg4)
            std::fs::symlink_metadata::hb9962fb65fc66b61(rdi_4, arg2);
        else
            std::fs::DirEntry::metadata::h92d6a6465cae443d(rdi_4, arg4);
    }
    else
        std::fs::metadata::h99fffaa9766a0d76(&var_1b8, arg2);
    
    size_t rcx = var_1b8;
    int64_t var_1b0;
    
    if (rcx != 2)
    {
        int128_t var_1a8;
        int128_t var_d0_1 = var_1a8;
        int128_t var_17c;
        int128_t var_a4_1 = var_17c;
        int32_t var_16c;
        int32_t var_94_1 = var_16c;
        int128_t var_138;
        int128_t var_60_1 = var_138;
        int128_t var_128;
        int128_t var_50_1 = var_128;
        int128_t var_118;
        int128_t var_40_1 = var_118;
        size_t var_e0 = rcx;
        int64_t var_d8_1 = var_1b0;
        int64_t var_198;
        int64_t var_c0_1 = var_198;
        int64_t var_190;
        int128_t var_b8_1 = var_190;
        int32_t var_180;
        int32_t var_a8_1 = var_180;
        int128_t var_168;
        int128_t var_90_1 = var_168;
        int64_t var_158;
        int64_t var_80_1 = var_158;
        int128_t var_150;
        int128_t var_78_1 = var_150;
        int64_t var_140;
        int64_t var_68_1 = var_140;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_1b8, arg2, 
            arg3);
        char rax_3 = std::path::Path::is_dir::h9ac0db933706da51(arg2, arg3);
        int64_t rax_4;
        int64_t rdx_8;
        rax_4 = uu_du::birth_u64::hb35adc6a5de571b6(&var_e0);
        int64_t rsi_8 = 0;
        
        if (!rax_3)
            rsi_8 = var_168;
        
        arg1[0xa] = var_1a8;
        *(arg1 + 0x40) = var_1b8;
        arg1[1] = 0;
        *arg1 = 1;
        arg1[2] = var_190;
        arg1[3] = 0;
        arg1[4] = var_198;
        arg1[6] = rax_4;
        arg1[7] = rdx_8;
        arg1[0xb] = rsi_8;
        arg1[0xc] = var_158;
        arg1[0xd] = 1;
        arg1[0xe] = var_150;
        arg1[0xf] = var_140;
        arg1[0x10] = (var_180 & 0xf000) == 0x4000;
    }
    else
    {
        arg1[2] = var_1b0;
        arg1[1] = 0;
        *arg1 = 2;
    }
    return arg1;
}
