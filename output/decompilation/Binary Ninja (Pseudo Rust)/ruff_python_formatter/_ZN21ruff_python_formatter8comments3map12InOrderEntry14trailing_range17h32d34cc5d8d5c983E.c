
  fn ruff_python_formatter::comments::map::InOrderEntry::trailing_range::h32d34cc5d8d5c983(arg1: *mut c_void) -> u64

{
    let rax_2: i32 = *arg1.byte_offset(8);
    
    if rax_2 != 0
    {
        return rax_2 - 1;
    }
    
    if *arg1.byte_offset(0xc) == 0
    {
        return *arg1.byte_offset(4) - 1;
    }
    
    let mut var_30: *mut *mut [i8; 0xba] = &data_97d068;
    let var_28: i64 = 1;
    let var_20: i64 = 8;
    let var_18: i128 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_30);
    /* no return */
}
