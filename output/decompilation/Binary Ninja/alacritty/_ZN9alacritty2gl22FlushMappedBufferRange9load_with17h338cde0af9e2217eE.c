
  void (*)() __noreturn alacritty::gl::FlushMappedBufferRange::load_with::h338cde0af9e2217e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glFlushMappedBufferRangeglFrameb…", 0x18, &data_c85eb0, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::FlushMappedBufferRange::h94b0b796c191ca06 = result_1;
    data_ce5ab8 = result;
    return result;
}
