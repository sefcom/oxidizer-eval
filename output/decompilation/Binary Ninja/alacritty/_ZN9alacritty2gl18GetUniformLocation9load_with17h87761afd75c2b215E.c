
  void (*)() __noreturn alacritty::gl::GetUniformLocation::load_with::h87761afd75c2b215(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetUniformLocationglGetUniform…", 0x14, &data_c86260, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::GetUniformLocation::h3be57d0a0114f07a.0 = result_1;
    return result;
}
