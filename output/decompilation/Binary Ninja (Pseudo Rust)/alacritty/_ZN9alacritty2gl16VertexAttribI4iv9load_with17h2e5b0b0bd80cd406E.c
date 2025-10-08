
  fn alacritty::gl::VertexAttribI4iv::load_with::h2e5b0b0bd80cd406(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI4ivglVertexAttrib…", 0x12, &data_c86e80, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribI4iv::h18a5c6ed8a1ab1dc = result_1;
    data_ce6ba0 = result != 0;
    result
}
