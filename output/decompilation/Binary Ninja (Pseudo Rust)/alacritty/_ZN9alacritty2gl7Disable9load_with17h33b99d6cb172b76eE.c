
  fn alacritty::gl::Disable::load_with::h33b99d6cb172b76e(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDisableglDisableVertexAttribAr…", 9, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Disable::hf4c00c194e4ca1d5 = result_1;
    data_ce5988 = result != 0;
    result
}
