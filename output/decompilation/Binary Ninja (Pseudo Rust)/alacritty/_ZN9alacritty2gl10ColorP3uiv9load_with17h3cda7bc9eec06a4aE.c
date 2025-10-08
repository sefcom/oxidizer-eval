
  fn alacritty::gl::ColorP3uiv::load_with::h3cda7bc9eec06a4a(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glColorP3uivglColorP4uiglColorP4…", 0xc, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::ColorP3uiv::h1459e4281a6b2b05 = result_1;
    data_ce5768 = result != 0;
    result
}
