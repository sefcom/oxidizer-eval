
  fn alacritty::gl::GetSamplerParameterIiv::load_with::ha7dbe4ff5a53daf7(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetSamplerParameterIivglGetSam…", 0x18, &data_c861b0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetSamplerParameterIiv::h4d2f980598e4d300 = result_1;
    data_ce5e38 = result != 0;
    result
}
