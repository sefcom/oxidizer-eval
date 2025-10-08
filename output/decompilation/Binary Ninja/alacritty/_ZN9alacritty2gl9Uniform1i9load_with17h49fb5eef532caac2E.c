
  void (*)() __noreturn alacritty::gl::Uniform1i::load_with::h49fb5eef532caac2(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform1iglUniform1ivARBglUnif…", 0xb, &data_c86750, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::Uniform1i::h58a54799f0d50833.0 = result_1;
    return result;
}
