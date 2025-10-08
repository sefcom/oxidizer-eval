
  fn alacritty::gl::BindBufferBase::load_with::hf1c3188cc7546dcd(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBindBufferBaseglReadnPixelsEXT…", 0x10, &data_c85940, 2);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::BindBufferBase::h25810b87c8f2ee14 = result_1;
    data_ce55b8 = result != 0;
    result
}
