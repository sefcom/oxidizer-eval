
  fn alacritty::gl::VertexAttribI4i::load_with::h2018ae2c0f2593f3(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI4iglVertexAttribI…", 0x11, &data_c86e70, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribI4i::h472af4a3957c2db0 = result_1;
    data_ce6b90 = result != 0;
    result
}
