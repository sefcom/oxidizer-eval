
  fn alacritty::gl::VertexAttrib2sv::load_with::h77abd2257ce8be58(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib2svglVertexAttrib3…", 0x11, &data_c86ae0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib2sv::hf9c74f8c44d222ea = result_1;
    data_ce6928 = result != 0;
    result
}
