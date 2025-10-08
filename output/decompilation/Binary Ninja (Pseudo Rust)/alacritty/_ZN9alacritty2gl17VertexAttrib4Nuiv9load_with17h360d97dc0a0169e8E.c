
  fn alacritty::gl::VertexAttrib4Nuiv::load_with::h360d97dc0a0169e8(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4NuivglVertexAttri…", 0x13, &data_c86c30, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::VertexAttrib4Nuiv::h93647beed364f784 = result_1;
    data_ce69e8 = result != 0;
    result
}
