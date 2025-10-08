
  fn alacritty::gl::GetBufferSubData::load_with::h2ac69fd520cf228d(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetBufferSubDataglGetCompresse…", 0x12, &data_c86040, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetBufferSubData::h92262b26da95b1c0 = result_1;
    data_ce5c70 = result != 0;
    result
}
