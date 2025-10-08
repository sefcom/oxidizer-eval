
  fn alacritty::gl::VertexAttrib4iv::load_with::h516910c5f2721bd8(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4ivglVertexAttrib4…", 0x11, &data_c86ce0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib4iv::h3f7c6438ae642a83 = result_1;
    data_ce6a58 = result != 0;
    result
}
