
  fn bat::config::get_args_from_config_file::ha270dcc92bd168cc(arg1: *mut i64) -> i64

{
    let mut var_38: i64 = 0;
    let var_30: i64 = 1;
    let var_28: i64 = 0;
    let mut var_20: ();
    bat::config::system_config_file::h5269a0222f7ffe0a(&var_20);
    let mut var_50: i64;
    std::fs::read_to_string::h462007d4b5b07c2d(&var_50, &var_20);
    let var_48: i64;
    let var_40: i64;
    
    if !(0 + -(var_50))
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb822dd115b0224bf(&var_38, var_48, var_40 + var_48);
        alloc::string::String::push::h0ede46164189e411(&var_38, 0xa);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_50);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h366d063fdc3aefc2(&var_50);
    }
    
    bat::config::config_file::h4b67a380f7fc9337(&var_20);
    std::fs::read_to_string::h462007d4b5b07c2d(&var_50, &var_20);
    
    if var_50 != -0x8000000000000000
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hb822dd115b0224bf(&var_38, var_48, var_40 + var_48);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_50);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..io..error..Error$GT$$GT$::h366d063fdc3aefc2(&var_50);
    }
    
    bat::config::get_args_from_str::hc7831eb106996c7f(arg1, var_30, var_28);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h9a1f4db89f5bf603(&var_38)
}
