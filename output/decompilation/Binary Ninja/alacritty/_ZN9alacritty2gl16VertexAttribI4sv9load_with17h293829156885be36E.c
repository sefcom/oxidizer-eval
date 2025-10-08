
  void (*)() __noreturn alacritty::gl::VertexAttribI4sv::load_with::h293829156885be36(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI4svglVertexAttrib…", 0x12, &data_c86e90, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribI4sv::h1982bd583f0d7b73 = result_1;
    data_ce6bb0 = result;
    return result;
}
