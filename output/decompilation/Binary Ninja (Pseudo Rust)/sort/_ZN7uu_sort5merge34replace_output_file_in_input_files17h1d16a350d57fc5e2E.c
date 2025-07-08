
  fn uu_sort::merge::replace_output_file_in_input_files::h1d16a350d57fc5e2(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: *mut c_void) -> u64

{
    let r14: *mut i64;
    let var_18: *mut i64 = r14;
    let mut var_158: i64 = -0x8000000000000000;
    
    if arg3 != 0
    {
        let mut var_138: i128;
        std::fs::canonicalize::h5ee5ffd7248c8d7c(&var_138, arg3);
        let mut var_178: i128 = var_138;
        let rdx_1: i64 = var_178;
        let mut rsi_1: i64 = -0x7ffffffffffffffe;
        let mut rax_2: i64 = rdx_1;
        
        if rdx_1 >= -0x7ffffffffffffffe
        {
            let var_50_1: i64 = -0x7ffffffffffffffe;
            let mut result_1: u64;
            let result_3: u64 = result_1;
            let mut var_a8: i128 = var_178;
            let mut var_40: *mut i64 = arg1;
            let var_38_1: *mut c_void = &arg1[arg2 * 3];
            let i_2: *mut i128 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8f07d4e8b2ff4fed(&var_40);
            
            if i_2 != 0
            {
                let mut i_1: *mut i128 = i_2;
                let mut i: *mut i128;
                
                do
                {
                    i_1[1];
                    let mut var_f0: i64;
                    std::fs::canonicalize::h5ee5ffd7248c8d7c(&var_f0, *i_1.byte_offset(8));
                    
                    if var_f0 == -0x8000000000000000
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&var_f0);
                    }
                    else
                    {
                        let mut var_d8: i128 = var_f0;
                        let var_e0: i64;
                        
                        if _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(*var_d8[8], var_e0, *var_a8[8], result_3) == 0
                        {
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(
                                &var_d8);
                        }
                        else if var_158 != -0x8000000000000000
                        {
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbd5fd95fcc29e6fb(&var_138, &var_158);
                            let zmm0_7: i128 = var_138;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h5ef0e2e0fb72183b(i_1);
                            i_1[1] = result_1;
                            *i_1 = zmm0_7;
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(
                                &var_d8);
                        }
                        else
                        {
                            uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_138, 
                                arg5);
                            let rax_7: i64 = *var_138[8];
                            let mut result: u64;
                            
                            if rax_7 == -0x8000000000000000
                            {
                                result = result_1;
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&var_d8);
                                'label_529f9a:
                                
                                if var_f0 == -0x8000000000000000
                                {
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&var_f0);
                                }
                                
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&var_a8);
                                
                                if var_178 == -0x8000000000000000
                                {
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&var_178);
                                }
                                
                                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7575e676c0bf6e13(&var_158);
                                return result;
                            }
                            
                            let fd: i32 = var_138;
                            let mut var_c0: i64 = rax_7;
                            let var_b8_1: i128 = result_1;
                            var_138 = var_d8;
                            let mut rax_9: i64;
                            let mut rdx_4: i64;
                            rax_9 = std::fs::copy::ha09958592b5817e3(&var_138, &var_c0);
                            
                            if rax_9 != 0
                            {
                                var_138 = 4;
                                *var_138[8] = rdx_4;
                                result =
                                    alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_138);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&var_c0);
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::hbb578aa8d27e7bc5(
                                    fd);
                                goto 'label_529f9a;
                            }
                            
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbd5fd95fcc29e6fb(&var_138, &var_c0);
                            let zmm0_4: i128 = var_138;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h5ef0e2e0fb72183b(i_1);
                            i_1[1] = var_e0;
                            *i_1 = zmm0_4;
                            result_1 = *var_b8_1[8];
                            var_138 = var_c0;
                            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7575e676c0bf6e13(&var_158);
                            let result_2: u64 = result_1;
                            var_158 = var_138;
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::hbb578aa8d27e7bc5(fd);
                        }
                        
                        if var_f0 == -0x8000000000000000
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&var_f0);
                        }
                    }
                    
                    i = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8f07d4e8b2ff4fed(&var_40);
                    i_1 = i;
                } while i != 0;
            }
            
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&var_a8);
            rax_2 = var_178;
            rsi_1 = var_50_1;
        }
        
        if rax_2 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&var_178);
        }
        else if rax_2 != -0x7fffffffffffffff && rdx_1 < rsi_1
        {
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&var_178);
        }
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7575e676c0bf6e13(&var_158);
    0
}
