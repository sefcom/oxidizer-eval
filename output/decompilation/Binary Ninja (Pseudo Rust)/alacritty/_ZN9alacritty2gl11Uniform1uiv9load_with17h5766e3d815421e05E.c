
  fn alacritty::gl::Uniform1uiv::load_with::h5766e3d815421e05(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform1uivglUniform2fARBglUni…", 0xd, &data_c86780, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Uniform1uiv::hab56df71d82a9357 = result_1;
    data_ce6690 = result != 0;
    result
}
