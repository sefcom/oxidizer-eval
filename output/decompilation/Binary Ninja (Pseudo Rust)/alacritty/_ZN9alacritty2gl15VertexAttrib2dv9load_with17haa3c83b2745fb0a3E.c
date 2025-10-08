
  fn alacritty::gl::VertexAttrib2dv::load_with::haa3c83b2745fb0a3(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib2dvglVertexAttrib2…", 0x11, &data_c86a60, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib2dv::h3f00256a85237705 = result_1;
    data_ce68e8 = result != 0;
    result
}
