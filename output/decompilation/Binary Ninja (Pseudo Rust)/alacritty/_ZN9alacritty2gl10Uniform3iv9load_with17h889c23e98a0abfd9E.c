
  fn alacritty::gl::Uniform3iv::load_with::h889c23e98a0abfd9(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform3ivglUniform3uiEXTglUni…", 0xc, &data_c86820, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform3iv::h6da0679e59aed939 = result_1;
    data_ce6728 = result != 0;
    result
}
