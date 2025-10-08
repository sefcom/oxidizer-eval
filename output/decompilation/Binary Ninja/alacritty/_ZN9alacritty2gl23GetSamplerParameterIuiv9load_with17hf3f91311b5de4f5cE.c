
  void (*)() __noreturn alacritty::gl::GetSamplerParameterIuiv::load_with::hf3f91311b5de4f5c(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetSamplerParameterIuivglGetSa…", 0x19, &data_c861d0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetSamplerParameterIuiv::h6efd1ef9782d6bab = result_1;
    data_ce5e48 = result;
    return result;
}
