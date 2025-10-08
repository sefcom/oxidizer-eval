
  void (*)() __noreturn alacritty::gl::CullFace::load_with::he7c51dffc19f7c8b(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glCullFaceglDebugMessageCallback…", 0xa, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::CullFace::hf6a3ec6bd5eb8ba6 = result_1;
    data_ce5870 = result;
    return result;
}
