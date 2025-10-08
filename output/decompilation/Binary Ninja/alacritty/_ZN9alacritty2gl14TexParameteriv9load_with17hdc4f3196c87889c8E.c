
  void (*)() __noreturn alacritty::gl::TexParameteriv::load_with::hdc4f3196c87889c8(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexParameterivglUnmapBufferOES…", 0x10, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TexParameteriv::h75c1a765da71dac1 = result_1;
    data_ce6608 = result;
    return result;
}
