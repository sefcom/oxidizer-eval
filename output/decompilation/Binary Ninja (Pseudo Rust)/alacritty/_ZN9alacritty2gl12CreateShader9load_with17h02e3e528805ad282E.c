
  fn alacritty::gl::CreateShader::load_with::h02e3e528805ad282(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCreateShaderglCullFaceglDebugM…", 0xe, &data_c85b90, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::CreateShader::hcd73aa42dce6e632.0 = result_1;
    result
}
