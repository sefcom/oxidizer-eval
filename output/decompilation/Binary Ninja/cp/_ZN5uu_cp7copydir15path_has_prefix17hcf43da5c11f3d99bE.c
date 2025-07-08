
  int64_t uu_cp::copydir::path_has_prefix::hcf43da5c11f3d99b(char* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t result_1;
    uucore::features::fs::canonicalize::hb17a5541a57984e7(&result_1, arg2, arg3, 0, 2);
    int64_t result = result_1;
    char* var_70;
    
    if (result == -0x8000000000000000)
    {
        *(arg1 + 8) = var_70;
        *arg1 = 1;
        return result;
    }
    
    int64_t result_2 = result;
    char* var_58_1 = var_70;
    int64_t var_68;
    int64_t var_50_1 = var_68;
    uucore::features::fs::canonicalize::hb17a5541a57984e7(&result_1, arg4, arg5, 0, 2);
    int64_t result_3 = result_1;
    
    if (result_3 != -0x8000000000000000)
    {
        int64_t result_4 = result_3;
        char* var_40_1 = var_70;
        int64_t var_38_1 = var_68;
        arg1[1] = std::path::Path::starts_with::h6a4d36631af7f3b4(var_70, var_68, &result_4);
        *arg1 = 0;
    }
    else
    {
        *(arg1 + 8) = var_70;
        *arg1 = 1;
    }
    
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&result_2);
}
