
  void (*)() __noreturn alacritty::gl::VertexAttribP2uiv::load_with::h858d0671cb8f45cd(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribP2uivglVertexAttri…", 0x13, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribP2uiv::h323092e96570b6b8 = result_1;
    data_ce6c40 = result;
    return result;
}
