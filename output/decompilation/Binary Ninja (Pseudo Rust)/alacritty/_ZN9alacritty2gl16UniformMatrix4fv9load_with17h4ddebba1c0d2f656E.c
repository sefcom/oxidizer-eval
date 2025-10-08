
  fn alacritty::gl::UniformMatrix4fv::load_with::h4ddebba1c0d2f656(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniformMatrix4fvglUniformMatri…", 0x12, &data_c86910, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::UniformMatrix4fv::ha3f8d58074ef2f66 = result_1;
    data_ce6820 = result != 0;
    result
}
