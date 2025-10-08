
  void (*)() __noreturn alacritty::gl::GetVertexAttribiv::load_with::hb3e008ab3eb94ec0(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetVertexAttribivglGetnUniform…", 0x13, &data_c86320, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetVertexAttribiv::h46e4d254ef6815ad = result_1;
    data_ce5fe0 = result;
    return result;
}
