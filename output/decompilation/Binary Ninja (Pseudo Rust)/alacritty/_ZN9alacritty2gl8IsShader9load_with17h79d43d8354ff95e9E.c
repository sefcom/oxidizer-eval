
  fn alacritty::gl::IsShader::load_with::h79d43d8354ff95e9(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsShaderglIsSyncAPPLEglIsTextu…", 0xa, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::IsShader::he7ee9b2903e9fd2b = result_1;
    data_ce60e0 = result != 0;
    result
}
