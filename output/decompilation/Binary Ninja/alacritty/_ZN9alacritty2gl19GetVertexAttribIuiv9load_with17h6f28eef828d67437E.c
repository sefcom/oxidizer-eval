
  void (*)() __noreturn alacritty::gl::GetVertexAttribIuiv::load_with::h6f28eef828d67437(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetVertexAttribIuivglGetVertex…", 0x15, &data_c862b0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetVertexAttribIuiv::hf1602ab5d5ee2b1e = result_1;
    data_ce5fa0 = result;
    return result;
}
