
  void (*)() __noreturn alacritty::gl::VertexAttribI1uiv::load_with::hc0187c1282f9797f(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI1uivglVertexAttri…", 0x13, &data_c86dd0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribI1uiv::hd0b1362c31aa1b9b = result_1;
    data_ce6af0 = result;
    return result;
}
