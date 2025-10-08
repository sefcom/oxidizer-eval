
  void (*)() __noreturn alacritty::gl::VertexAttrib4ubv::load_with::h79da37c85e1b6beb(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4ubvglVertexAttrib…", 0x12, &data_c86d30, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib4ubv::h4976f1e48e3ca0a1 = result_1;
    data_ce6a88 = result;
    return result;
}
