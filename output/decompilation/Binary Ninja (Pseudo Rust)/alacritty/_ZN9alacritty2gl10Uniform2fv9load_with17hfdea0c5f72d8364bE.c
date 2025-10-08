
  fn alacritty::gl::Uniform2fv::load_with::hfdea0c5f72d8364b(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform2fvglUniform2iARBglUnif…", 0xc, &data_c867a0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform2fv::hf6723474c13e973c = result_1;
    data_ce66a8 = result != 0;
    result
}
