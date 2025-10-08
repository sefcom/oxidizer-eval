
  void (*)() __noreturn alacritty::gl::LinkProgram::load_with::h7128b2108679e8a4(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glLinkProgramglLogicOpglMapBuffe…", 0xd, &data_c86440, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::LinkProgram::hbaa61d8d0ce34338.0 = result_1;
    return result;
}
