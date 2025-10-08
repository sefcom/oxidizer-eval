
  fn alacritty::gl::GetSamplerParameterIuiv::load_with::hf3f91311b5de4f5c(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetSamplerParameterIuivglGetSa…", 0x19, &data_c861d0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetSamplerParameterIuiv::h6efd1ef9782d6bab = result_1;
    data_ce5e48 = result != 0;
    result
}
