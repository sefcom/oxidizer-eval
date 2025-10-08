
  fn alacritty::gl::VertexAttribI2iv::load_with::h3ea3c28c3996e883(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI2ivglVertexAttrib…", 0x12, &data_c86df0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribI2iv::h61eac7a9f2aacc04 = result_1;
    data_ce6b10 = result != 0;
    result
}
