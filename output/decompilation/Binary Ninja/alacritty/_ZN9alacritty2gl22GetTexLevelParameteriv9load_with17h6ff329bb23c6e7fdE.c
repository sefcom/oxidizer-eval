
  void (*)() __noreturn alacritty::gl::GetTexLevelParameteriv::load_with::h6ff329bb23c6e7fd(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetTexLevelParameterivglGetTex…", 0x18, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetTexLevelParameteriv::h50d95b7089d5b58f = result_1;
    data_ce5ed8 = result;
    return result;
}
