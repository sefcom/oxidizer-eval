
  fn alacritty::gl::Uniform1f::load_with::h6a2af1e569c981c9(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform1fglUniform1fvARBglUnif…", 0xb, &data_c86730, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::Uniform1f::he912ff9a2d8e282f.0 = result_1;
    result
}
