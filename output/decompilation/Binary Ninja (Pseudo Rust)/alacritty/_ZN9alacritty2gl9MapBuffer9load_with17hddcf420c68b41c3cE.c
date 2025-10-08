
  fn alacritty::gl::MapBuffer::load_with::hddcf420c68b41c3c(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glMapBufferglMapBufferRangeEXTgl…", 0xb, &data_c86450, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::MapBuffer::hbd7d803bb2fc3413 = result_1;
    data_ce6148 = result != 0;
    result
}
