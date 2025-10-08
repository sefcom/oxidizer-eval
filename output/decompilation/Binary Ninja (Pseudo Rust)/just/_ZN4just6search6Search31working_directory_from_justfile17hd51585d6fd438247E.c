
  fn just::search::Search::working_directory_from_justfile::hd51585d6fd438247(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut u64

{
    let mut r12: i64 = -0x7ffffffffffffffd;
    let mut rax: *mut i8;
    let mut rdx: u64;
    rax = std::path::Path::parent::hef287f60afa56900(arg2, arg3);
    let mut result: *mut u64;
    
    if rax == 0
    {
        let mut result_1: *mut u64;
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&result_1, arg2, 
            arg3);
        result = result_1;
        arg1[1] = result;
        let var_30: i128;
        *arg1.byte_offset(0x10) = var_30;
    }
    else
    {
        result = std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&arg1[1], 
            rax, rdx);
        r12 = -0x7ffffffffffffffa;
    }
    
    *arg1 = r12;
    result
}
