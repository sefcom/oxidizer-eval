
  fn alacritty::gl::Uniform4ui::load_with::h78dbacd9b14032a5(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform4uiglUniform4uivglUnifo…", 0xc, &data_c86890, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform4ui::h340668b7ff3eb414 = result_1;
    data_ce6790 = result != 0;
    result
}
