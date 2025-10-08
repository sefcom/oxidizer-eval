
  void (*)() __noreturn alacritty::gl::BeginTransformFeedback::load_with::hcd8bb3cb91e65457(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glBeginTransformFeedbackglBindAt…", 0x18, &data_c85900, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::BeginTransformFeedback::he846a889d1fe1100 = result_1;
    data_ce5590 = result;
    return result;
}
