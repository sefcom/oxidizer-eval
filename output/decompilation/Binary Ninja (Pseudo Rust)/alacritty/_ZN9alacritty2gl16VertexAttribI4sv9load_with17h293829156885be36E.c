
  fn alacritty::gl::VertexAttribI4sv::load_with::h293829156885be36(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI4svglVertexAttrib…", 0x12, &data_c86e90, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribI4sv::h1982bd583f0d7b73 = result_1;
    data_ce6bb0 = result != 0;
    result
}
