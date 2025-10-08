
  int64_t bat::assets::build_assets::acknowledgements::to_path_and_stem::h8b0218661d75b274(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    int64_t r13 = arg4[1];
    uint64_t rbp = arg4[2];
    int128_t var_60;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_60, r13, rbp);
    int16_t* rax;
    uint64_t rdx_1;
    rax = std::path::Path::file_stem::hc69c2d2c61933548(r13, rbp);
    
    if (!rax)
    {
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_60);
    }
    else
    {
        int64_t var_a8;
        bat::assets::build_assets::acknowledgements::to_path_and_stem::_$u7b$$u7b$closure$u7d$$u7d$::ha4c4cc66c561dd06(&var_a8, rax, rdx_1);
        int128_t var_a0;
        int128_t var_40_1 = var_a0;
        int64_t var_48 = var_a8;
        int64_t rax_2;
        uint64_t rdx_3;
        rax_2 = std::path::Path::strip_prefix::h5ec9330b9b24ba92(r13, rbp, arg2);
        int64_t var_78;
        
        if (!rax_2)
        {
            var_78 = -0x8000000000000000;
            label_832f22:
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_78);
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_48);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_60);
        }
        else
        {
            bat::assets::build_assets::acknowledgements::to_path_and_stem::_$u7b$$u7b$closure$u7d$$u7d$::ha4c4cc66c561dd06(&var_a8, rax_2, rdx_3);
            var_78 = var_a8;
            int64_t rax_4 = var_78;
            
            if (rax_4 == -0x8000000000000000)
                goto label_832f22;
            
            int64_t var_70;
            *(arg1 + 0x38) = var_70;
            arg1[4] = *var_a0[8];
            int128_t zmm0_2 = var_60;
            var_a8 = zmm0_2;
            int64_t var_50;
            *var_a0[8] = var_50;
            int128_t zmm1_1 = var_48;
            arg1[2] = *zmm1_1[8];
            *(arg1 + 0x28) = *var_40_1[8];
            arg1[1] = *var_a0[8];
            *(arg1 + 0x18) = zmm1_1;
            *arg1 = zmm0_2;
            arg1[3] = rax_4;
        }
    }
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h50b222f334d69360(arg4);
}
