
  fn uu_mv::is_empty_dir::he3f2d58304cc65e8(arg1: i64) -> u64

{
    let mut var_58: i64;
    std::fs::read_dir::hac14a9f3c8669bd0(&var_58, arg1);
    let var_50: i8;
    let mut rbx: i64;
    let mut var_48: i64;
    
    if var_50 != 2
    {
        let mut var_18: i64 = var_58;
        let var_10_1: i8 = var_50;
        var_48 = 2;
        core::option::Option$LT$T$GT$::get_or_insert_with::h2664734a8f2b2304(&var_48, &var_18);
        rbx = var_48 == 0;
        core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$std..fs..ReadDir$GT$$GT$::h4d32aa70b54d5e21(&var_48);
    }
    else
    {
        var_48 = var_58;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hbb55e5b4020a58ba(&var_48);
        rbx = 0;
    }
    rbx
}
