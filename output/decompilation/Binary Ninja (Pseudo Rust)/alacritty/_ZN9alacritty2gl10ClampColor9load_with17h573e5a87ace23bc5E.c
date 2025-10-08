
  fn alacritty::gl::ClampColor::load_with::h573e5a87ace23bc5(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glClampColorglClearglClearBuffer…", 0xc, &data_c85a60, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::ClampColor::h3e27505c02aa7f21 = result_1;
    data_ce56a8 = result != 0;
    result
}
