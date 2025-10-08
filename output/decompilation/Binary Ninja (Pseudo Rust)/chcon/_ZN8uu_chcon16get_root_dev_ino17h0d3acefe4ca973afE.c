
  fn uu_chcon::get_root_dev_ino::h0d3acefe4ca973af(arg1: *mut i32) -> *mut i32

{
    let mut var_b8: i32;
    std::fs::symlink_metadata::hc0e2d0e49957759e(&var_b8);
    
    if var_b8 == 2
    {
        let var_b0: i64;
        uu_chcon::errors::Error::from_io1::h4a84c8fef6f8f370(arg1, var_b0);
        return arg1;
    }
    
    let var_98: i128;
    *arg1.byte_offset(8) = var_98;
    *arg1 = 0x12;
    arg1
}
