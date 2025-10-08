
  fn alacritty::gl::SampleCoverage::load_with::h13fd26f3059e5eab(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glSampleCoverageDatetime", 0x10, &data_c86600, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::SampleCoverage::hae2acd163537c14b = result_1;
    data_ce63d0 = result != 0;
    result
}
