
  fn alacritty::gl::BlitFramebuffer::load_with::hf895bf049e3e9460(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBlitFramebufferglBufferDataARB…", 0x11, &data_c85a10, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::BlitFramebuffer::h73a09001271bed92 = result_1;
    data_ce5678 = result != 0;
    result
}
