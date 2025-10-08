
  fn alacritty::gl::MultiDrawElementsBaseVertex::load_with::hf950ddffe3c32b5f(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glMultiDrawElementsBaseVertexglM…", 0x1d, &data_c864a0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::MultiDrawElementsBaseVertex::h96767445a7bc8bce = result_1;
    data_ce6188 = result != 0;
    result
}
