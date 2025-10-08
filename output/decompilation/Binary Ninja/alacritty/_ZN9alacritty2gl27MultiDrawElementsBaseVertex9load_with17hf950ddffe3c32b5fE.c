
  void (*)() __noreturn alacritty::gl::MultiDrawElementsBaseVertex::load_with::hf950ddffe3c32b5f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glMultiDrawElementsBaseVertexglM…", 0x1d, &data_c864a0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::MultiDrawElementsBaseVertex::h96767445a7bc8bce = result_1;
    data_ce6188 = result;
    return result;
}
