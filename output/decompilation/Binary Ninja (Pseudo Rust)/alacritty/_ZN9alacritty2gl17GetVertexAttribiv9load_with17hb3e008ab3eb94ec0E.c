
  fn alacritty::gl::GetVertexAttribiv::load_with::hb3e008ab3eb94ec0(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetVertexAttribivglGetnUniform…", 0x13, &data_c86320, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetVertexAttribiv::h46e4d254ef6815ad = result_1;
    data_ce5fe0 = result != 0;
    result
}
