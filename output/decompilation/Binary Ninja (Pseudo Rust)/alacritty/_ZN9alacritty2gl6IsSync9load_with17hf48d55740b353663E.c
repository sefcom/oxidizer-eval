
  fn alacritty::gl::IsSync::load_with::hf48d55740b353663(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        &data_4eadc0[0x20], 8, &data_c86410, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::IsSync::haa319fcf1c8b4dd4 = result_1;
    data_ce60f0 = result != 0;
    result
}
