
  void (*)() __noreturn alacritty::gl::DrawBuffers::load_with::h1188aacc17fb8abf(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDrawBuffersglDrawElementsglDra…", 0xd, &data_c85d20, 3);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DrawBuffers::hcec3f9f454fa6be8 = result_1;
    data_ce59e0 = result;
    return result;
}
