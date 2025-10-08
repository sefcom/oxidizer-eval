
  fn alacritty::gl::AttachShader::load_with::h27518771c425ce3d(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glAttachShaderglBeginConditional…", 0xe, &data_c858d0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::AttachShader::h785b6ccfbbb3b8d2.0 = result_1;
    result
}
