
  void (*)() __noreturn alacritty::gl::DrawArraysInstanced::load_with::h4dbd57a5f3c448b8(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDrawArraysInstancedglDrawBuffe…", 0x15, &data_c85ce0, 4);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DrawArraysInstanced::he7897eb2f891fd8b = result_1;
    data_ce59c0 = result;
    return result;
}
