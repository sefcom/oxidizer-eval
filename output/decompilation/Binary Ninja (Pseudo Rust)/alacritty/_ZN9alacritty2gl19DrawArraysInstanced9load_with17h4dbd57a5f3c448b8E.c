
  fn alacritty::gl::DrawArraysInstanced::load_with::h4dbd57a5f3c448b8(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDrawArraysInstancedglDrawBuffe…", 0x15, &data_c85ce0, 4);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::DrawArraysInstanced::he7897eb2f891fd8b = result_1;
    data_ce59c0 = result != 0;
    result
}
