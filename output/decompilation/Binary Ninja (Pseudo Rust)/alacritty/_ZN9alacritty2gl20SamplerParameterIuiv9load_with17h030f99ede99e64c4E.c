
  fn alacritty::gl::SamplerParameterIuiv::load_with::h030f99ede99e64c4(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glSamplerParameterIuivglSamplerP…", 0x16, &data_c86630, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::SamplerParameterIuiv::h2f5deed5b0a4ac3a = result_1;
    data_ce6400 = result != 0;
    result
}
