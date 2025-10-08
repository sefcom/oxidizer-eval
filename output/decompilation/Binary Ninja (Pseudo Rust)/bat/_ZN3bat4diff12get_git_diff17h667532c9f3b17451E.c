
  fn bat::diff::get_git_diff::h667532c9f3b17451(arg1: *mut i64, arg2: i64) -> *mut i64

{
    let mut var_e0: i64;
    git2::repo::Repository::discover::h760b1c7850f22f55(&var_e0, arg2);
    
    if var_e0 == 0
    {
        let var_d8: i64;
        let mut var_178: i64 = var_d8;
        let rax_2: *mut i8 = git2::repo::Repository::workdir::h619817e5d5e1772f(&var_178);
        
        if rax_2 == 0
        {
            *arg1 = 0;
        }
        else
        {
            std::fs::canonicalize::h98c3c6a1a4f658e3(&var_e0, rax_2);
            let rax_3: i64 = var_e0;
            
            if -(rax_3) != -0x8000000000000000
            {
                let var_118_1: i128 = var_d8;
                let mut var_120: i64 = rax_3;
                std::fs::canonicalize::h98c3c6a1a4f658e3(&var_e0, arg2);
                let rax_4: i64 = var_e0;
                
                if rax_4 != -0x8000000000000000
                {
                    let zmm0_2: i128 = var_d8;
                    let mut var_138: i64 = rax_4;
                    let mut rax_5: i64;
                    let mut rdx_2: u64;
                    rax_5 = std::path::Path::strip_prefix::h913184da9d0b9c8a(zmm0_2, *zmm0_2[8], 
                        &var_120);
                    
                    if rax_5 == 0
                    {
                        *arg1 = 0;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(
                            &var_138);
                    }
                    else
                    {
                        let mut var_108: i64 = rax_5;
                        let var_100_1: u64 = rdx_2;
                        git2::diff::DiffOptions::new::h6d38071769cecf5c(&var_e0);
                        let mut var_168: i64;
                        _$LT$$RF$std..path..Path$u20$as$u20$git2..util..IntoCString$GT$::into_c_string::h962ca5c339d65cdc(&var_168, rax_5, rdx_2);
                        
                        if var_168 == 0
                        {
                            let var_160: *mut c_void;
                            let mut var_158: i64;
                            git2::diff::DiffOptions::pathspec::hee9fa19c147d5701(&var_e0, var_160, 
                                var_158);
                            let var_58_1: i32 = 0;
                            git2::repo::Repository::diff_index_to_workdir::h41c9178abf132aba(
                                &var_168, &var_178, nullptr, &var_e0);
                            
                            if var_168 != 0
                            {
                                core::ptr::drop_in_place$LT$core..result..Result$LT$git2..diff..Diff$C$git2..error..Error$GT$$GT$::h8a2e50b75ce3923c(&var_168);
                                goto 'label_838f2f;
                            }
                            
                            let mut var_170: *mut c_void = var_160;
                            let mut rax_8: i64;
                            let mut rdx_5: i64;
                            rax_8 =
                                std::thread::local::LocalKey$LT$T$GT$::with::h0151e2ed74536e37();
                            var_158 = data_acbb90;
                            var_168 = *data_acbb80;
                            let var_140_1: i64 = rdx_5;
                            let mut var_f8: *mut i64 = &var_108;
                            let mut var_179: ();
                            let var_f0_1: *mut c_void = &var_179;
                            let var_e8_1: *mut i64 = &var_168;
                            let mut var_30: ();
                            git2::diff::Diff::foreach::h85fe163309838d14(&var_30, &var_170, 
                                &var_179, &data_ace3d8, nullptr, &var_f8, &var_f8, &data_ace400, 0);
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$git2..error..Error$GT$$GT$::heceaeca022ce2839(&var_30);
                            let zmm0_4: i128 = var_168;
                            *arg1.byte_offset(0x20) = rax_8;
                            *arg1.byte_offset(0x10) = var_158;
                            *arg1 = zmm0_4;
                            core::ptr::drop_in_place$LT$git2..diff..Diff$GT$::h5b556be8730d3554(
                                &var_170);
                            core::ptr::drop_in_place$LT$git2..diff..DiffOptions$GT$::hf1fb7f201763b2d1(&var_e0);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(
                                &var_138);
                        }
                        else
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..ffi..c_str..CString$C$git2..error..Error$GT$$GT$::h28c6f0eb276f9ba3(&var_168);
                            'label_838f2f:
                            *arg1 = 0;
                            core::ptr::drop_in_place$LT$git2..diff..DiffOptions$GT$::hf1fb7f201763b2d1(&var_e0);
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(
                                &var_138);
                        }
                    }
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::he5c06a2f538ef3f0(&var_e0);
                    *arg1 = 0;
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_120);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::he5c06a2f538ef3f0(&var_e0);
                *arg1 = 0;
            }
        }
        
        core::ptr::drop_in_place$LT$git2..repo..Repository$GT$::ha0281e9bd3077121(&var_178);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$git2..repo..Repository$C$git2..error..Error$GT$$GT$::h602c4f75958ce7cb(&var_e0);
        *arg1 = 0;
    }
    
    arg1
}
