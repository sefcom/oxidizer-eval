
  fn alacritty::gl::FramebufferTexture1D::load_with::h428b051d86f8d6a0(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glFramebufferTexture1DglFramebuf…", 0x16, &data_c85f10, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::FramebufferTexture1D::h622f4a5d85d3426d = result_1;
    data_ce5ae8 = result != 0;
    result
}
