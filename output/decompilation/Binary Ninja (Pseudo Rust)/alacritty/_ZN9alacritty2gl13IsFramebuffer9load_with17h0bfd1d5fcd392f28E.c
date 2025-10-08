
  fn alacritty::gl::IsFramebuffer::load_with::h0bfd1d5fcd392f28(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsFramebufferglIsProgramglIsQu…", 0xf, &data_c863e0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::IsFramebuffer::hd46adef59f650142 = result_1;
    data_ce6090 = result != 0;
    result
}
