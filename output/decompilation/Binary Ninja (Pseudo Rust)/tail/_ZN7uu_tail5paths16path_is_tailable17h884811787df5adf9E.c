
  fn uu_tail::paths::path_is_tailable::h884811787df5adf9(arg1: *mut i8, arg2: u64) -> i64

{
    if std::path::Path::is_file::h6e28d87ff76ffc41(arg1, arg2) != 0
    {
        return 1;
    }
    
    let mut var_d0: i32;
    std::fs::metadata::h5c248dd9820946eb(&var_d0, arg1);
    let rbp_1: i32 = var_d0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_d0);
    
    if rbp_1 == 2
    {
        return 0;
    }
    
    std::fs::metadata::h5c248dd9820946eb(&var_d0, arg1);
    core::result::Result$LT$T$C$E$GT$::is_ok_and::h37a5d9a0bd9405ab(&var_d0)
}
