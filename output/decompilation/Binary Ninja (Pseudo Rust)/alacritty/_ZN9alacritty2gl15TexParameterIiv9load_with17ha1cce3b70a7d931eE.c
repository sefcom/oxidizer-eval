
  fn alacritty::gl::TexParameterIiv::load_with::ha1cce3b70a7d931e(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexParameterIivglTexParameterI…", 0x11, &data_c866b0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TexParameterIiv::hc5b9a2f7a9c25a26 = result_1;
    data_ce65c0 = result != 0;
    result
}
