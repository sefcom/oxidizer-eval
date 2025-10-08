
  void (*)() __noreturn alacritty::gl::DrawBuffer::load_with::h7e276cb76b391c99(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glDrawBufferglDrawBuffersglDrawE…", 0xc, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::DrawBuffer::ha55c1bc84cd5fceb = result_1;
    data_ce59d0 = result;
    return result;
}
