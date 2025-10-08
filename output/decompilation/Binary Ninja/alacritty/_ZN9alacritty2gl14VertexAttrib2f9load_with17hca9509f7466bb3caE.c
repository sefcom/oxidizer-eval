
  void (*)() __noreturn alacritty::gl::VertexAttrib2f::load_with::hca9509f7466bb3ca(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib2fglVertexAttrib3d", 0x10, &data_c86a80, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib2f::h467008a6dba4e10e = result_1;
    data_ce68f8 = result;
    return result;
}
