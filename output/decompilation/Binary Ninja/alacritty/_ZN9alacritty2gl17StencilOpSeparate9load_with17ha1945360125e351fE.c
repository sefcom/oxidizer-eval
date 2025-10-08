
  void (*)() __noreturn alacritty::gl::StencilOpSeparate::load_with::ha1945360125e351f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glStencilOpSeparateglTexBufferAR…", 0x13, &data_c86660, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::StencilOpSeparate::h17f20b9e2d5f5ee4 = result_1;
    data_ce64d8 = result;
    return result;
}
