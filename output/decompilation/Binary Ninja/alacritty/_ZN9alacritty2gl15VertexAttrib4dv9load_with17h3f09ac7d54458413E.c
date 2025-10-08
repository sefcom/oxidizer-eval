
  void (*)() __noreturn alacritty::gl::VertexAttrib4dv::load_with::h3f09ac7d54458413(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4dvglVertexAttrib4…", 0x11, &data_c86c80, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib4dv::h6545e57f93e068c7 = result_1;
    data_ce6a28 = result;
    return result;
}
