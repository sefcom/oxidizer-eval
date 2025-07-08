
  fn uu_cp::copy_source::ha83fca4ba2cc8af7(arg1: *mut i128, arg2: *mut i64, arg3: *mut i8, arg4: u64, arg5: *mut i64, arg6: u64, arg7: i8, arg8: *mut i64, arg9: *mut i64, arg10: *mut i64, arg11: *mut i64) -> *mut i64

{
    if std::path::Path::is_dir::h9ac0db933706da51(arg3, arg4) != 0
    {
        return uu_cp::copydir::copy_directory::h28c1a7346111a6c9(arg1, arg2, arg3, arg4, arg5, 
            arg6, arg8, arg9, arg10, arg11, 1);
    }
    
    let r11_1: i8 = *arg8.byte_offset(0x44);
    let mut result_1: *mut c_void;
    uu_cp::construct_dest_path::hfc66a1b24656cf26(&result_1, arg3, arg4, arg5, arg6, arg7, 
        *arg8.byte_offset(0x42), r11_1);
    let result: *mut i64 = result_1;
    let var_d0: i128;
    let mut var_98: i128 = var_d0;
    let var_c0: u64;
    let var_b8: i128;
    let var_a8: i128;
    
    if result != 0xd
    {
        arg1[3] = var_a8;
        arg1[2] = var_b8;
        *arg1.byte_offset(0x18) = var_c0;
        *arg1.byte_offset(8) = var_98;
        *arg1 = result;
        return result;
    }
    
    let mut var_138: i128 = var_98;
    let var_128_1: u64 = var_c0;
    uu_cp::copy_file::h3a721c0b700148ba(&var_98, arg2, arg3, arg4, *var_138[8], var_c0, arg8, arg9, 
        arg10, arg11, 1);
    let mut rax_2: *mut i128 = arg1;
    
    if r11_1 == 0
    {
        goto 'label_50430b;
    }
    
    uu_cp::aligned_ancestors::h4cf131ef21f6aa74(&result_1, arg3, arg4, *var_138[8]);
    let mut var_50: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6511090ed0ef25d3(&var_50, &result_1);
    let mut var_f8: i64;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&var_f8, &var_50);
    let mut rsi_7: i64 = var_f8;
    
    if rsi_7 == 0
    {
        'label_504303:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&var_50);
        rax_2 = arg1;
        'label_50430b:
        let zmm0_2: i128 = var_98;
        let var_68: i128;
        rax_2[3] = var_68;
        let var_78: i128;
        rax_2[2] = var_78;
        rax_2[1] = var_c0;
        *rax_2 = zmm0_2;
    }
    else
    {
        loop
        {
            let mut var_150: i64;
            let var_f0: i64;
            uucore::features::fs::canonicalize::hb17a5541a57984e7(&var_150, rsi_7, var_f0, 0, 1);
            
            if var_150 == -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_150);
            }
            else
            {
                let var_140: i64;
                let var_108_1: i64 = var_140;
                let mut var_118: i128 = var_150;
                let var_e8: *mut c_void;
                let var_e0: i64;
                uu_cp::copy_attributes::h0ca124c6c7245f78(&result_1, *var_118[8], var_140, var_e8, 
                    var_e0, &arg8[6]);
                
                if result_1 != 0xd
                {
                    let zmm0_4: i128 = result_1;
                    arg1[3] = var_a8;
                    arg1[2] = var_b8;
                    arg1[1] = var_d0;
                    *arg1 = zmm0_4;
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_118);
                    
                    if var_150 == -0x8000000000000000
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_150);
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$std..path..Path$C$$RF$std..path..Path$RP$$GT$$GT$::h0c6e777e5bffd2a5(&var_50);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$uu_cp..Error$GT$$GT$::h24b7025726004fbd(&var_98);
                    break;
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_118);
                
                if var_150 == -0x8000000000000000
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hc3882598e48cbc71(&var_150);
                }
            }
            
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h109fcabe2eb45d25(&var_f8, &var_50);
            rsi_7 = var_f8;
            
            if rsi_7 == 0
            {
                goto 'label_504303;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_138)
}
