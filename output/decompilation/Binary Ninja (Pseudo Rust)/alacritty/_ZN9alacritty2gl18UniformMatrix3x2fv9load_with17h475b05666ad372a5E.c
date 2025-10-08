
  fn alacritty::gl::UniformMatrix3x2fv::load_with::h475b05666ad372a5(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniformMatrix3x2fvglUniformMat…", 0x14, &data_c868f0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::UniformMatrix3x2fv::h7115a86239024172 = result_1;
    data_ce6800 = result != 0;
    result
}
