
  fn alacritty::gl::VertexAttribI3i::load_with::he8aeff4be479b2f3(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI3iglVertexAttribI…", 0x11, &data_c86e20, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribI3i::he45e55bb9193c95d = result_1;
    data_ce6b40 = result != 0;
    result
}
