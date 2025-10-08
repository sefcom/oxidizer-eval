
  fn uu_cp::print_verbose_output::h224f7f61cc9bdc36(arg1: i8, arg2: *mut *mut c_void, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    let mut var_29: i8 = arg1;
    
    if arg2 == 0
    {
        /* tailcall */
        return uu_cp::print_paths::hb4c79dc503eb9daf(arg1, arg3, arg4, arg5);
    }
    
    let mut var_28: *mut i8 = &var_29;
    let var_20: i64 = arg3;
    let var_18: i64 = arg4;
    let var_10: i64 = arg5;
    let r9: i64;
    let var_8: i64 = r9;
    indicatif::progress_bar::ProgressBar::suspend::h12adb6ac352a15bc(*arg2, &var_28)
}
