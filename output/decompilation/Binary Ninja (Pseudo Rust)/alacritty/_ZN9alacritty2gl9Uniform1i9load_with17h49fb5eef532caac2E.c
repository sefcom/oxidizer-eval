
  fn alacritty::gl::Uniform1i::load_with::h49fb5eef532caac2(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform1iglUniform1ivARBglUnif…", 0xb, &data_c86750, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::Uniform1i::h58a54799f0d50833.0 = result_1;
    result
}
