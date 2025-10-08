
  void (*)() __noreturn alacritty::gl::GetShaderiv::load_with::h98d4265df9648a02(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetShaderivglGetStringglGetStr…", 0xd, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::GetShaderiv::h69c95f7d61f52dac.0 = result_1;
    return result;
}
