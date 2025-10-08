
  void (*)() __noreturn alacritty::gl::GetVertexAttribdv::load_with::heeeaf08827faca2f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetVertexAttribdvglGetVertexAt…", 0x13, &data_c862e0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetVertexAttribdv::h9741acaac2c4e14e = result_1;
    data_ce5fc0 = result;
    return result;
}
