
  fn alacritty::gl::SecondaryColorP3ui::load_with::hf32520d5cba54b52(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glSecondaryColorP3uiglSecondaryC…", 0x14, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::SecondaryColorP3ui::h0d447414fcd65d1e = result_1;
    data_ce6460 = result != 0;
    result
}
