
  fn alacritty::gl::UniformMatrix4x3fv::load_with::h3ece7ced1f072f25(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniformMatrix4x3fvglUnmapBuffe…", 0x14, &data_c86930, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::UniformMatrix4x3fv::h4bbdd2a04bd22cd3 = result_1;
    data_ce6840 = result != 0;
    result
}
