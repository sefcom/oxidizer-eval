
  void (*)() __noreturn alacritty::gl::GetVertexAttribfv::load_with::h0880343fb5250a3b(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetVertexAttribfvglGetVertexAt…", 0x13, &data_c86300, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetVertexAttribfv::hfa6079fb3344ac62 = result_1;
    data_ce5fd0 = result;
    return result;
}
