
  fn alacritty::gl::VertexAttrib3d::load_with::h3f9a7217ce6c4a2e(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib3d", 0x10, &data_c86b00, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib3d::h69a9456a534e3034 = result_1;
    data_ce6938 = result != 0;
    result
}
