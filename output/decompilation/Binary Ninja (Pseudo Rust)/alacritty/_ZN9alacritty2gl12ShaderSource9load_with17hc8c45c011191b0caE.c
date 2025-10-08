
  fn alacritty::gl::ShaderSource::load_with::hc8c45c011191b0ca(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glShaderSourceglStencilFuncglSte…", 0xe, &data_c86650, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::ShaderSource::h36e3f9f07e0e8e33.0 = result_1;
    result
}
