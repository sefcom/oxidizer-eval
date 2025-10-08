
  fn alacritty::gl::GetPointervKHR::load_with::hd7068293c956c7db(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetPointervKHRglUniform4uivEXT…", 0x10, 8, 0);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetPointervKHR::h34463e9621c895cc = result_1;
    data_ce5db8 = result != 0;
    result
}
