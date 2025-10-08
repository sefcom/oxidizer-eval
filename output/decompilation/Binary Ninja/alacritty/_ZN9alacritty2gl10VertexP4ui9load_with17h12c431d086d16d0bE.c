
  void (*)() __noreturn alacritty::gl::VertexP4ui::load_with::h12c431d086d16d0b(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexP4uiglVertexP4uivglViewp…", 0xc, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexP4ui::h363a190d288ec184 = result_1;
    data_ce6cd8 = result;
    return result;
}
