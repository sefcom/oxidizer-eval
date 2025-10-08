
  void (*)() __noreturn alacritty::gl::BlitFramebuffer::load_with::hf895bf049e3e9460(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBlitFramebufferglBufferDataARB…", 0x11, &data_c85a10, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::BlitFramebuffer::h73a09001271bed92 = result_1;
    data_ce5678 = result;
    return result;
}
