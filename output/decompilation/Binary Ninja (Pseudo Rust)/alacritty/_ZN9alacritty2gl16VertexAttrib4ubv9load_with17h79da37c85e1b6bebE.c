
  fn alacritty::gl::VertexAttrib4ubv::load_with::h79da37c85e1b6beb(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4ubvglVertexAttrib…", 0x12, &data_c86d30, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib4ubv::h4976f1e48e3ca0a1 = result_1;
    data_ce6a88 = result != 0;
    result
}
