
  void (*)() __noreturn alacritty::gl::UseProgram::load_with::h911aa88e2be10fa8(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glUseProgramglValidateProgramARB…", 0xc, &data_c86960, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    *alacritty::gl::storage::UseProgram::h8c17565e1cab04ca.0 = result_1;
    return result;
}
