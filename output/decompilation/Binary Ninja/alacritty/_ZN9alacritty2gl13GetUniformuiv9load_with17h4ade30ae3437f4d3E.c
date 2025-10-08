
  void (*)() __noreturn alacritty::gl::GetUniformuiv::load_with::h4ade30ae3437f4d3(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetUniformuivglGetVertexAttrib…", 0xf, &data_c86290, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetUniformuiv::ha1c23075028ac168 = result_1;
    data_ce5f80 = result;
    return result;
}
