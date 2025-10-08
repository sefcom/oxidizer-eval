
  fn uu_tail::follow::files::FileHandling::canonicalize_path::h83fd2d9f8818f482(arg1: *mut u64, arg2: *mut i8, arg3: u64) -> i64

{
    if std::path::Path::is_absolute::hf2dacc49683e82ac(arg2, arg3) == 0 && _$LT$std..path..Path$u20$as$u20$uu_tail..paths..PathExtTail$GT$::is_stdin::h9c895f48d1ad1ebf(arg2, arg3) == 0
    {
        let mut var_30: i64;
        std::fs::canonicalize::h51813c249f73b0e1(&var_30, arg2);
        
        if !(0 + -(var_30))
        {
            let result: i64;
            arg1[2] = result;
            *arg1 = var_30;
            return result;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::hd5adcfe716321922(&var_30);
    }
    
    /* tailcall */
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(arg1, arg2, arg3)
}
