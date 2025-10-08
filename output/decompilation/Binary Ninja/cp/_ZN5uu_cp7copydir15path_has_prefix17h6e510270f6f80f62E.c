
  int64_t uu_cp::copydir::path_has_prefix::h6e510270f6f80f62(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t result_1;
    uucore::features::fs::canonicalize::h2a46952db6a00ca6(&result_1, arg2, arg3, 0, 2);
    int64_t result = result_1;
    char* var_68;
    
    if (-(result) == -0x8000000000000000)
    {
        *(arg1 + 8) = var_68;
        *arg1 = 1;
        return result;
    }
    
    int64_t result_2 = result;
    char* var_50_1 = var_68;
    int64_t var_60;
    int64_t var_48_1 = var_60;
    uucore::features::fs::canonicalize::h2a46952db6a00ca6(&result_1, arg4, arg5, 0, 2);
    int64_t result_3 = result_1;
    
    if (result_3 != -0x8000000000000000)
    {
        int64_t result_4 = result_3;
        char* var_38_1 = var_68;
        int64_t var_30_1 = var_60;
        arg1[1] = std::path::Path::starts_with::h99d1d97e0962843c(var_68, var_60, &result_4);
        *arg1 = 0;
    }
    else
    {
        *(arg1 + 8) = var_68;
        *arg1 = 1;
    }
    
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&result_2);
}
