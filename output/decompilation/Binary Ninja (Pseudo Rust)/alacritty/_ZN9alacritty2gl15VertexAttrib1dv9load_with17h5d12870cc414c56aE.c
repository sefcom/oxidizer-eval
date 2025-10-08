
  fn alacritty::gl::VertexAttrib1dv::load_with::h5d12870cc414c56a(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib1dvglVertexAttrib1…", 0x11, &data_c869a0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib1dv::h07e948607fbb0746 = result_1;
    data_ce6888 = result != 0;
    result
}
