
  fn alacritty::gl::GetIntegeri_v::load_with::h708ee7cc5582fe96(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetIntegeri_vglGetIntegervglGe…", 0xf, &data_c860e0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetIntegeri_v::hab3ae3f727fd68df = result_1;
    data_ce5d40 = result != 0;
    result
}
