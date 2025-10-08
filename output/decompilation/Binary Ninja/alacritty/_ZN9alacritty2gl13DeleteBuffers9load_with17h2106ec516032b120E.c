
  void (*)() __noreturn alacritty::gl::DeleteBuffers::load_with::h2106ec516032b120(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDeleteBuffersglDeleteFramebuff…", 0xf, &data_c85c00, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::DeleteBuffers::h9b17d14f72697e1c.0 = result_1;
    return result;
}
