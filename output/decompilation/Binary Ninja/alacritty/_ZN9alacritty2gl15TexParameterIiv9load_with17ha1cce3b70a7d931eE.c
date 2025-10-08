
  void (*)() __noreturn alacritty::gl::TexParameterIiv::load_with::ha1cce3b70a7d931e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTexParameterIivglTexParameterI…", 0x11, &data_c866b0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TexParameterIiv::hc5b9a2f7a9c25a26 = result_1;
    data_ce65c0 = result;
    return result;
}
