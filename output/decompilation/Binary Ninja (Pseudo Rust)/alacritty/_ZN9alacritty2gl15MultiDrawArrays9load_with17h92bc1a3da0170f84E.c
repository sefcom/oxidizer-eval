
  fn alacritty::gl::MultiDrawArrays::load_with::h92bc1a3da0170f84(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glMultiDrawArraysglMultiDrawElem…", 0x11, &data_c86480, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::MultiDrawArrays::hb598791634419d3a = result_1;
    data_ce6168 = result != 0;
    result
}
