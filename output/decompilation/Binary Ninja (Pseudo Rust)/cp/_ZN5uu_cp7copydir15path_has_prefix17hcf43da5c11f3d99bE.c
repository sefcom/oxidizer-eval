
  fn uu_cp::copydir::path_has_prefix::hcf43da5c11f3d99b(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut result_1: i64;
    uucore::features::fs::canonicalize::hb17a5541a57984e7(&result_1, arg2, arg3, 0, 2);
    let result: i64 = result_1;
    let var_70: *mut i8;
    
    if result == -0x8000000000000000
    {
        *arg1.byte_offset(8) = var_70;
        *arg1 = 1;
        return result;
    }
    
    let mut result_2: i64 = result;
    let var_58_1: *mut i8 = var_70;
    let var_68: i64;
    let var_50_1: i64 = var_68;
    uucore::features::fs::canonicalize::hb17a5541a57984e7(&result_1, arg4, arg5, 0, 2);
    let result_3: i64 = result_1;
    
    if result_3 != -0x8000000000000000
    {
        let mut result_4: i64 = result_3;
        let var_40_1: *mut i8 = var_70;
        let var_38_1: i64 = var_68;
        arg1[1] = std::path::Path::starts_with::h6a4d36631af7f3b4(var_70, var_68, &result_4);
        *arg1 = 0;
    }
    else
    {
        *arg1.byte_offset(8) = var_70;
        *arg1 = 1;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&result_2)
}
