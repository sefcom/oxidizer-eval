
  void (*)() __noreturn alacritty::gl::Uniform2uiv::load_with::hf4c7e2a915d48213(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform2uivglUniform3fARBglUni…", 0xd, &data_c867e0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Uniform2uiv::h33b15dd16bc36642 = result_1;
    data_ce66e8 = result;
    return result;
}
