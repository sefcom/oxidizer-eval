
  fn alacritty::gl::CompressedTexImage1D::load_with::hd343507e1898c6de(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCompressedTexImage1DglCompress…", 0x16, &data_c85ac0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::CompressedTexImage1D::hc0918fab447a748c = result_1;
    data_ce57a0 = result != 0;
    result
}
