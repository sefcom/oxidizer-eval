
  int64_t uu_cp::copydir::Entry::new::h6fc819f4164af7ea(int64_t* arg1, void* arg2, void* arg3, char arg4)

{
    int64_t rax;
    uint64_t rdx;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h1e9ed5ccbb1261f3(arg3);
    int128_t var_48;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_48, rax, rdx);
    int128_t var_80;
    std::path::Path::join::h29f8b868344b633c(&var_80, *(arg2 + 8), *(arg2 + 0x10), &var_48);
    int64_t rcx_1 = 0;
    *(arg2 + 0x28);
    
    if (!(0 + -(*(arg2 + 0x18))))
        rcx_1 = *(arg2 + 0x20);
    
    void** const var_c8;
    int64_t var_78;
    uint64_t var_70;
    uu_cp::copydir::get_local_to_root_parent::hd5a1f49dc6bab1d8(&var_c8, var_78, var_70, rcx_1);
    
    if (var_c8 != -0x8000000000000000)
    {
        int128_t var_e8 = var_c8;
        int128_t var_68;
        uint64_t r15_1;
        
        if (!arg4)
        {
            r15_1 = *(arg2 + 0x38);
            label_498f2f:
            int64_t r14_1 = *(arg2 + 0x30);
            std::path::Path::join::h8508bcffc5cbd073(&var_68, r14_1, r15_1, &var_e8);
            char result = std::path::Path::is_file::h6e28d87ff76ffc41(r14_1, r15_1);
            int128_t zmm0_3 = var_80;
            var_c8 = zmm0_3;
            int128_t var_b0_1 = var_48;
            int64_t var_58;
            int64_t var_88_1 = var_58;
            int128_t zmm1_1 = var_68;
            int128_t var_98_1 = zmm1_1;
            arg1[8] = var_58;
            *(arg1 + 0x30) = zmm1_1;
            *arg1 = zmm0_3;
            arg1[4] = *var_b0_1[8];
            int64_t var_38;
            arg1[5] = var_38;
            *(arg1 + 0x10) = var_70;
            arg1[9] = result;
            return result;
        }
        
        char rax_2 = std::path::Path::is_dir::h02edbc48c38d7d9e(rax, rdx);
        r15_1 = *(arg2 + 0x38);
        
        if (r15_1)
        {
            int64_t rdi_7 = *(arg2 + 0x30);
            bool rcx_2 = *(rdi_7 + r15_1 - 1);
            
            if (rcx_2 != 0x2f)
            {
                if (!((rax_2 ^ 1) | rcx_2 != 0x5c))
                {
                    label_498e2e:
                    int64_t rax_3 = std::fs::create_dir_all::h55eae5e2d660073f(rdi_7);
                    int64_t var_50 = rax_3;
                    
                    if (!rax_3)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h6803c44012521573(&var_50);
                    else
                    {
                        int64_t var_f0 = rax_3;
                        var_68 = &var_f0;
                        *var_68[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                        var_c8 = &data_55e600;
                        int64_t var_c0_1 = 2;
                        int128_t var_b0;
                        *var_b0[8] = 0;
                        int128_t* var_b8_1 = &var_68;
                        var_b0 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_c8);
                        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb23d8f5d6ef8daac(
                            &var_f0);
                    }
                    
                    goto label_498f2f;
                }
            }
            else if (rax_2)
                goto label_498e2e;
        }
        
        *(arg2 + 0x48);
        int64_t var_b8;
        int64_t rax_4;
        uint64_t rdx_4;
        rax_4 =
            std::path::Path::strip_prefix::hf232be0ca9110327(*var_e8[8], var_b8, *(arg2 + 0x40));
        
        if (rax_4)
        {
            std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_c8, rax_4, 
                rdx_4);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_e8);
            int64_t var_d8_2 = var_b8;
            var_e8 = var_c8;
            goto label_498f2f;
        }
        
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_e8);
    }
    else
        *arg1 = -0x8000000000000000;
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_80);
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_48);
}
