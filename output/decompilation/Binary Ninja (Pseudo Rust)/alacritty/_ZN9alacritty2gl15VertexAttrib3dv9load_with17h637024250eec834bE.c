
  fn alacritty::gl::VertexAttrib3dv::load_with::h637024250eec834b(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib3dvglVertexAttrib3…", 0x11, &data_c86b20, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib3dv::hf8c82c90380d1686 = result_1;
    data_ce6948 = result != 0;
    result
}
