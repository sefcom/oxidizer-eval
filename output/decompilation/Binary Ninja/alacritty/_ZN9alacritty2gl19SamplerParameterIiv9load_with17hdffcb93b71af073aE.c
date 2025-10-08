
  void (*)() __noreturn alacritty::gl::SamplerParameterIiv::load_with::hdffcb93b71af073a(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glSamplerParameterIivglSamplerPa…", 0x15, &data_c86610, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::SamplerParameterIiv::h312e34028a3856ab = result_1;
    data_ce63f0 = result;
    return result;
}
