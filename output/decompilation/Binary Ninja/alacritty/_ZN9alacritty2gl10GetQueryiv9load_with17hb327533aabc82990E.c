
  void (*)() __noreturn alacritty::gl::GetQueryiv::load_with::hb327533aabc82990(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetQueryivglGetRenderbufferPar…", 0xc, &data_c86190, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetQueryiv::hb7eea1cd6dce4aa9 = result_1;
    data_ce5e18 = result;
    return result;
}
