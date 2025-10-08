
  fn alacritty::gl::Scissor::load_with::h823eb5a413960601(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glScissorglSecondaryColorP3uiglS…", 9, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Scissor::h69bc83a191793b41 = result_1;
    data_ce6450 = result != 0;
    result
}
