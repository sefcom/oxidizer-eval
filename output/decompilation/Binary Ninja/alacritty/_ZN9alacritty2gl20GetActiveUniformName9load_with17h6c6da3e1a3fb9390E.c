
  void (*)() __noreturn alacritty::gl::GetActiveUniformName::load_with::h6c6da3e1a3fb9390(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetActiveUniformNameglGetActiv…", 0x16, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetActiveUniformName::h59aa9f2b4e3b9638 = result_1;
    data_ce5be0 = result;
    return result;
}
