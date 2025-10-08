
  fn alacritty::gl::CopyTexSubImage1D::load_with::hcc8668ec2d80ec5b(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCopyTexSubImage1DglCopyTexSubI…", 0x13, &data_c85b50, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::CopyTexSubImage1D::hadf3eb3526abdf0a = result_1;
    data_ce5830 = result != 0;
    result
}
