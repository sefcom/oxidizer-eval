
  fn alacritty::gl::VertexAttribI3uiv::load_with::h65151a4a711ed546(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI3uivglVertexAttri…", 0x13, &data_c86e50, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribI3uiv::h7e3c6721ee5f92ae = result_1;
    data_ce6b70 = result != 0;
    result
}
