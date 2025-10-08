
  void (*)() __noreturn alacritty::gl::VertexP2uiv::load_with::hf053cd0fb3ca7031(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexP2uivglVertexP3uiglVerte…", 0xd, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexP2uiv::h0b78cd32e8c9e906 = result_1;
    data_ce6ca8 = result;
    return result;
}
