
  fn alacritty::gl::TexCoordP4ui::load_with::h2fe9f2a58ce79cf4(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexCoordP4uiglTexCoordP4uivglT…", 0xe, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TexCoordP4ui::h8583b377b770b0b6 = result_1;
    data_ce6558 = result != 0;
    result
}
