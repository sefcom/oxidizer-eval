
  void (*)() __noreturn alacritty::gl::VertexAttrib3f::load_with::h3fc7435d31346648(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib3", 0x10, &data_c86b40, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib3f::h532a355af25089d4 = result_1;
    data_ce6958 = result;
    return result;
}
