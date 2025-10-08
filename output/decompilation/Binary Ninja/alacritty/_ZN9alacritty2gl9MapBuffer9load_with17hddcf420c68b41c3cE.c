
  void (*)() __noreturn alacritty::gl::MapBuffer::load_with::hddcf420c68b41c3c(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glMapBufferglMapBufferRangeEXTgl…", 0xb, &data_c86450, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::MapBuffer::hbd7d803bb2fc3413 = result_1;
    data_ce6148 = result;
    return result;
}
