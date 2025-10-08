
  fn rg::flags::defs::convert::human_readable_u64::h8b0ab71a03bde6a2(arg1: *mut i8, arg2: i64) -> i64

{
    let mut var_38: *mut i8;
    rg::flags::defs::convert::str::hf200dae070501684(&var_38, arg1, arg2);
    let rsi_1: *mut i8 = var_38;
    
    if rsi_1 == 0
    {
        return 1;
    }
    
    let var_30: u64;
    let mut var_28: ();
    grep_cli::human::parse_human_readable_size::h374500e7b36cff26(&var_28, rsi_1, var_30);
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h0bff3d9e96ea8957(&var_28)
}
