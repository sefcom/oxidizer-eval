
  void (*)() __noreturn alacritty::gl::FramebufferTextureLayer::load_with::h11291078fb381ac5(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glFramebufferTextureLayerglFront…", 0x19, &data_c85f40, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::FramebufferTextureLayer::h8f10b2c529c784fe = result_1;
    data_ce5b18 = result;
    return result;
}
