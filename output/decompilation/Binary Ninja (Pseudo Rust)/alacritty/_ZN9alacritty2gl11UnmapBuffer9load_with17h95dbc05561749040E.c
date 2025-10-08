
  fn alacritty::gl::UnmapBuffer::load_with::h95dbc05561749040(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUnmapBufferglUseProgramObjectA…", 0xd, &data_c86940, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::UnmapBuffer::h7b289f5ac091fc04 = result_1;
    data_ce6850 = result != 0;
    result
}
