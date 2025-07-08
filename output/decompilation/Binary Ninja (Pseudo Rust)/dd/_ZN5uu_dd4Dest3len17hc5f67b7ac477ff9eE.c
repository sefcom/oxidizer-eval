
  fn uu_dd::Dest::len::hc5f67b7ac477ff9e(arg1: *mut c_void) -> i64

{
    if *arg1 != 1
    {
        return 0;
    }
    
    let mut var_b0: i32;
    std::fs::File::metadata::he899a18112e6f19e(&var_b0, arg1.byte_offset(4));
    
    if var_b0 != 2
    {
        return 0;
    }
    
    1
}
