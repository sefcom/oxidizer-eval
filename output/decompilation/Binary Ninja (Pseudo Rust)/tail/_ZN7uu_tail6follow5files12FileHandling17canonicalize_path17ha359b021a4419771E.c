
  fn uu_tail::follow::files::FileHandling::canonicalize_path::ha359b021a4419771(arg1: *mut i128, arg2: *mut i8, arg3: size_t) -> *mut size_t

{
    if std::path::Path::is_absolute::h3431a23d91045560(arg2, arg3) == 0 && _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h7b78c224abf6fd98(arg2, arg3) == 0
    {
        let mut var_30: i64;
        std::fs::canonicalize::hd214f5c614fa2ecb(&var_30, arg2);
        
        if var_30 != -0x8000000000000000
        {
            let result: *mut size_t;
            arg1[1] = result;
            *arg1 = var_30;
            return result;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h2718b16a2e13a805(&var_30);
    }
    
    std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(arg1, arg2, arg3)
}
