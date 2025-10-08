
  fn alacritty::gl::Uniform4fv::load_with::hfccf20dd224f74fc(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform4fvglUniform4iARBglUnif…", 0xc, &data_c86860, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform4fv::h01d23dc0511b66f9 = result_1;
    data_ce6760 = result != 0;
    result
}
