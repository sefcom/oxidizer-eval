
  fn alacritty::gl::GenSamplers::load_with::hb6e3df45c7816827(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGenSamplersglGenTexturesglGenV…", 0xd, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GenSamplers::hae232a5de65423bb = result_1;
    data_ce5b70 = result != 0;
    result
}
