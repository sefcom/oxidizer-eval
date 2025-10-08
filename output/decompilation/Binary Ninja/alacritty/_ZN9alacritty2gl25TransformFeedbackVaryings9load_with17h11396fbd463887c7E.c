
  void (*)() __noreturn alacritty::gl::TransformFeedbackVaryings::load_with::h11396fbd463887c7(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glTransformFeedbackVaryingsglUni…", 0x1b, &data_c86720, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::TransformFeedbackVaryings::h9d8d51e8d2d61abe = result_1;
    data_ce6640 = result;
    return result;
}
