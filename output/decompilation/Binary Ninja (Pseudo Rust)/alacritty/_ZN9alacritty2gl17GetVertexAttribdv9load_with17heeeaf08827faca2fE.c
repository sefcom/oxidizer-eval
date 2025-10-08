
  fn alacritty::gl::GetVertexAttribdv::load_with::heeeaf08827faca2f(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetVertexAttribdvglGetVertexAt…", 0x13, &data_c862e0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetVertexAttribdv::h9741acaac2c4e14e = result_1;
    data_ce5fc0 = result != 0;
    result
}
