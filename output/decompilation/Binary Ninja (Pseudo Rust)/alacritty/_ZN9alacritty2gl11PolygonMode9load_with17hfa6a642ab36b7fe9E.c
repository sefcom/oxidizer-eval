
  fn alacritty::gl::PolygonMode::load_with::hfa6a642ab36b7fe9(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glPolygonModeglPolygonOffsetglPo…", 0xd, &data_c86550, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::PolygonMode::h100d3b1bd569f378 = result_1;
    data_ce62e0 = result != 0;
    result
}
