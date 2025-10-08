
  void (*)() __noreturn alacritty::gl::VertexAttrib2sv::load_with::h77abd2257ce8be58(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttrib2svglVertexAttrib3…", 0x11, &data_c86ae0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttrib2sv::hf9c74f8c44d222ea = result_1;
    data_ce6928 = result;
    return result;
}
