
  fn just::subcommand::Subcommand::changelog::h6283720f5077d0b0() -> *mut c_void

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_38: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_30: *mut *mut [i8; 0xbf] = &data_831130;
    let var_28: i64 = 1;
    let mut var_48: ();
    let var_20: *mut c_void = &var_48;
    let var_18: i128 = {0};
    let result: *mut c_void =
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
        &var_38, &var_30);
    let mut result_1: *mut c_void = result;
    
    if result == 0
    {
        return result;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::ha63f2216ca348766(&result_1)
}
