
  void (*)() __noreturn alacritty::gl::EndTransformFeedback::load_with::h3ac674ae366a2aa9(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glEndTransformFeedbackglFenceSyn…", 0x16, &data_c85e80, 2);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::EndTransformFeedback::hb9336a18505677e2 = result_1;
    data_ce5a80 = result;
    return result;
}
