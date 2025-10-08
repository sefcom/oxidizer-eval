
  void (*)() __noreturn alacritty::gl::VertexAttrib4sv::load_with::h333cb9ef53046b79(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib4svglVertexAttrib4…", 0x11, &data_c86d10, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib4sv::hf97a6f04e136f94f = result_1;
    data_ce6a78 = result;
    return result;
}
