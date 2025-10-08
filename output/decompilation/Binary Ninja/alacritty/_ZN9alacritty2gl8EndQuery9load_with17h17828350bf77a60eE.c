
  void (*)() __noreturn alacritty::gl::EndQuery::load_with::h17828350bf77a60e(int64_t arg1)

{
    int64_t var_10 = arg1;
    void* const var_8 = &data_c86f38;
    void (* result)() __noreturn = alacritty::gl::metaloadfn::h7eed37a2c35596e4(&var_10, 
        "glEndQueryglEndTransformFeedback…", 0xa, &data_c85e70, 1);
    void (* result_1)() __noreturn = alacritty::gl::missing_fn_panic::h74aefa71347b4c5e;
    
    if (result)
        result_1 = result;
    
    alacritty::gl::storage::EndQuery::h9cd58848b497aa16 = result_1;
    data_ce5a70 = result;
    return result;
}
