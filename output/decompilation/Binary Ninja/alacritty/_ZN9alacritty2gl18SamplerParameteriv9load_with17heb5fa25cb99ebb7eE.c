
  void (*)() __noreturn alacritty::gl::SamplerParameteriv::load_with::heb5fa25cb99ebb7e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glSamplerParameterivglScissorglS…", 0x14, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::SamplerParameteriv::h8f1639ea6f468c05 = result_1;
    data_ce6440 = result;
    return result;
}
