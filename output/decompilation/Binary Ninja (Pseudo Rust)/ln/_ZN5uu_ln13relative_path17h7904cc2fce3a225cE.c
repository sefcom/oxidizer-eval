
  fn uu_ln::relative_path::h7904cc2fce3a225c(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut var_60: i64;
    uucore::features::fs::canonicalize::h081e25290d375d8f(&var_60);
    let mut result: i64;
    
    if !(0 + -(var_60))
    {
        let rax: *mut i8 = std::path::Path::parent::hef287f60afa56900(arg4, arg5);
        
        if rax == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let mut var_48: i64;
        uucore::features::fs::canonicalize::h081e25290d375d8f(&var_48, rax);
        
        if var_48 != -0x8000000000000000
        {
            return uucore::features::fs::make_path_relative_to::haf7baec27cdaaced(arg1, &var_60, 
                &var_48);
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h80afd64e27d603fb(&var_48);
        result = core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hba0bfa390dca4ccb(&var_60);
    }
    else
    {
        result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h80afd64e27d603fb(&var_60);
    }
    
    arg1[1] = arg2;
    arg1[2] = arg3;
    *arg1 = -0x8000000000000000;
    result
}
