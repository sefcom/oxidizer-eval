
  fn alacritty::gl::GetObjectPtrLabel::load_with::h904ac9a445a64f77(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetObjectPtrLabelglGetPointerv…", 0x13, &data_c86110, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetObjectPtrLabel::h83c9868fd5684d3a = result_1;
    data_ce5d88 = result != 0;
    result
}
