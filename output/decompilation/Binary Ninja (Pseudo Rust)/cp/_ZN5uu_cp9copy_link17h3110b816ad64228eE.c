
  fn uu_cp::copy_link::h3110b816ad64228e(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i8, arg5: u64, arg6: *mut i64) -> *mut i64

{
    let mut var_38: i64;
    std::fs::read_link::hdecc6681ebe33782(&var_38, arg2);
    let rcx: i64 = var_38;
    let var_30: i64;
    
    if rcx != -0x8000000000000000
    {
        let mut var_50: i64 = rcx;
        let rax_1: i8 = std::path::Path::is_symlink::h6ab8b58756c51c6b(arg4, arg5);
        let mut rax_2: i8;
        
        if rax_1 == 0
        {
            rax_2 = std::path::Path::is_file::h82f08f46fb8d8099(arg4, arg5);
        }
        
        let mut rax_3: i64;
        
        if rax_1 != 0 || rax_2 != 0
        {
            rax_3 = std::fs::remove_file::h38159f05e7b4dc34(arg4);
        }
        
        let var_28: i64;
        
        if (rax_1 == 0 && rax_2 == 0) || rax_3 == 0
        {
            uu_cp::symlink_file::h73880cbbf32f0256(arg1, var_30, var_28, arg4, arg5, arg6);
        }
        else
        {
            *arg1 = 2;
            arg1[1] = rax_3;
        }
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_50);
    }
    else
    {
        *arg1 = 2;
        arg1[1] = var_30;
    }
    arg1
}
