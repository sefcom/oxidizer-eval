
  fn alacritty::gl::NormalP3ui::load_with::he9783d2c905929b8(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glNormalP3uiglNormalP3uivglObjec…", 0xc, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::NormalP3ui::h95a6f74d3472fa5e = result_1;
    data_ce6218 = result != 0;
    result
}
