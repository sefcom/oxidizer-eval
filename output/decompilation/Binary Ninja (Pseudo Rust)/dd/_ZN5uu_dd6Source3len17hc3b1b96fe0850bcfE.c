
  fn uu_dd::Source::len::hc3b1b96fe0850bcf(arg1: *mut c_void) -> i64

{
    if *arg1 != 0
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
