
  int64_t uu_cp::copydir::Entry::new::heaaef3e8d8dce243(int64_t* arg1, void* arg2, char* arg3, uint64_t arg4, char arg5)

{
    int128_t var_48;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_48, arg3, arg4);
    int128_t var_78;
    std::path::Path::join::h92bb591ebe182d97(&var_78, *(arg2 + 8), *(arg2 + 0x10), &var_48);
    *(arg2 + 0x28);
    int64_t rcx_1;
    
    if (*(arg2 + 0x18) == -0x8000000000000000)
        rcx_1 = 0;
    else
        rcx_1 = *(arg2 + 0x20);
    
    char const (** const var_c8)[0x8f];
    int64_t var_70;
    uint64_t var_68;
    uu_cp::copydir::get_local_to_root_parent::h75359c1e8aa399d0(&var_c8, var_70, var_68, rcx_1);
    
    if (var_c8 != -0x8000000000000000)
    {
        int64_t var_b8;
        int64_t var_d8_1 = var_b8;
        int128_t var_e8 = var_c8;
        int128_t var_60;
        char* r14_1;
        uint64_t r15_1;
        
        if (!arg5)
        {
            r14_1 = *(arg2 + 0x30);
            r15_1 = *(arg2 + 0x38);
            label_50de6f:
            int64_t var_b8_2 = var_d8_1;
            var_c8 = var_e8;
            std::path::Path::join::hb4c158bd60fe0cf5(&var_60, r14_1, r15_1, &var_c8);
            char result = std::path::Path::is_file::h82f08f46fb8d8099(r14_1, r15_1);
            int128_t zmm0_2 = var_78;
            var_c8 = zmm0_2;
            int128_t var_b0_1 = var_48;
            int64_t var_50;
            int64_t var_88_1 = var_50;
            int128_t zmm1_1 = var_60;
            int128_t var_98_1 = zmm1_1;
            arg1[8] = var_50;
            *(arg1 + 0x30) = zmm1_1;
            *arg1 = zmm0_2;
            arg1[4] = *var_b0_1[8];
            int64_t var_38;
            arg1[5] = var_38;
            *(arg1 + 0x10) = var_68;
            arg1[9] = result;
            return result;
        }
        
        char rax_2 = std::path::Path::is_dir::h9ac0db933706da51(arg3, arg4);
        r14_1 = *(arg2 + 0x30);
        r15_1 = *(arg2 + 0x38);
        
        if (rax_2
            & uucore::features::fs::path_ends_with_terminator::h30fe62ab1cf88eee(r14_1, r15_1))
        {
            int64_t rax_4 = std::fs::create_dir_all::h4110e3e76e14203b(r14_1);
            
            if (rax_4)
            {
                int64_t var_d0 = rax_4;
                var_60 = &var_d0;
                *var_60[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                var_c8 = &data_5b62a0;
                int64_t var_c0_1 = 2;
                int128_t var_b0;
                *var_b0[8] = 0;
                int128_t* var_b8_1 = &var_60;
                var_b0 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h414e413090760199(var_d0);
            }
            
            goto label_50de6f;
        }
        
        *(arg2 + 0x48);
        int64_t rax_5;
        uint64_t rdx_4;
        rax_5 =
            std::path::Path::strip_prefix::h5d7e53b0b6c79402(*var_e8[8], var_d8_1, *(arg2 + 0x40));
        
        if (rax_5)
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_c8, rax_5, 
                rdx_4);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_e8);
            var_d8_1 = var_b8;
            var_e8 = var_c8;
            goto label_50de6f;
        }
        
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_e8);
    }
    else
        *arg1 = -0x8000000000000000;
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_78);
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_48);
}
