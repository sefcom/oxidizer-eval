
  fn uu_mv::rename_symlink_fallback::h50f184778666e82c(arg1: i64, arg2: i64, arg3: i64) -> *mut *mut c_void

{
    let mut var_50: i64;
    std::fs::read_link::h2d828447d51f8a7f(&var_50, arg1);
    let rcx_1: i64 = var_50;
    let result_1: *mut *mut c_void;
    let mut result: *mut *mut c_void = result_1;
    
    if rcx_1 != -0x8000000000000000
    {
        let mut var_38: i64 = rcx_1;
        let result_2: *mut *mut c_void = result;
        let var_40: i64;
        let var_28_1: i64 = var_40;
        result = std::os::unix::fs::symlink::h7819e981045b41e0(&var_38, arg3);
        
        if result == 0
        {
            /* tailcall */
            return std::fs::remove_file::hac48d4e29d9c97ea(arg1);
        }
    }
    
    result
}
