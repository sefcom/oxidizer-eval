
  void (*)() __noreturn alacritty::gl::TexSubImage1D::load_with::h995c59c85aca8e01(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexSubImage1DglTexSubImage2DEX…", 0xf, &data_c866f0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TexSubImage1D::h4f78ca3d4acf48dd = result_1;
    data_ce6618 = result;
    return result;
}
