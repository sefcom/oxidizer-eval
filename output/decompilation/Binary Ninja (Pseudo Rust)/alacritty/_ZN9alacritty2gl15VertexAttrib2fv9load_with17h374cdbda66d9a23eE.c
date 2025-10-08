
  fn alacritty::gl::VertexAttrib2fv::load_with::h374cdbda66d9a23e(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib2fvglVertexAttrib2…", 0x11, &data_c86aa0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib2fv::h16a7512411439f5f = result_1;
    data_ce6908 = result != 0;
    result
}
