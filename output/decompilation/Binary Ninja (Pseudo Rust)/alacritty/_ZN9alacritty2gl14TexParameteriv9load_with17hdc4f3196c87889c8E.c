
  fn alacritty::gl::TexParameteriv::load_with::hdc4f3196c87889c8(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexParameterivglUnmapBufferOES…", 0x10, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TexParameteriv::h75c1a765da71dac1 = result_1;
    data_ce6608 = result != 0;
    result
}
