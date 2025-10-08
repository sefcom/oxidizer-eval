
  fn alacritty::gl::GetUniformLocation::load_with::h87761afd75c2b215(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetUniformLocationglGetUniform…", 0x14, &data_c86260, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::GetUniformLocation::h3be57d0a0114f07a.0 = result_1;
    result
}
