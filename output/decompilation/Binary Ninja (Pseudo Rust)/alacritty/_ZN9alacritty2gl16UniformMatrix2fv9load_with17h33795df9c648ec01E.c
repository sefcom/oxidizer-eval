
  fn alacritty::gl::UniformMatrix2fv::load_with::h33795df9c648ec01(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniformMatrix2fvglUniformMatri…", 0x12, &data_c868b0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::UniformMatrix2fv::h129e7b9e6799daa9 = result_1;
    data_ce67c0 = result != 0;
    result
}
