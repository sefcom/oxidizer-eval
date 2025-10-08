
  fn alacritty::gl::Uniform2f::load_with::h0408c673c24e75ba(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform2fglUniform2fvARBglUnif…", 0xb, &data_c86790, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::Uniform2f::ha7e19b8c8b13375a.0 = result_1;
    result
}
