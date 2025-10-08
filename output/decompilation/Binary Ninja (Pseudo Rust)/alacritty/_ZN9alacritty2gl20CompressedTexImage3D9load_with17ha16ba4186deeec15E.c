
  fn alacritty::gl::CompressedTexImage3D::load_with::ha16ba4186deeec15(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCompressedTexImage3DglCompress…", 0x16, &data_c85ae0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::CompressedTexImage3D::h67b0c59de9ec6a2f = result_1;
    data_ce57c0 = result != 0;
    result
}
