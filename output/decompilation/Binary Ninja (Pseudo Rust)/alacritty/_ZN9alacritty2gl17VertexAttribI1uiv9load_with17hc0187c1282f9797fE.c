
  fn alacritty::gl::VertexAttribI1uiv::load_with::hc0187c1282f9797f(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI1uivglVertexAttri…", 0x13, &data_c86dd0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribI1uiv::hd0b1362c31aa1b9b = result_1;
    data_ce6af0 = result != 0;
    result
}
