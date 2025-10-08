
  fn alacritty::gl::CopyTexImage2D::load_with::h5ba4843fd0b6779a(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCopyTexImage2DglGetObjectLabel…", 0x10, &data_c85b40, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::CopyTexImage2D::hdf29ca9196e0dcba = result_1;
    data_ce5820 = result != 0;
    result
}
