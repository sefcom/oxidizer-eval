
  fn alacritty::gl::Flush::load_with::h46c0a363f8a48b6e(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glFlushglFlushMappedBufferRangeA…", 7, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::Flush::hc53e990cb3026494 = result_1;
    data_ce5aa8 = result != 0;
    result
}
