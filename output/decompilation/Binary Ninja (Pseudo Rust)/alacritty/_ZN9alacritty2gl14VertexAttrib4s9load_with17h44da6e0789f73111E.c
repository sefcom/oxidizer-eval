
  fn alacritty::gl::VertexAttrib4s::load_with::h44da6e0789f73111(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4sNotNulTerminated…", 0x10, &data_c86cf0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib4s::hefd9552e5f8220ba = result_1;
    data_ce6a68 = result != 0;
    result
}
