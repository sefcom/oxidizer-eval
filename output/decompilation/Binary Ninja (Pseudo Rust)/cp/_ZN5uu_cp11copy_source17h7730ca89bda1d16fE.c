
  fn uu_cp::copy_source::h7730ca89bda1d16f(arg1: *mut *mut i128, arg2: *mut *mut c_void, arg3: *mut i8, arg4: u64, arg5: *mut i64, arg6: u64, arg7: i8, arg8: *mut c_void, arg9: *mut *mut i8, arg10: *mut i64, arg11: *mut *mut i8) -> *mut i128

{
    if std::path::Path::is_dir::h02edbc48c38d7d9e(arg3, arg4) != 0
    {
        return uu_cp::copydir::copy_directory::hafe385d40a44c739(arg1, arg2, arg3, arg4, arg5, 
            arg6, arg8, arg9, arg10, arg11);
    }
    
    let r8_1: i8 = *arg8.byte_offset(0x5c);
    let mut result_1: *mut c_void;
    uu_cp::construct_dest_path::h35c9b894b22c07c1(&result_1, arg3, arg4, arg5, arg6, arg7, 
        *arg8.byte_offset(0x5a), r8_1);
    let result: *mut i128 = result_1;
    let var_d8: i128;
    let mut var_a8: i128 = var_d8;
    let var_c8: u64;
    let var_c0: i128;
    let var_b0: i64;
    
    if result != -0x7ffffffffffffff4
    {
        arg1[6] = var_b0;
        *arg1.byte_offset(0x20) = var_c0;
        arg1[3] = var_c8;
        *arg1.byte_offset(8) = var_a8;
        *arg1 = result;
        return result;
    }
    
    let mut var_118: i128 = var_a8;
    let var_108_1: u64 = var_c8;
    let rax_2: *mut i64 = *var_118[8];
    uu_cp::copy_file::h2d5f479453081e34(&var_a8, arg2, arg3, arg4, rax_2, var_c8, arg8, arg9, 
        arg10, arg11, 1);
    let mut rcx_5: *mut *mut i128 = arg1;
    
    if (r8_1 & 1) == 0
    {
        goto 'label_4a10e7;
    }
    
    uu_cp::aligned_ancestors::h2e8a6c5e1cc13323(&result_1, arg3, arg4, rax_2);
    let mut var_50: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h22eacf00db38bb5e(&var_50, &result_1);
    let mut var_70: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&var_70, &var_50);
    let mut rsi_7: i64 = var_70;
    
    if rsi_7 == 0
    {
        'label_4a10d5:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0259dd8f81e67d9c(&var_50);
        rcx_5 = arg1;
        'label_4a10e7:
        let var_78: i64;
        rcx_5[6] = var_78;
        let zmm0_2: i128 = var_a8;
        let var_88: i128;
        *rcx_5.byte_offset(0x20) = var_88;
        *rcx_5.byte_offset(0x10) = var_c8;
        *rcx_5 = zmm0_2;
    }
    else
    {
        loop
        {
            let mut var_f8: i64;
            let var_68: i64;
            uucore::features::fs::canonicalize::h2a46952db6a00ca6(&var_f8, rsi_7, var_68, 0, 1);
            
            if var_f8 == -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hd1372b83dff59979(&var_f8);
            }
            else
            {
                let var_f0: *mut *mut i64;
                let var_e8: i64;
                let var_60: *mut i64;
                let var_58: i64;
                uu_cp::copy_attributes::h279b81c598780b21(&result_1, var_f0, var_e8, var_60, 
                    var_58, arg8.byte_offset(0x48));
                
                if result_1 != -0x7ffffffffffffff4
                {
                    arg1[6] = var_b0;
                    let zmm0_3: i128 = result_1;
                    *arg1.byte_offset(0x20) = var_c0;
                    *arg1.byte_offset(0x10) = var_d8;
                    *arg1 = zmm0_3;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_f8);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0259dd8f81e67d9c(&var_50);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_cp..Error$GT$$GT$::h38297071204f1dde(&var_a8);
                    break;
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_f8);
            }
            
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h90db137ad036c527(&var_70, &var_50);
            rsi_7 = var_70;
            
            if rsi_7 == 0
            {
                goto 'label_4a10d5;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_118)
}
