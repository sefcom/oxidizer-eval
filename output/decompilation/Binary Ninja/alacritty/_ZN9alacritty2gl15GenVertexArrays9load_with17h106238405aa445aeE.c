
  void (*)() __noreturn alacritty::gl::GenVertexArrays::load_with::h106238405aa445ae(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGenVertexArraysglGenerateMipma…", 0x11, &data_c85fa0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::GenVertexArrays::h4e7aa93504329e19.0 = result_1;
    return result;
}
