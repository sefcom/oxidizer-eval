
  fn alacritty::gl::VertexAttrib4uiv::load_with::hb18324d8e8a176e4(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4uivglVertexAttrib…", 0x12, &data_c86d40, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib4uiv::he5d6650990293e58 = result_1;
    data_ce6a98 = result != 0;
    result
}
