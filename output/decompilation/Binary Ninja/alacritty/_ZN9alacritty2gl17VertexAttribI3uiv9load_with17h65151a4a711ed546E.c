
  void (*)() __noreturn alacritty::gl::VertexAttribI3uiv::load_with::h65151a4a711ed546(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI3uivglVertexAttri…", 0x13, &data_c86e50, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribI3uiv::h7e3c6721ee5f92ae = result_1;
    data_ce6b70 = result;
    return result;
}
