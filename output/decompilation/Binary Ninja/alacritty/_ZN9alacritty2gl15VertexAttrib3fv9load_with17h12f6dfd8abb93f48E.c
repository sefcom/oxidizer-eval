
  void (*)() __noreturn alacritty::gl::VertexAttrib3fv::load_with::h12f6dfd8abb93f48(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib3fvglVertexAttrib3…", 0x11, &data_c86b60, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib3fv::h6d077b8bb839e42f = result_1;
    data_ce6968 = result;
    return result;
}
