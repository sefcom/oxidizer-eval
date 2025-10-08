
  void (*)() __noreturn alacritty::gl::VertexAttrib2fv::load_with::h374cdbda66d9a23e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib2fvglVertexAttrib2…", 0x11, &data_c86aa0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib2fv::h16a7512411439f5f = result_1;
    data_ce6908 = result;
    return result;
}
