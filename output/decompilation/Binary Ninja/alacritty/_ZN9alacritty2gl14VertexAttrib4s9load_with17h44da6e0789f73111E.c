
  void (*)() __noreturn alacritty::gl::VertexAttrib4s::load_with::h44da6e0789f73111(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4sNotNulTerminated…", 0x10, &data_c86cf0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib4s::hefd9552e5f8220ba = result_1;
    data_ce6a68 = result;
    return result;
}
