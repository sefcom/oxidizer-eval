
  fn alacritty::gl::Uniform4uiv::load_with::h5de377090e751077(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform4uivglUniformBlockBindi…", 0xd, &data_c868a0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform4uiv::h406334f0f9860d1a = result_1;
    data_ce67a0 = result != 0;
    result
}
