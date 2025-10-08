
  fn alacritty::gl::Disablei::load_with::h1fce69754a990f2e(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDisableiglDrawArraysEXTglDrawA…", 0xa, &data_c85c90, 4);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Disablei::hd129914ebb8cca12 = result_1;
    data_ce59a8 = result != 0;
    result
}
