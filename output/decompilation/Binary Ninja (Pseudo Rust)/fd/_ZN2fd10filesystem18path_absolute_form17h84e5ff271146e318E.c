
  fn fd::filesystem::path_absolute_form::h84e5ff271146e318(arg1: *mut i128, arg2: *mut i8, arg3: u64) -> i64

{
    let mut r14: *mut i8 = arg2;
    
    if std::path::Path::is_absolute::hf2dacc49683e82ac(arg2, arg3) != 0
    {
        /* tailcall */
        return std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(arg1, r14, 
            arg3);
    }
    
    let mut rax_2: *mut i8;
    let mut rdx_2: u64;
    rax_2 = std::path::Path::strip_prefix::hf2675ccd78c74225(r14, arg3);
    let mut r12: u64 = rdx_2;
    let mut var_60: i64;
    std::env::current_dir::h2d02f56ea8ff76eb(&var_60);
    let result: i64;
    
    if 0 + -(var_60)
    {
        arg1[1] = result;
        *arg1 = var_60;
        return result;
    }
    
    if rax_2 != 0
    {
        r14 = rax_2;
    }
    
    if rax_2 == 0
    {
        r12 = arg3;
    }
    
    let result_1: i64 = result;
    let mut var_48: i128 = var_60;
    fd::filesystem::path_absolute_form::_$u7b$$u7b$closure$u7d$$u7d$::hf478e8e0fe4d09ca(arg1, r14, 
        r12, &var_48)
}
