
  fn alacritty::gl::CullFace::load_with::he7c51dffc19f7c8b(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCullFaceglDebugMessageCallback…", 0xa, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::CullFace::hf6a3ec6bd5eb8ba6 = result_1;
    data_ce5870 = result != 0;
    result
}
