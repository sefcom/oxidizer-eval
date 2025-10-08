
  void (*)() __noreturn alacritty::gl::FramebufferTexture::load_with::h216d9c3d41d5b14f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glFramebufferTextureglFramebuffe…", 0x14, &data_c85ee0, 3);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::FramebufferTexture::hec7e4c4ee0e60fe2 = result_1;
    data_ce5ad8 = result;
    return result;
}
