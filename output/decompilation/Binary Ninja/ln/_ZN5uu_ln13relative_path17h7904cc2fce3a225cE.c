
  int64_t uu_ln::relative_path::h7904cc2fce3a225c(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t var_60;
    uucore::features::fs::canonicalize::h081e25290d375d8f(&var_60);
    int64_t result;
    
    if (!(0 + -(var_60)))
    {
        char* rax = std::path::Path::parent::hef287f60afa56900(arg4, arg5);
        
        if (!rax)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        int64_t var_48;
        uucore::features::fs::canonicalize::h081e25290d375d8f(&var_48, rax);
        
        if (var_48 != -0x8000000000000000)
            return uucore::features::fs::make_path_relative_to::haf7baec27cdaaced(arg1, &var_60, 
                &var_48);
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h80afd64e27d603fb(&var_48);
        result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hba0bfa390dca4ccb(&var_60);
    }
    else
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h80afd64e27d603fb(&var_60);
    
    arg1[1] = arg2;
    arg1[2] = arg3;
    *arg1 = -0x8000000000000000;
    return result;
}
