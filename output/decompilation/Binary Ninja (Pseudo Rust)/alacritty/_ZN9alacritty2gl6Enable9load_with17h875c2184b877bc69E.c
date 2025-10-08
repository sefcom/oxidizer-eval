
  fn alacritty::gl::Enable::load_with::h875c2184b877bc69(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! =
        alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, "glEnabl", 8, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    *alacritty::gl::storage::Enable::hc33911a3f611e19c.0 = result_1;
    result
}
