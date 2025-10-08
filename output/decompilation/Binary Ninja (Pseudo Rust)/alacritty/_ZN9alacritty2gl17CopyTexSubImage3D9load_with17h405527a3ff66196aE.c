
  fn alacritty::gl::CopyTexSubImage3D::load_with::h405527a3ff66196a(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCopyTexSubImage3DglCreateProgr…", 0x13, &data_c85b70, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::CopyTexSubImage3D::h1f2748f5d998b810 = result_1;
    data_ce5850 = result != 0;
    result
}
