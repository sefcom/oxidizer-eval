
  fn alacritty::gl::IsVertexArray::load_with::hdab44fb235ea32f6(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsVertexArrayglLineWidthglLink…", 0xf, &data_c86420, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::IsVertexArray::h9711cf9846b47c71 = result_1;
    data_ce6110 = result != 0;
    result
}
