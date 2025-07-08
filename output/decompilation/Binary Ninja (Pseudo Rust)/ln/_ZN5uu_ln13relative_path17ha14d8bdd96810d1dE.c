
  fn uu_ln::relative_path::ha14d8bdd96810d1d(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut var_d8: i64;
    uucore::features::fs::canonicalize::h71a1e0c6a304f51b(&var_d8, arg2, arg3, 2, 1);
    let mut result: i64;
    
    if var_d8 != -0x8000000000000000
    {
        let mut var_a8: i128 = var_d8;
        let mut rax_2: *mut i8;
        let mut rdx: i64;
        rax_2 = std::path::Path::parent::h65c9a340a6266f2d(arg4, arg5);
        
        if rax_2 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        let mut var_c0: i64;
        uucore::features::fs::canonicalize::h71a1e0c6a304f51b(&var_c0, rax_2, rdx, 2, 1);
        
        if var_c0 == -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hb015fef5ec46fd2f(&var_c0);
            result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&var_a8);
            
            if var_d8 == -0x8000000000000000
            {
                goto 'label_4ba2f6;
            }
            
            goto 'label_4ba2fb;
        }
        
        let var_b0: i64;
        let var_78_1: i64 = var_b0;
        let mut var_88: i128 = var_c0;
        let var_c8: i64;
        let var_58_1: i64 = var_c8;
        let mut var_68: i128 = var_a8;
        let mut var_48: i128;
        uucore::features::fs::make_path_relative_to::h64cbefd3f33a6974(&var_48, &var_68, &var_88);
        let result_1: i64;
        result = result_1;
        arg1[1] = result;
        *arg1 = var_48;
        
        if var_c0 == -0x8000000000000000
        {
            result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hb015fef5ec46fd2f(&var_c0);
        }
        
        if var_d8 == -0x8000000000000000
        {
            return core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hb015fef5ec46fd2f(&var_d8);
        }
    }
    else
    {
        'label_4ba2f6:
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hb015fef5ec46fd2f(&var_d8);
        'label_4ba2fb:
        *arg1.byte_offset(8) = arg2;
        arg1[1] = arg3;
        *arg1 = -0x8000000000000000;
    }
    
    result
}
