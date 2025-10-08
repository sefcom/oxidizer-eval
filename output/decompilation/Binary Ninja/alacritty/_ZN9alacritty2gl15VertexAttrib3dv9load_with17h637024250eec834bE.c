
  void (*)() __noreturn alacritty::gl::VertexAttrib3dv::load_with::h637024250eec834b(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib3dvglVertexAttrib3…", 0x11, &data_c86b20, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib3dv::hf8c82c90380d1686 = result_1;
    data_ce6948 = result;
    return result;
}
