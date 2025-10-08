
  fn alacritty::gl::GenQueries::load_with::h1c6eed678d41a9c8(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGenQueriesglGenRenderbuffersEX…", 0xc, &data_c85f80, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GenQueries::h74bd1393ed18c842 = result_1;
    data_ce5b50 = result != 0;
    result
}
