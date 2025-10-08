
  void (*)() __noreturn alacritty::gl::VertexAttrib4Nuiv::load_with::h360d97dc0a0169e8(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4NuivglVertexAttri…", 0x13, &data_c86c30, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib4Nuiv::h93647beed364f784 = result_1;
    data_ce69e8 = result;
    return result;
}
