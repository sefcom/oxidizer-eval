
  void (*)() __noreturn alacritty::gl::GetVertexAttribIiv::load_with::heceb424f12ed3efd(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetVertexAttribIivglGetVertexA…", 0x14, &data_c862a0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetVertexAttribIiv::h0ad71d0fa18061f1 = result_1;
    data_ce5f90 = result;
    return result;
}
