
  fn alacritty::gl::TexCoordP3ui::load_with::hf43a33e9558e6026(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexCoordP3uiglTexCoordP3uivglT…", 0xe, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TexCoordP3ui::hfc02321c22351759 = result_1;
    data_ce6538 = result != 0;
    result
}
