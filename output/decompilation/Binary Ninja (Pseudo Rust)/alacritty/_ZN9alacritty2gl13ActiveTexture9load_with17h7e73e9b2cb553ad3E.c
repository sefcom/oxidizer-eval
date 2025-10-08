
  fn alacritty::gl::ActiveTexture::load_with::h7e73e9b2cb553ad3(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glActiveTextureglAttachObjectARB…", 0xf, &data_c858c0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::ActiveTexture::h5918303c5b4133ec.0 = result_1;
    result
}
