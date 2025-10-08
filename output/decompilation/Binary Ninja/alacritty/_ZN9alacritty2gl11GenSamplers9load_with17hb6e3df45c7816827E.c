
  void (*)() __noreturn alacritty::gl::GenSamplers::load_with::hb6e3df45c7816827(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGenSamplersglGenTexturesglGenV…", 0xd, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GenSamplers::hae232a5de65423bb = result_1;
    data_ce5b70 = result;
    return result;
}
