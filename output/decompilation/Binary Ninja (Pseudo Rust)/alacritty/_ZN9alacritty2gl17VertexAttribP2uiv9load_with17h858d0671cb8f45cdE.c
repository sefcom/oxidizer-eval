
  fn alacritty::gl::VertexAttribP2uiv::load_with::h858d0671cb8f45cd(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribP2uivglVertexAttri…", 0x13, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttribP2uiv::h323092e96570b6b8 = result_1;
    data_ce6c40 = result != 0;
    result
}
