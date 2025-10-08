
  void (*)() __noreturn alacritty::gl::GetIntegeri_v::load_with::h708ee7cc5582fe96(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetIntegeri_vglGetIntegervglGe…", 0xf, &data_c860e0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetIntegeri_v::hab3ae3f727fd68df = result_1;
    data_ce5d40 = result;
    return result;
}
