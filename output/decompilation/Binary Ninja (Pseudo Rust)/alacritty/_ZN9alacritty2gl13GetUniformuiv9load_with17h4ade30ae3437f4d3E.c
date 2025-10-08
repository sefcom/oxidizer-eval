
  fn alacritty::gl::GetUniformuiv::load_with::h4ade30ae3437f4d3(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetUniformuivglGetVertexAttrib…", 0xf, &data_c86290, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetUniformuiv::ha1c23075028ac168 = result_1;
    data_ce5f80 = result != 0;
    result
}
