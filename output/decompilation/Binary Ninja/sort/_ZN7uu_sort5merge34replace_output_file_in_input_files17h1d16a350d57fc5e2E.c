
  uint64_t uu_sort::merge::replace_output_file_in_input_files::h1d16a350d57fc5e2(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, void* arg5)

{
    int64_t* r14;
    int64_t* var_18 = r14;
    int64_t var_158 = -0x8000000000000000;
    
    if (arg3)
    {
        int128_t var_138;
        std::fs::canonicalize::h5ee5ffd7248c8d7c(&var_138, arg3);
        int128_t var_178 = var_138;
        int64_t rdx_1 = var_178;
        int64_t rsi_1 = -0x7ffffffffffffffe;
        int64_t rax_2 = rdx_1;
        
        if (rdx_1 >= -0x7ffffffffffffffe)
        {
            int64_t var_50_1 = -0x7ffffffffffffffe;
            uint64_t result_1;
            uint64_t result_3 = result_1;
            int128_t var_a8 = var_178;
            int64_t* var_40 = arg1;
            void* var_38_1 = &arg1[arg2 * 3];
            int128_t* i_2 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8f07d4e8b2ff4fed(&var_40);
            
            if (i_2)
            {
                int128_t* i_1 = i_2;
                int128_t* i;
                
                do
                {
                    i_1[1];
                    int64_t var_f0;
                    std::fs::canonicalize::h5ee5ffd7248c8d7c(&var_f0, *(i_1 + 8));
                    
                    if (var_f0 == -0x8000000000000000)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&var_f0);
                    else
                    {
                        int128_t var_d8 = var_f0;
                        int64_t var_e0;
                        
                        if (!_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h1d8861b9e1bd0bd7(*var_d8[8], var_e0, *var_a8[8], result_3))
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(
                                &var_d8);
                        else if (var_158 != -0x8000000000000000)
                        {
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbd5fd95fcc29e6fb(&var_138, &var_158);
                            int128_t zmm0_7 = var_138;
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
                            int64_t rax_7 = *var_138[8];
                            uint64_t result;
                            
                            if (rax_7 == -0x8000000000000000)
                            {
                                result = result_1;
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&var_d8);
                                label_529f9a:
                                
                                if (var_f0 == -0x8000000000000000)
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&var_f0);
                                
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&var_a8);
                                
                                if (var_178 == -0x8000000000000000)
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&var_178);
                                
                                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7575e676c0bf6e13(&var_158);
                                return result;
                            }
                            
                            int32_t fd = var_138;
                            int64_t var_c0 = rax_7;
                            int128_t var_b8_1 = result_1;
                            var_138 = var_d8;
                            int64_t rax_9;
                            int64_t rdx_4;
                            rax_9 = std::fs::copy::ha09958592b5817e3(&var_138, &var_c0);
                            
                            if (rax_9)
                            {
                                var_138 = 4;
                                *var_138[8] = rdx_4;
                                result =
                                    alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_138);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&var_c0);
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::hbb578aa8d27e7bc5(
                                    fd);
                                goto label_529f9a;
                            }
                            
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hbd5fd95fcc29e6fb(&var_138, &var_c0);
                            int128_t zmm0_4 = var_138;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h5ef0e2e0fb72183b(i_1);
                            i_1[1] = var_e0;
                            *i_1 = zmm0_4;
                            result_1 = *var_b8_1[8];
                            var_138 = var_c0;
                            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7575e676c0bf6e13(&var_158);
                            uint64_t result_2 = result_1;
                            var_158 = var_138;
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::hbb578aa8d27e7bc5(fd);
                        }
                        
                        if (var_f0 == -0x8000000000000000)
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&var_f0);
                    }
                    
                    i = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8f07d4e8b2ff4fed(&var_40);
                    i_1 = i;
                } while (i);
            }
            
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&var_a8);
            rax_2 = var_178;
            rsi_1 = var_50_1;
        }
        
        if (rax_2 == -0x8000000000000000)
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h499879e130aef05f(&var_178);
        else if (rax_2 != -0x7fffffffffffffff && rdx_1 < rsi_1)
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he13e3ddf5562bb7e(&var_178);
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h7575e676c0bf6e13(&var_158);
    return 0;
}
