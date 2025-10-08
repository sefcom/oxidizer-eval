
  void (*)() __noreturn alacritty::gl::UniformBlockBinding::load_with::hee5b0be2f86df5e3(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniformBlockBindingglUniformMa…", 0x15, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::UniformBlockBinding::h1e06f4e6c81e33fb = result_1;
    data_ce67b0 = result;
    return result;
}
