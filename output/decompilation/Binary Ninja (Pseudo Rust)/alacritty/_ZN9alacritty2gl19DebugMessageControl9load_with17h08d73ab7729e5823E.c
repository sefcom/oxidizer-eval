
  fn alacritty::gl::DebugMessageControl::load_with::h08d73ab7729e5823(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDebugMessageControlglDebugMess…", 0x15, &data_c85bc0, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::DebugMessageControl::hc386a0627985d6e6 = result_1;
    data_ce5898 = result != 0;
    result
}
