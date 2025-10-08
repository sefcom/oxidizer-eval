
  fn alacritty::gl::BindBufferRange::load_with::h2c73724cbbc165e5(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBindBufferRangeglBindFragDataL…", 0x11, &data_c85960, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::BindBufferRange::h797af88b72a87dcb = result_1;
    data_ce55c8 = result != 0;
    result
}
