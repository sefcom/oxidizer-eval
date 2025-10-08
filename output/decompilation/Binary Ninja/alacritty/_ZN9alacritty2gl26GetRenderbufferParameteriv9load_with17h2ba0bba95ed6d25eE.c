
  void (*)() __noreturn alacritty::gl::GetRenderbufferParameteriv::load_with::h2ba0bba95ed6d25e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetRenderbufferParameterivglGe…", 0x1c, &data_c861a0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetRenderbufferParameteriv::h0e5166d1b5a56440 = result_1;
    data_ce5e28 = result;
    return result;
}
