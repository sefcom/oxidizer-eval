
  void (*)() __noreturn alacritty::gl::BindTexture::load_with::h9f5e0bd669658377(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBindTextureglBindVertexArrayOE…", 0xd, &data_c859a0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::BindTexture::h1bc957198888829c.0 = result_1;
    return result;
}
