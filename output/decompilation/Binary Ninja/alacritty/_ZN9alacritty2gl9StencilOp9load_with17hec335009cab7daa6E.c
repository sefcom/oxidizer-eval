
  void (*)() __noreturn alacritty::gl::StencilOp::load_with::hec335009cab7daa6(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glStencilOpglStencilOpSeparateAT…", 0xb, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::StencilOp::h757cf37b280bbf61 = result_1;
    data_ce64c8 = result;
    return result;
}
