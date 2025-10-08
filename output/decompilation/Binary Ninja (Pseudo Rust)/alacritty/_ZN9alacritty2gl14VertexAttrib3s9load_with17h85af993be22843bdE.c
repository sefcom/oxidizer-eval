
  fn alacritty::gl::VertexAttrib3s::load_with::h85af993be22843bd(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib3stitlecasemapping…", 0x10, &data_c86b80, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib3s::h264fb2ec7bb23ea2 = result_1;
    data_ce6978 = result != 0;
    result
}
