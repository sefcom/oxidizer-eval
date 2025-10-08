
  void (*)() __noreturn alacritty::gl::GetShaderSource::load_with::ha6cdfe165544e108(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetShaderSourceglGetShaderivgl…", 0x11, &data_c861f0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetShaderSource::h8c179fed233a118d = result_1;
    data_ce5e80 = result;
    return result;
}
