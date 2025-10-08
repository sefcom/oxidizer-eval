
  fn alacritty::gl::GetUniformBlockIndex::load_with::hb9dc575aff62fbde(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetUniformBlockIndexglGetUnifo…", 0x16, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetUniformBlockIndex::h44c9b0d14fdc1be9 = result_1;
    data_ce5f38 = result != 0;
    result
}
