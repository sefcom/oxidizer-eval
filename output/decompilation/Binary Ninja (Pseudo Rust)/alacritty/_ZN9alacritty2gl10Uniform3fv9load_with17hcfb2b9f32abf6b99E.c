
  fn alacritty::gl::Uniform3fv::load_with::hcfb2b9f32abf6b99(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform3fvglUniform3iARBglUnif…", 0xc, &data_c86800, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform3fv::h0de6f39461648b19 = result_1;
    data_ce6708 = result != 0;
    result
}
