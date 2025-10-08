
  fn alacritty::gl::VertexAttribI4ubv::load_with::h4ef22dfc2b853400(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI4ubvglVertexAttri…", 0x13, &data_c86ea0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribI4ubv::hec682b61f32585c5 = result_1;
    data_ce6bc0 = result != 0;
    result
}
