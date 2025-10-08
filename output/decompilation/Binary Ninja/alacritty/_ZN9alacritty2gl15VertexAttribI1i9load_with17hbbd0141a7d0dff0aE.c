
  void (*)() __noreturn alacritty::gl::VertexAttribI1i::load_with::hbbd0141a7d0dff0a(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glVertexAttribI1iglVertexAttribI…", 0x11, &data_c86da0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::VertexAttribI1i::h4c180d2c003c923b = result_1;
    data_ce6ac0 = result;
    return result;
}
