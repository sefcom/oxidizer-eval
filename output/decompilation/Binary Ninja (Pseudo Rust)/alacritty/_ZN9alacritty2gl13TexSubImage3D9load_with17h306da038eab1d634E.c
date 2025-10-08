
  fn alacritty::gl::TexSubImage3D::load_with::h306da038eab1d634(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexSubImage3DglTransformFeedba…", 0xf, &data_c86710, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TexSubImage3D::ha077ca23d72d073f = result_1;
    data_ce6630 = result != 0;
    result
}
