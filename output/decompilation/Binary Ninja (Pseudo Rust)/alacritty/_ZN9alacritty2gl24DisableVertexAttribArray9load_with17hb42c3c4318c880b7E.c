
  fn alacritty::gl::DisableVertexAttribArray::load_with::hb42c3c4318c880b7(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDisableVertexAttribArrayglDisa…", 0x1a, &data_c85c80, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::DisableVertexAttribArray::h141f22672c3fc461 = result_1;
    data_ce5998 = result != 0;
    result
}
