
  void (*)() __noreturn alacritty::gl::GetActiveAttrib::load_with::hae44cef1affd8730(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glGetActiveAttribglGetActiveUnif…", 0x11, &data_c85fd0, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::GetActiveAttrib::hde22c766a35807ee = result_1;
    data_ce5ba0 = result;
    return result;
}
