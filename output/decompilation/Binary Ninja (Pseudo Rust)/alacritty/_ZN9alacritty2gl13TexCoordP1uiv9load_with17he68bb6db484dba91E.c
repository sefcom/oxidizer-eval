
  fn alacritty::gl::TexCoordP1uiv::load_with::he68bb6db484dba91(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexCoordP1uivglTexCoordP2uiglT…", 0xf, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TexCoordP1uiv::h1604a5a060caecf0 = result_1;
    data_ce6508 = result != 0;
    result
}
