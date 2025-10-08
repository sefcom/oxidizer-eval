
  fn alacritty::gl::Uniform2ui::load_with::ha1f179d1df7cedb7(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform2uiglUniform2uivglUnifo…", 0xc, &data_c867d0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform2ui::h214128cac8758889 = result_1;
    data_ce66d8 = result != 0;
    result
}
