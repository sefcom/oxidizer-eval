
  fn uu_du::Stat::new::h9e91ef33e1f296e6(arg1: *mut i64, arg2: *mut i8, arg3: size_t, arg4: *mut i64, arg5: *mut c_void) -> *mut i64

{
    let rdx: i64 = -0x8000000000000000 ^ *arg5.byte_offset(0x18);
    let mut rax: i64 = 1;
    
    if rdx < 3
    {
        rax = rdx;
    }
    
    let mut var_1b8: size_t;
    let mut rax_1: i8;
    
    if rax != 0 && rax == 1
    {
        let r12_1: i64 = *arg5.byte_offset(0x20);
        let r13_1: i64 = *arg5.byte_offset(0x28);
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_1b8, arg2, 
            arg3);
        rax_1 = _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hc0e47005068e24dd(&var_1b8, r12_1, r13_1);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&var_1b8);
    }
    
    if rax != 0 && (rax != 1 || rax_1 == 0)
    {
        let rdi_4: *mut i64 = &var_1b8;
        
        if arg4 == 0
        {
            std::fs::symlink_metadata::hb9962fb65fc66b61(rdi_4, arg2);
        }
        else
        {
            std::fs::DirEntry::metadata::h92d6a6465cae443d(rdi_4, arg4);
        }
    }
    else
    {
        std::fs::metadata::h99fffaa9766a0d76(&var_1b8, arg2);
    }
    
    let rcx: size_t = var_1b8;
    let var_1b0: i64;
    
    if rcx != 2
    {
        let var_1a8: i128;
        let var_d0_1: i128 = var_1a8;
        let var_17c: i128;
        let var_a4_1: i128 = var_17c;
        let var_16c: i32;
        let var_94_1: i32 = var_16c;
        let var_138: i128;
        let var_60_1: i128 = var_138;
        let var_128: i128;
        let var_50_1: i128 = var_128;
        let var_118: i128;
        let var_40_1: i128 = var_118;
        let mut var_e0: size_t = rcx;
        let var_d8_1: i64 = var_1b0;
        let var_198: i64;
        let var_c0_1: i64 = var_198;
        let var_190: i64;
        let var_b8_1: i128 = var_190;
        let var_180: i32;
        let var_a8_1: i32 = var_180;
        let var_168: i128;
        let var_90_1: i128 = var_168;
        let var_158: i64;
        let var_80_1: i64 = var_158;
        let var_150: i128;
        let var_78_1: i128 = var_150;
        let var_140: i64;
        let var_68_1: i64 = var_140;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_1b8, arg2, 
            arg3);
        let rax_3: i8 = std::path::Path::is_dir::h9ac0db933706da51(arg2, arg3);
        let mut rax_4: i64;
        let mut rdx_8: i64;
        rax_4 = uu_du::birth_u64::hb35adc6a5de571b6(&var_e0);
        let mut rsi_8: i64 = 0;
        
        if rax_3 == 0
        {
            rsi_8 = var_168;
        }
        
        arg1[0xa] = var_1a8;
        *arg1.byte_offset(0x40) = var_1b8;
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
    arg1
}
