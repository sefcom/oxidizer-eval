
  fn alacritty::gl::GetTexParameterIuiv::load_with::h4a1c8d6069e7b0cf(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetTexParameterIuivglGetTexPar…", 0x15, &data_c86230, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetTexParameterIuiv::h75eecf50d38226fe = result_1;
    data_ce5ef8 = result != 0;
    result
}
