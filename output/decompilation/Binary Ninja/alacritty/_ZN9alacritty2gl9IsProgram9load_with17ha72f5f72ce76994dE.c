
  void (*)() __noreturn alacritty::gl::IsProgram::load_with::ha72f5f72ce76994d(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glIsProgramglIsQueryARBglIsQuery…", 0xb, 8, 0);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::IsProgram::hffb707a9fec655ae = result_1;
    data_ce60a0 = result;
    return result;
}
