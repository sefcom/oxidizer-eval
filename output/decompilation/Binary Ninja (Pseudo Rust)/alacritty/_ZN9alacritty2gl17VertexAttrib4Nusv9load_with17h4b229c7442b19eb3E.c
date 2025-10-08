
  fn alacritty::gl::VertexAttrib4Nusv::load_with::h4b229c7442b19eb3(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4NusvglVertexAttri…", 0x13, &data_c86c40, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib4Nusv::he0da15ed51f9e630 = result_1;
    data_ce69f8 = result != 0;
    result
}
