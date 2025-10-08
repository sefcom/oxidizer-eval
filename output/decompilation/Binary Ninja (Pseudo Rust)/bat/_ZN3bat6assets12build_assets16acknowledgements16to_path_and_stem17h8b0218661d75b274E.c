
  fn bat::assets::build_assets::acknowledgements::to_path_and_stem::h8b0218661d75b274(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut i64) -> i64

{
    let r13: i64 = arg4[1];
    let rbp: u64 = arg4[2];
    let mut var_60: i128;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_60, r13, rbp);
    let mut rax: *mut i16;
    let mut rdx_1: u64;
    rax = std::path::Path::file_stem::hc69c2d2c61933548(r13, rbp);
    
    if rax == 0
    {
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_60);
    }
    else
    {
        let mut var_a8: i64;
        bat::assets::build_assets::acknowledgements::to_path_and_stem::_$u7b$$u7b$closure$u7d$$u7d$::ha4c4cc66c561dd06(&var_a8, rax, rdx_1);
        let mut var_a0: i128;
        let var_40_1: i128 = var_a0;
        let mut var_48: i64 = var_a8;
        let mut rax_2: i64;
        let mut rdx_3: u64;
        rax_2 = std::path::Path::strip_prefix::h5ec9330b9b24ba92(r13, rbp, arg2);
        let mut var_78: i64;
        
        if rax_2 == 0
        {
            var_78 = -0x8000000000000000;
            'label_832f22:
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_78);
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_48);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_60);
        }
        else
        {
            bat::assets::build_assets::acknowledgements::to_path_and_stem::_$u7b$$u7b$closure$u7d$$u7d$::ha4c4cc66c561dd06(&var_a8, rax_2, rdx_3);
            var_78 = var_a8;
            let rax_4: i64 = var_78;
            
            if rax_4 == -0x8000000000000000
            {
                goto 'label_832f22;
            }
            
            let var_70: i64;
            *arg1.byte_offset(0x38) = var_70;
            arg1[4] = *var_a0[8];
            let zmm0_2: i128 = var_60;
            var_a8 = zmm0_2;
            let var_50: i64;
            *var_a0[8] = var_50;
            let zmm1_1: i128 = var_48;
            arg1[2] = *zmm1_1[8];
            *arg1.byte_offset(0x28) = *var_40_1[8];
            arg1[1] = *var_a0[8];
            *arg1.byte_offset(0x18) = zmm1_1;
            *arg1 = zmm0_2;
            arg1[3] = rax_4;
        }
    }
    
    /* tailcall */
    core::ptr::drop_in_place$LT$walkdir..dent..DirEntry$GT$::h50b222f334d69360(arg4)
}
