
  fn alacritty::gl::WaitSync::load_with::h52a09fdcdb15dfc8(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glWaitSyncgl function was not lo…", 0xa, &data_c86f00, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::WaitSync::hdb64d7a02c99ddcc = result_1;
    data_ce6d00 = result != 0;
    result
}
