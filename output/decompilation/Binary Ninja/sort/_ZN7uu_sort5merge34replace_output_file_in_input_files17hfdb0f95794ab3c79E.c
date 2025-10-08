
  uint64_t uu_sort::merge::replace_output_file_in_input_files::hfdb0f95794ab3c79(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, void* arg5)

{
    int64_t var_138 = -0x8000000000000000;
    uint64_t result;
    int64_t var_c8;
    
    if (!arg3)
    {
        var_c8 = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$$GT$::hfecc749772c142e4(&var_c8);
        result = 0;
    }
    else
    {
        int128_t* r15_1 = arg1;
        int128_t var_108;
        std::fs::canonicalize::h70c6b6ce54d47e66(&var_108, arg3);
        var_c8 = var_108;
        
        if (var_c8 < -0x7ffffffffffffffe)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$$GT$::hfecc749772c142e4(&var_c8);
            result = 0;
        }
        else
        {
            if (!arg2)
                result = 0;
            else
            {
                int64_t r12_2 = *var_c8[8];
                uint64_t result_1;
                uint64_t result_3 = result_1;
                int64_t rbx_3 = arg2 * 0x18;
                
                while (true)
                {
                    r15_1[1];
                    int64_t var_a0;
                    std::fs::canonicalize::h70c6b6ce54d47e66(&var_a0, *(r15_1 + 8));
                    int64_t var_98;
                    int64_t var_90;
                    
                    if (var_a0 == -0x8000000000000000)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hfc2246f970fc19de(&var_a0);
                    else if (!_$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h35303d53f5dfabe5(var_98, var_90, r12_2, result_3))
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb52824ed0e0c3e52(
                            &var_a0);
                    else
                    {
                        uint64_t result_2;
                        
                        if (var_138 != -0x8000000000000000)
                        {
                            int64_t var_130;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87b9b7723d120741(&var_108, var_130, result_2);
                            int128_t zmm0_6 = var_108;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hd8e262b15878059a(r15_1);
                            r15_1[1] = result_1;
                            *r15_1 = zmm0_6;
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb52824ed0e0c3e52(
                                &var_a0);
                        }
                        else
                        {
                            uu_sort::tmp_dir::TmpDirWrapper::next_file::he098c4319062daf7(&var_108, 
                                arg5);
                            int64_t rax_4 = *var_108[8];
                            
                            if (rax_4 == -0x8000000000000000)
                            {
                                result = result_1;
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb52824ed0e0c3e52(&var_a0);
                                break;
                            }
                            
                            int128_t zmm0_2 = result_1;
                            int32_t var_13c = var_108;
                            int64_t var_120 = rax_4;
                            char rax_5;
                            int64_t rdx_3;
                            rax_5 = std::fs::copy::hb892bade5913721c(&var_a0, &var_120);
                            
                            if (rax_5 & 1)
                            {
                                var_108 = -0x7ffffffffffffffd;
                                *var_108[8] = rdx_3;
                                result =
                                    alloc::boxed::Box$LT$T$GT$::new::h4da5af3d8a2f6642(&var_108);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb52824ed0e0c3e52(&var_120);
                                core::ptr::drop_in_place$LT$std..fs..File$GT$::h03a65ca6f8c2bbc9(
                                    &var_13c);
                                break;
                            }
                            
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87b9b7723d120741(&var_108, zmm0_2, *zmm0_2[8]);
                            int128_t zmm0_3 = var_108;
                            core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::hd8e262b15878059a(r15_1);
                            r15_1[1] = result_1;
                            *r15_1 = zmm0_3;
                            result_1 = *zmm0_2[8];
                            var_108 = var_120;
                            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::he07655bc243cfc68(&var_138);
                            result_2 = result_1;
                            var_138 = var_108;
                            core::ptr::drop_in_place$LT$std..fs..File$GT$::h03a65ca6f8c2bbc9(
                                &var_13c);
                        }
                    }
                    r15_1 += 0x18;
                    int64_t temp0_1 = rbx_3;
                    rbx_3 -= 0x18;
                    
                    if (temp0_1 == 0x18)
                    {
                        result = 0;
                        break;
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb52824ed0e0c3e52(&var_c8);
        }
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::he07655bc243cfc68(&var_138);
    return result;
}
