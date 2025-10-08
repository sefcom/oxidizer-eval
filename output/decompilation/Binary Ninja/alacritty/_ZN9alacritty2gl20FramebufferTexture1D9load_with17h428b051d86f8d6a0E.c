
  void (*)() __noreturn alacritty::gl::FramebufferTexture1D::load_with::h428b051d86f8d6a0(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glFramebufferTexture1DglFramebuf…", 0x16, &data_c85f10, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::FramebufferTexture1D::h622f4a5d85d3426d = result_1;
    data_ce5ae8 = result;
    return result;
}
