
  fn alacritty::gl::BlendEquation::load_with::h17c2faf191d80bbb(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBlendEquationglBlendEquationSe…", 0xf, &data_c859d0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::BlendEquation::h5d6b02692ab08a97 = result_1;
    data_ce5648 = result != 0;
    result
}
