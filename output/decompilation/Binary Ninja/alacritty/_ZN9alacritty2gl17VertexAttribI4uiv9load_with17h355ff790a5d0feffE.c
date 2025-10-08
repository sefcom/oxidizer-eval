
  void (*)() __noreturn alacritty::gl::VertexAttribI4uiv::load_with::h355ff790a5d0feff(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI4uivglVertexAttri…", 0x13, &data_c86ec0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribI4uiv::hb60180a4d7cc677e = result_1;
    data_ce6be0 = result;
    return result;
}
