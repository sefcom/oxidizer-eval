
  fn alacritty::gl::GetProgramInfoLog::load_with::h77684660e70c8f83(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetProgramInfoLogglGetProgrami…", 0x13, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::GetProgramInfoLog::h3841a0e4ef2f51d5.0 = result_1;
    result
}
