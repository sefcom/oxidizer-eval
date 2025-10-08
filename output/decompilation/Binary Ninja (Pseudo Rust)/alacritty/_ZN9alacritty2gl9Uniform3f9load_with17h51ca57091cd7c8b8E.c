
  fn alacritty::gl::Uniform3f::load_with::h51ca57091cd7c8b8(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform3fglUniform3fvARBglUnif…", 0xb, &data_c867f0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform3f::hc3318fdfdc13a83c = result_1;
    data_ce66f8 = result != 0;
    result
}
