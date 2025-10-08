
  fn uu_du::Stat::new::hd07a900d361a9fcd(arg1: *mut i64, arg2: i64, arg3: u64, arg4: *mut i64, arg5: *mut c_void) -> *mut i64

{
    let rdx: i64 = -0x8000000000000000 ^ *arg5.byte_offset(0x18);
    let mut rax: i64 = 1;
    
    if rdx < 3
    {
        rax = rdx;
    }
    
    let mut var_190: u64;
    let mut rax_1: i8;
    
    if rax != 0 && rax == 1
    {
        let r13_1: i64 = *arg5.byte_offset(0x20);
        let rbp_1: i64 = *arg5.byte_offset(0x28);
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_190, arg2, 
            arg3);
        rax_1 = _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h5291ddcb580e955f(&var_190, r13_1, rbp_1);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_190);
    }
    
    let var_188: i64;
    let mut rax_2: i64;
    let mut rcx: u64;
    
    if rax != 0 && (rax != 1 || rax_1 == 0)
    {
        let rdi_4: *mut u64 = &var_190;
        
        if arg4 != 0
        {
            std::fs::DirEntry::metadata::h185bce2ef1f407a2(rdi_4, arg4);
            rcx = var_190;
            rax_2 = var_188;
            
            if rcx != 2
            {
                goto 'label_4964a0;
            }
            
            goto 'label_496468;
        }
        
        std::fs::symlink_metadata::h3ef288d09f993fad(rdi_4, arg2);
        rcx = var_190;
        rax_2 = var_188;
        
        if rcx == 2
        {
            goto 'label_496468;
        }
        
        goto 'label_4964a0;
    }
    
    std::fs::metadata::h856c52e7943c3d38(&var_190, arg2);
    rcx = var_190;
    rax_2 = var_188;
    
    if rcx == 2
    {
        'label_496468:
        arg1[2] = rax_2;
        arg1[1] = 0;
        *arg1 = 2;
    }
    else
    {
        'label_4964a0:
        let var_180: i128;
        let var_d0_1: i128 = var_180;
        let var_154: i128;
        let var_a4_1: i128 = var_154;
        let var_144: i32;
        let var_94_1: i32 = var_144;
        let var_110: i128;
        let var_60_1: i128 = var_110;
        let var_100: i128;
        let var_50_1: i128 = var_100;
        let var_f0: i128;
        let var_40_1: i128 = var_f0;
        let var_140: i128;
        let mut r13_2: i64 = var_140;
        let mut var_e0: u64 = rcx;
        let var_d8_1: i64 = rax_2;
        let var_170: i64;
        let var_c0_1: i64 = var_170;
        let var_168: i128;
        let var_b8_1: i128 = var_168;
        let var_158: i32;
        let var_a8_1: i32 = var_158;
        let var_90_1: i128 = var_140;
        let var_130: i64;
        let var_80_1: i64 = var_130;
        let var_128: i128;
        let var_78_1: i128 = var_128;
        let var_118: i64;
        let var_68_1: i64 = var_118;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_190, arg2, 
            arg3);
        let mut rax_3: i64;
        let mut rdx_8: i64;
        rax_3 = uu_du::birth_u64::h1d347758d1f93929(&var_e0);
        let rbp_4: i32 = var_158 & 0xf000;
        
        if rbp_4 == 0x4000
        {
            r13_2 = 0;
        }
        
        arg1[0xa] = var_180;
        *arg1.byte_offset(0x40) = var_190;
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
    
    arg1
}
