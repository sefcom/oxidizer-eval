
  fn alacritty::gl::GetTexParameterIiv::load_with::h0bcb234da808ab9e(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetTexParameterIivglGetTexPara…", 0x14, &data_c86210, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::GetTexParameterIiv::h9f658deb7680e76a = result_1;
    data_ce5ee8 = result != 0;
    result
}
