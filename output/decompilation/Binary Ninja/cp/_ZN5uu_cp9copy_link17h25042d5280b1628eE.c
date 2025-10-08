
  int64_t uu_cp::copy_link::h25042d5280b1628e(int64_t* arg1, int64_t arg2, int64_t arg3, char* arg4, uint64_t arg5, char** arg6)

{
    int64_t result_1;
    std::fs::read_link::heab6e9ac9c5efda3(&result_1, arg2);
    int64_t result = result_1;
    int64_t var_48;
    
    if (result == -0x8000000000000000)
    {
        *arg1 = -0x7fffffffffffffff;
        arg1[1] = var_48;
        return result;
    }
    
    result_1 = result;
    int64_t var_48_1 = var_48;
    int64_t var_40;
    int64_t var_40_1 = var_40;
    char rax = std::path::Path::is_symlink::h004cfac91d04dbc0(arg4, arg5);
    char rax_1;
    
    if (!rax)
        rax_1 = std::path::Path::is_file::h6e28d87ff76ffc41(arg4, arg5);
    
    int64_t rax_2;
    
    if (rax || rax_1)
        rax_2 = std::fs::remove_file::h19277b2d7a4f8643(arg4);
    
    if ((!rax && !rax_1) || !rax_2)
        uu_cp::symlink_file::haf96ef023560a2f2(arg1, var_48, var_40, arg4, arg5, arg6);
    else
    {
        *arg1 = -0x7fffffffffffffff;
        arg1[1] = rax_2;
    }
    
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&result_1);
}
