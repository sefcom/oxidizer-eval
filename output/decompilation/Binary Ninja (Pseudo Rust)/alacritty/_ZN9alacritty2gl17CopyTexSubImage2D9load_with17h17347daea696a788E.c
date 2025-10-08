
  fn alacritty::gl::CopyTexSubImage2D::load_with::h17347daea696a788(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCopyTexSubImage2DglCopyTexSubI…", 0x13, &data_c85b60, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::CopyTexSubImage2D::hbf6088f8f206c94d = result_1;
    data_ce5840 = result != 0;
    result
}
