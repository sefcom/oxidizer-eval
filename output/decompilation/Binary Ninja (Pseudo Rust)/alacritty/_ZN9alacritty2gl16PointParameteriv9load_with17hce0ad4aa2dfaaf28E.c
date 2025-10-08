
  fn alacritty::gl::PointParameteriv::load_with::hce0ad4aa2dfaaf28(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPointParameterivglPointSizeglP…", 0x12, &data_c86540, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::PointParameteriv::hdccae4e3122620f6 = result_1;
    data_ce62c0 = result != 0;
    result
}
