
  void (*)() __noreturn alacritty::gl::VertexAttrib2dv::load_with::haa3c83b2745fb0a3(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib2dvglVertexAttrib2…", 0x11, &data_c86a60, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib2dv::h3f00256a85237705 = result_1;
    data_ce68e8 = result;
    return result;
}
