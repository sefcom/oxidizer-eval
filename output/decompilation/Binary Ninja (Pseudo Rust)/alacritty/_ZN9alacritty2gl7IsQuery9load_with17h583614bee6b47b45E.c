
  fn alacritty::gl::IsQuery::load_with::h583614bee6b47b45(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsQueryglIsRenderbufferEXTglIs…", 9, &data_c863f0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::IsQuery::hb69a5fb88e93b091 = result_1;
    data_ce60b0 = result != 0;
    result
}
