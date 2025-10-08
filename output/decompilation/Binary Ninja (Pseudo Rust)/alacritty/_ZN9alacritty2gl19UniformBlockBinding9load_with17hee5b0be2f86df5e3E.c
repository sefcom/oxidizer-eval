
  fn alacritty::gl::UniformBlockBinding::load_with::hee5b0be2f86df5e3(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniformBlockBindingglUniformMa…", 0x15, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::UniformBlockBinding::h1e06f4e6c81e33fb = result_1;
    data_ce67b0 = result != 0;
    result
}
