
  int64_t uu_ln::relative_path::ha14d8bdd96810d1d(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_d8;
    uucore::features::fs::canonicalize::h71a1e0c6a304f51b(&var_d8, arg2, arg3, 2, 1);
    int64_t result;
    
    if (var_d8 != -0x8000000000000000)
    {
        int128_t var_a8 = var_d8;
        char* rax_2;
        int64_t rdx;
        rax_2 = std::path::Path::parent::h65c9a340a6266f2d(arg4, arg5);
        
        if (!rax_2)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        int64_t var_c0;
        uucore::features::fs::canonicalize::h71a1e0c6a304f51b(&var_c0, rax_2, rdx, 2, 1);
        
        if (var_c0 == -0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hb015fef5ec46fd2f(&var_c0);
            result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff8990cc0a5456e3(&var_a8);
            
            if (var_d8 == -0x8000000000000000)
                goto label_4ba2f6;
            
            goto label_4ba2fb;
        }
        
        int64_t var_b0;
        int64_t var_78_1 = var_b0;
        int128_t var_88 = var_c0;
        int64_t var_c8;
        int64_t var_58_1 = var_c8;
        int128_t var_68 = var_a8;
        int128_t var_48;
        uucore::features::fs::make_path_relative_to::h64cbefd3f33a6974(&var_48, &var_68, &var_88);
        int64_t result_1;
        result = result_1;
        arg1[1] = result;
        *arg1 = var_48;
        
        if (var_c0 == -0x8000000000000000)
            result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hb015fef5ec46fd2f(&var_c0);
        
        if (var_d8 == -0x8000000000000000)
            return core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hb015fef5ec46fd2f(&var_d8);
    }
    else
    {
        label_4ba2f6:
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hb015fef5ec46fd2f(&var_d8);
        label_4ba2fb:
        *(arg1 + 8) = arg2;
        arg1[1] = arg3;
        *arg1 = -0x8000000000000000;
    }
    
    return result;
}
