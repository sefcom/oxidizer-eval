
  fn alacritty::gl::TexCoordP4uiv::load_with::h01dd66d06628a02d(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexCoordP4uivglTexImage1DglTex…", 0xf, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TexCoordP4uiv::h18e628c937a5e1fb = result_1;
    data_ce6568 = result != 0;
    result
}
