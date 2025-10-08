
  fn alacritty::gl::VertexAttrib4Nub::load_with::h0d4d01142aed0ae1(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4NubglVertexAttrib…", 0x12, &data_c86bf0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib4Nub::hf94006640c6ccd35 = result_1;
    data_ce69c8 = result != 0;
    result
}
