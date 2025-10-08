
  void (*)() __noreturn alacritty::gl::TexImage1D::load_with::h71a123d1c6dc0a28(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexImage1DglTexImage2DglTexIma…", 0xc, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TexImage1D::h6eb38ebc07cb17c4 = result_1;
    data_ce6578 = result;
    return result;
}
