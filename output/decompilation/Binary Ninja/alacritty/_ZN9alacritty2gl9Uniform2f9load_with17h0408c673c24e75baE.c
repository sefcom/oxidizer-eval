
  void (*)() __noreturn alacritty::gl::Uniform2f::load_with::h0408c673c24e75ba(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform2fglUniform2fvARBglUnif…", 0xb, &data_c86790, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::Uniform2f::ha7e19b8c8b13375a.0 = result_1;
    return result;
}
