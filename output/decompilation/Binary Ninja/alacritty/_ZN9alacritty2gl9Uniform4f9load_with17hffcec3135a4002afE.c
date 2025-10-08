
  void (*)() __noreturn alacritty::gl::Uniform4f::load_with::hffcec3135a4002af(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUniform4fglUniform4fvARBglUnif…", 0xb, &data_c86850, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::Uniform4f::h285528eef856017e.0 = result_1;
    return result;
}
