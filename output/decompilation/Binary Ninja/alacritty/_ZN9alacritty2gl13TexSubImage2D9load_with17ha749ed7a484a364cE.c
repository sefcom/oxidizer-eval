
  void (*)() __noreturn alacritty::gl::TexSubImage2D::load_with::ha749ed7a484a364c(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexSubImage2DglTexSubImage3DEX…", 0xf, &data_c86700, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::TexSubImage2D::h822f041644ccbaa4.0 = result_1;
    return result;
}
