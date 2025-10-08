
  fn uu_cp::copydir::path_has_prefix::h6e510270f6f80f62(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut result_1: i64;
    uucore::features::fs::canonicalize::h2a46952db6a00ca6(&result_1, arg2, arg3, 0, 2);
    let result: i64 = result_1;
    let var_68: *mut i8;
    
    if -(result) == -0x8000000000000000
    {
        *arg1.byte_offset(8) = var_68;
        *arg1 = 1;
        return result;
    }
    
    let mut result_2: i64 = result;
    let var_50_1: *mut i8 = var_68;
    let var_60: i64;
    let var_48_1: i64 = var_60;
    uucore::features::fs::canonicalize::h2a46952db6a00ca6(&result_1, arg4, arg5, 0, 2);
    let result_3: i64 = result_1;
    
    if result_3 != -0x8000000000000000
    {
        let mut result_4: i64 = result_3;
        let var_38_1: *mut i8 = var_68;
        let var_30_1: i64 = var_60;
        arg1[1] = std::path::Path::starts_with::h99d1d97e0962843c(var_68, var_60, &result_4);
        *arg1 = 0;
    }
    else
    {
        *arg1.byte_offset(8) = var_68;
        *arg1 = 1;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&result_2)
}
