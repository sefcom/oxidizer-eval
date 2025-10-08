
  void (*)() __noreturn alacritty::gl::Uniform2i::load_with::hfa2002d2ac867390(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform2iglUniform2ivARBglUnif…", 0xb, &data_c867b0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::Uniform2i::h481e8dfa4be20b4a = result_1;
    data_ce66b8 = result;
    return result;
}
