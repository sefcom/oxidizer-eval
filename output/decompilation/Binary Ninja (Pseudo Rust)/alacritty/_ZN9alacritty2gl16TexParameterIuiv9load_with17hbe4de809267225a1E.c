
  fn alacritty::gl::TexParameterIuiv::load_with::hbe4de809267225a1(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexParameterIuivglTexParameter…", 0x12, &data_c866d0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TexParameterIuiv::ha4f73ff95a35c7cc = result_1;
    data_ce65d0 = result != 0;
    result
}
