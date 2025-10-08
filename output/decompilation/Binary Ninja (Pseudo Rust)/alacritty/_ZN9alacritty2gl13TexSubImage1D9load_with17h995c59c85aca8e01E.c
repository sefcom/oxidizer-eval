
  fn alacritty::gl::TexSubImage1D::load_with::h995c59c85aca8e01(arg1: i64) -> fn() -> !

{
    let mut var_10: i64 = arg1;
    let var_8: *mut c_void = &data_c86f38;
    let result: fn() -> ! = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexSubImage1DglTexSubImage2DEX…", 0xf, &data_c866f0, 1);
    let mut result_1: fn() -> ! = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if result != 0
    {
        result_1 = result;
    }
    
    alacritty::gl::storage::TexSubImage1D::h4f78ca3d4acf48dd = result_1;
    data_ce6618 = result != 0;
    result
}
