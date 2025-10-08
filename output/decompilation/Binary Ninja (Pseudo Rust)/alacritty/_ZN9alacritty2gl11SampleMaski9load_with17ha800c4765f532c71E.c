
  fn alacritty::gl::SampleMaski::load_with::ha800c4765f532c71(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glSampleMaskiglSamplerParameterI…", 0xd, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::SampleMaski::h81077787f84d091e = result_1;
    data_ce63e0 = result != 0;
    result
}
