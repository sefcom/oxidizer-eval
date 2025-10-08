
  void (*)() __noreturn alacritty::gl::SamplerParameteri::load_with::h1953da442b8a01e2(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glSamplerParameteriglSamplerPara…", 0x13, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::SamplerParameteri::hf8e31fc747961f78 = result_1;
    data_ce6430 = result;
    return result;
}
