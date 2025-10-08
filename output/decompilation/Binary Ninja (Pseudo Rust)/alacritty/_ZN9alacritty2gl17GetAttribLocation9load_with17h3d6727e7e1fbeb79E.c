
  fn alacritty::gl::GetAttribLocation::load_with::h3d6727e7e1fbeb79(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetAttribLocationglGetBooleanI…", 0x13, &data_c85ff0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetAttribLocation::he5f77ca5fd7f9356 = result_1;
    data_ce5c10 = result != 0;
    result
}
