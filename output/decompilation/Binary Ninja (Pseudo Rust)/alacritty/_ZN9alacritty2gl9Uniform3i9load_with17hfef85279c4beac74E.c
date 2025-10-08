
  fn alacritty::gl::Uniform3i::load_with::hfef85279c4beac74(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform3iglUniform3ivARBglUnif…", 0xb, &data_c86810, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform3i::haabe281226387352 = result_1;
    data_ce6718 = result != 0;
    result
}
