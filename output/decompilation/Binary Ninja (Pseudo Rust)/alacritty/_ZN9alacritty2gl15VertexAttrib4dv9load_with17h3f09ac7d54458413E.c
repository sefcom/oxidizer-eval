
  fn alacritty::gl::VertexAttrib4dv::load_with::h3f09ac7d54458413(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4dvglVertexAttrib4…", 0x11, &data_c86c80, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib4dv::h6545e57f93e068c7 = result_1;
    data_ce6a28 = result != 0;
    result
}
