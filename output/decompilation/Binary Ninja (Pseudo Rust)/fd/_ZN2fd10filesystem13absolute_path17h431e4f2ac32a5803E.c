
  fn fd::filesystem::absolute_path::h431e4f2ac32a5803(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> i64

{
    let mut result_1: i64;
    fd::filesystem::path_absolute_form::h84e5ff271146e318(&result_1, arg2, arg3);
    let result: i64 = result_1;
    let var_10: i64;
    
    if -(result) != -0x8000000000000000
    {
        arg1[2] = var_10;
    }
    let var_18: i64;
    arg1[1] = var_18;
    *arg1 = result;
    result
}
