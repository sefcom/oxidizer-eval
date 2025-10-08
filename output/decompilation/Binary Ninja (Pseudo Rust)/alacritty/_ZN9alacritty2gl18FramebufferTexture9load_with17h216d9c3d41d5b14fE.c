
  fn alacritty::gl::FramebufferTexture::load_with::h216d9c3d41d5b14f(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glFramebufferTextureglFramebuffe…", 0x14, &data_c85ee0, 3);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::FramebufferTexture::hec7e4c4ee0e60fe2 = result_1;
    data_ce5ad8 = result != 0;
    result
}
