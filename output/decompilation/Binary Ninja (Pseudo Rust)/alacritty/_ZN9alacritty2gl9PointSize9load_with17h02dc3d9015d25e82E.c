
  fn alacritty::gl::PointSize::load_with::h02dc3d9015d25e82(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPointSizeglPolygonModeNVglPoly…", 0xb, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::PointSize::h5daf417fdd16341d = result_1;
    data_ce62d0 = result != 0;
    result
}
