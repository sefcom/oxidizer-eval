
  void (*)() __noreturn alacritty::gl::VertexAttrib1fv::load_with::he0dd8a88c78fe7c8(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib1fvglVertexAttrib1…", 0x11, &data_c869e0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib1fv::h09400605f23cab28 = result_1;
    data_ce68a8 = result;
    return result;
}
