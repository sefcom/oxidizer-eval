
  fn alacritty::gl::FramebufferTexture3D::load_with::h04d3c379306aeccb(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glFramebufferTexture3DglFramebuf…", 0x16, &data_c85f30, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::FramebufferTexture3D::h21b73cb8bd851622 = result_1;
    data_ce5b08 = result != 0;
    result
}
