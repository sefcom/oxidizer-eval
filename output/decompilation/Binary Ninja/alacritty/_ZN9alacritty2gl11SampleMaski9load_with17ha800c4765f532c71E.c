
  void (*)() __noreturn alacritty::gl::SampleMaski::load_with::ha800c4765f532c71(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glSampleMaskiglSamplerParameterI…", 0xd, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::SampleMaski::h81077787f84d091e = result_1;
    data_ce63e0 = result;
    return result;
}
