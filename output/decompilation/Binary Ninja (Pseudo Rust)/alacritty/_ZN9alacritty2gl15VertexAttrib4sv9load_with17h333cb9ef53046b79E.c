
  fn alacritty::gl::VertexAttrib4sv::load_with::h333cb9ef53046b79(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4svglVertexAttrib4…", 0x11, &data_c86d10, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib4sv::hf97a6f04e136f94f = result_1;
    data_ce6a78 = result != 0;
    result
}
