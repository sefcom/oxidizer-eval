
  fn alacritty::gl::MultiDrawElements::load_with::hbc9f401148151896(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glMultiDrawElementsglMultiDrawEl…", 0x13, &data_c86490, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::MultiDrawElements::h1af910f30ac963d2 = result_1;
    data_ce6178 = result != 0;
    result
}
