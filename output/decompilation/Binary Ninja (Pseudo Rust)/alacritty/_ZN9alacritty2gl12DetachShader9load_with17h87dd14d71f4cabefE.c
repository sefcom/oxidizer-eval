
  fn alacritty::gl::DetachShader::load_with::h87dd14d71f4cabef(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDetachShaderglDisableglDisable…", 0xe, &data_c85c70, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::DetachShader::h6c8b56069796f9df = result_1;
    data_ce5978 = result != 0;
    result
}
