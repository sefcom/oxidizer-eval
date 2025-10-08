
  fn alacritty::gl::VertexAttrib3sv::load_with::h77366c96a2c594a2(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib3svglVertexAttrib4…", 0x11, &data_c86ba0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib3sv::h18d60a3a35e2ea62 = result_1;
    data_ce6988 = result != 0;
    result
}
