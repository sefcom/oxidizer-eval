
  fn uu_sort::merge::replace_output_file_in_input_files::hfdb0f95794ab3c79(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: *mut c_void) -> u64

{
    let mut var_138: i64 = -0x8000000000000000;
    let mut result: u64;
    let mut var_c8: i64;
    
    if arg3 == 0
    {
        var_c8 = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$$GT$::hfecc749772c142e4(&var_c8);
        result = 0;
    }
    else
    {
        let mut r15_1: *mut i128 = arg1;
        let mut var_108: i128;
        std::fs::canonicalize::h70c6b6ce54d47e66(&var_108, arg3);
        var_c8 = var_108;
        
        if var_c8 < -0x7ffffffffffffffe
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$$GT$::hfecc749772c142e4(&var_c8);
            result = 0;
        }
        else
        {
            if arg2 == 0
            {
                result = 0;
            }
            else
            {
                let r12_2: i64 = *var_c8[8];
                let mut result_1: u64;
                let result_3: u64 = result_1;
                let mut rbx_3: i64 = arg2 * 0x18;
                
                loop
                {
                    r15_1[1];
                    let mut var_a0: i64;
                    std::fs::canonicalize::h70c6b6ce54d47e66(&var_a0, *r15_1.byte_offset(8));
                    let var_98: i64;
                    let var_90: i64;
                    
                    if var_a0 == -0x8000000000000000
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hfc2246f970fc19de(&var_a0);
                    }
                    else if _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h35303d53f5dfabe5(var_98, var_90, r12_2, result_3) == 0
                    {
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb52824ed0e0c3e52(
                            &var_a0);
                    }
                    else
                    {
                        let mut result_2: u64;
                        
                        if var_138 != -0x8000000000000000
                        {
                            let var_130: i64;
                            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h87b9b7723d120741(&var_108, var_130, result_2);
                            let zmm0_6: i128 = var_108;
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
                            let rax_4: i64 = *var_108[8];
                            
                            if rax_4 == -0x8000000000000000
                            {
                                result = result_1;
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb52824ed0e0c3e52(&var_a0);
                                break;
                            }
                            
                            let zmm0_2: i128 = result_1;
                            let mut var_13c: i32 = var_108;
                            let mut var_120: i64 = rax_4;
                            let mut rax_5: i8;
                            let mut rdx_3: i64;
                            rax_5 = std::fs::copy::hb892bade5913721c(&var_a0, &var_120);
                            
                            if (rax_5 & 1) != 0
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
                            let zmm0_3: i128 = var_108;
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
                    let temp0_1: i64 = rbx_3;
                    rbx_3 -= 0x18;
                    
                    if temp0_1 == 0x18
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
    result
}
