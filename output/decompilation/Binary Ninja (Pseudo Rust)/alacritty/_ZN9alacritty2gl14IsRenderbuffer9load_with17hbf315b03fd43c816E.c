
  fn alacritty::gl::IsRenderbuffer::load_with::hbf315b03fd43c816(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsRenderbufferglTexParameterfv…", 0x10, &data_c86400, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::IsRenderbuffer::hc8574cc215797119 = result_1;
    data_ce60c0 = result != 0;
    result
}
