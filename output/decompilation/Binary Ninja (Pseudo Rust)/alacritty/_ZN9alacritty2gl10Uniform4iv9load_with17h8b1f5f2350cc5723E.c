
  fn alacritty::gl::Uniform4iv::load_with::h8b1f5f2350cc5723(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform4ivglUniform4uiEXTglUni…", 0xc, &data_c86880, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform4iv::h5f308a10c3259e7d = result_1;
    data_ce6780 = result != 0;
    result
}
