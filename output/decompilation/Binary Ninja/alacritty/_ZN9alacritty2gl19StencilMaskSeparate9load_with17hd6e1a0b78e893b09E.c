
  void (*)() __noreturn alacritty::gl::StencilMaskSeparate::load_with::hd6e1a0b78e893b09(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glStencilMaskSeparateglStencilOp…", 0x15, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::StencilMaskSeparate::h5f2c9befa43c2de6 = result_1;
    data_ce64b8 = result;
    return result;
}
