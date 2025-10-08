
  fn uu_cp::copy_link::h25042d5280b1628e(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i8, arg5: u64, arg6: *mut *mut i8) -> i64

{
    let mut result_1: i64;
    std::fs::read_link::heab6e9ac9c5efda3(&result_1, arg2);
    let result: i64 = result_1;
    let var_48: i64;
    
    if result == -0x8000000000000000
    {
        *arg1 = -0x7fffffffffffffff;
        arg1[1] = var_48;
        return result;
    }
    
    result_1 = result;
    let var_48_1: i64 = var_48;
    let var_40: i64;
    let var_40_1: i64 = var_40;
    let rax: i8 = std::path::Path::is_symlink::h004cfac91d04dbc0(arg4, arg5);
    let mut rax_1: i8;
    
    if rax == 0
    {
        rax_1 = std::path::Path::is_file::h6e28d87ff76ffc41(arg4, arg5);
    }
    
    let mut rax_2: i64;
    
    if rax != 0 || rax_1 != 0
    {
        rax_2 = std::fs::remove_file::h19277b2d7a4f8643(arg4);
    }
    
    if (rax == 0 && rax_1 == 0) || rax_2 == 0
    {
        uu_cp::symlink_file::haf96ef023560a2f2(arg1, var_48, var_40, arg4, arg5, arg6);
    }
    else
    {
        *arg1 = -0x7fffffffffffffff;
        arg1[1] = rax_2;
    }
    
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&result_1)
}
