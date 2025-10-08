
  void (*)() __noreturn alacritty::gl::BufferData::load_with::h1f0b48226ec4c526(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBufferDataglBufferSubDataARBgl…", 0xc, &data_c85a30, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::BufferData::hb67d49aaaf64b9de.0 = result_1;
    return result;
}
