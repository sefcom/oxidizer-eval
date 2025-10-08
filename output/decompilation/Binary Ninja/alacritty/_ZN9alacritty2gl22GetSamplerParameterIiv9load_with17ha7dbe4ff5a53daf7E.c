
  void (*)() __noreturn alacritty::gl::GetSamplerParameterIiv::load_with::ha7dbe4ff5a53daf7(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetSamplerParameterIivglGetSam…", 0x18, &data_c861b0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetSamplerParameterIiv::h4d2f980598e4d300 = result_1;
    data_ce5e38 = result;
    return result;
}
