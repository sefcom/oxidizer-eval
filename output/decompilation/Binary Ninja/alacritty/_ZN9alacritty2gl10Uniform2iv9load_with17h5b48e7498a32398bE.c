
  void (*)() __noreturn alacritty::gl::Uniform2iv::load_with::h5b48e7498a32398b(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform2ivglUniform2uiEXTglUni…", 0xc, &data_c867c0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Uniform2iv::h1dc10b3bb0767d79 = result_1;
    data_ce66c8 = result;
    return result;
}
