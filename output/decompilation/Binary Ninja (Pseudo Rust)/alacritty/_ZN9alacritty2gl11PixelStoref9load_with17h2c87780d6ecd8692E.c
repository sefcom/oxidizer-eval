
  fn alacritty::gl::PixelStoref::load_with::h2c87780d6ecd8692(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPixelStorefglPixelStoreiglPoin…", 0xd, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::PixelStoref::h78a5d3606f7b1c29 = result_1;
    data_ce6278 = result != 0;
    result
}
