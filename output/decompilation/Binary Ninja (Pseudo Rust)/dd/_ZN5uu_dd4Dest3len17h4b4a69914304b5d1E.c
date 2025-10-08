
  fn uu_dd::Dest::len::h4b4a69914304b5d1(arg1: *mut c_void) -> i64

{
    if *arg1 != 1
    {
        return 0;
    }
    
    let mut var_b0: i32;
    std::fs::File::metadata::h5e84e533705f8c98(&var_b0, arg1.byte_offset(4));
    
    if var_b0 != 2
    {
        return 0;
    }
    
    1
}
