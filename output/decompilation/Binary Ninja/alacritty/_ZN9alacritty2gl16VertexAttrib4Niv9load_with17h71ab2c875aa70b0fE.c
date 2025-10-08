
  void (*)() __noreturn alacritty::gl::VertexAttrib4Niv::load_with::h71ab2c875aa70b0f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4NivglVertexAttrib…", 0x12, &data_c86bd0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib4Niv::ha51dc22972d4dc38 = result_1;
    data_ce69a8 = result;
    return result;
}
