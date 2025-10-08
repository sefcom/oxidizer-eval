
  fn uu_realpath::process_relative::he019ee2f680b65b0(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    
    if arg3 != 0
    {
        if std::path::Path::starts_with::h5d2b2bc7a5c06590(arg2[1], arg2[2], arg3) != 0
        {
            let mut rdx: i64 = arg3;
            
            if arg5 != 0
            {
                rdx = arg5;
            }
            
            /* tailcall */
            return uucore::features::fs::make_path_relative_to::h06a9f1b021e83a4d(arg1, arg2, rdx);
        }
    }
    else if arg5 != 0
    {
        /* tailcall */
        return uucore::features::fs::make_path_relative_to::h06a9f1b021e83a4d(arg1, arg2, arg5);
    }
    
    let result: i64 = arg2[2];
    arg1[1] = result;
    *arg1 = *arg2;
    result
}
