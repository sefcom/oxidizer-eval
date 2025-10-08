
  void (*)() __noreturn alacritty::gl::GenRenderbuffers::load_with::hf3c516ea79faecf2(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGenRenderbuffersglGenSamplersg…", 0x12, &data_c85f90, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GenRenderbuffers::h707268073ec5c846 = result_1;
    data_ce5b60 = result;
    return result;
}
