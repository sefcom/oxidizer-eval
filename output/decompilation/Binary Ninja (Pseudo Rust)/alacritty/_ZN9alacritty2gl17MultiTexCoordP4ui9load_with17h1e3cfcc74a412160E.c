
  fn alacritty::gl::MultiTexCoordP4ui::load_with::h1e3cfcc74a412160(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glMultiTexCoordP4uiglMultiTexCoo…", 0x13, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::MultiTexCoordP4ui::h220eed2f143388dd = result_1;
    data_ce61f8 = result != 0;
    result
}
